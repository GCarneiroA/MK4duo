/**
 * MK4duo Firmware for 3D Printer, Laser and CNC
 *
 * Based on Marlin, Sprinter and grbl
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 * Copyright (C) 2013 Alberto Cotronei @MagoKimbra
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

//
// SD Card Menu
//

#include "../../../MK4duo.h"

#if HAS_LCD_MENU && HAS_SD_SUPPORT

#if !PIN_EXISTS(SD_DETECT)
  void lcd_sd_refresh() {
    card.mount();
    encoderTopLine = 0;
  }
#endif

void lcd_sd_updir() {
  encoderPosition = card.updir() ? ENCODER_STEPS_PER_MENU_ITEM : 0;
  encoderTopLine = 0;
  screen_changed = true;
  lcd_refresh();
}

#if ENABLED(SD_REPRINT_LAST_SELECTED_FILE)
  uint32_t last_sdfile_encoderPosition = 0xFFFF;

  void lcd_reselect_last_file() {
    if (last_sdfile_encoderPosition == 0xFFFF) return;
    #if HAS_GRAPHICAL_LCD
      // Some of this is a hack to force the screen update to work.
      // TODO: Fix the real issue that causes this!
      lcdDrawUpdate = LCDVIEW_CALL_REDRAW_NEXT;
      lcd_synchronize();
      safe_delay(50);
      lcd_synchronize();
      lcdDrawUpdate = LCDVIEW_CALL_REDRAW_NEXT;
      drawing_screen = screen_changed = true;
    #endif

    lcd_goto_screen(menu_sdcard, last_sdfile_encoderPosition);
    set_defer_return_to_status(true);
    last_sdfile_encoderPosition = 0xFFFF;

    #if HAS_GRAPHICAL_LCD
      lcd_update();
    #endif
  }
#endif

class menu_item_sdfile {
  public:
    static void action(PGM_P longFilename) {
      #if ENABLED(SD_REPRINT_LAST_SELECTED_FILE)
        last_sdfile_encoderPosition = encoderPosition;  // Save which file was selected for later use
      #endif
      card.openAndPrintFile(longFilename);
      lcd_return_to_status();
      lcd_reset_status();
    }
};

class menu_item_sddirectory {
  public:
    static void action(PGM_P longFilename) {
      card.chdir(longFilename);
      encoderTopLine = 0;
      encoderPosition = 2 * ENCODER_STEPS_PER_MENU_ITEM;
      screen_changed = true;
      #if HAS_GRAPHICAL_LCD
        drawing_screen = false;
      #endif
      lcd_refresh();
    }
};

void menu_sdcard() {
  ENCODER_DIRECTION_MENUS();

  const uint16_t fileCnt = card.get_num_Files();

  START_MENU();
  MENU_BACK(MSG_MAIN);
  card.getWorkDirName();
  if (card.fileName[0] == '/') {
    #if !PIN_EXISTS(SD_DETECT)
      MENU_ITEM(function, LCD_STR_REFRESH MSG_REFRESH, lcd_sd_refresh);
    #endif
  }
  else {
    MENU_ITEM(function, LCD_STR_FOLDER "..", lcd_sd_updir);
  }

  for (uint16_t i = 0; i < fileCnt; i++) {
    if (_menuLineNr == _thisItemNr) {

      card.getfilename_sorted(i);

      if (card.isFilenameIsDir())
        MENU_ITEM(sddirectory, MSG_CARD_MENU, card.fileName);
      else
        MENU_ITEM(sdfile, MSG_CARD_MENU, card.fileName);
    }
    else {
      MENU_ITEM_DUMMY();
    }
  }
  END_MENU();
}

#endif // HAS_LCD_MENU && HAS_SD_SUPPORT
