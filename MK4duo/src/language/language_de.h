/**
 * MK4duo 3D Printer Firmware
 *
 * Based on Marlin, Sprinter and grbl
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 * Copyright (C) 2013 - 2017 Alberto Cotronei @MagoKimbra
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

/**
 * German
 *
 * LCD Menu Messages
 * See also documentation/LCDLanguageFont.md
 *
 */
#ifndef LANGUAGE_DE_H
#define LANGUAGE_DE_H

#define MAPPER_C2C3
#define DISPLAY_CHARSET_ISO10646_1

#define THIS_LANGUAGES_SPECIAL_SYMBOLS      _UxGT("ÄäÖöÜüß²³")

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" bereit")
#define MSG_BACK                            _UxGT("Zurück")
#define MSG_SD_INSERTED                     _UxGT("SD-Karte erkannt")
#define MSG_SD_REMOVED                      _UxGT("SD-Karte entfernt")
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstopp") // Max length 8 characters
#define MSG_MAIN                            _UxGT("Hauptmenü")
#define MSG_AUTOSTART                       _UxGT("Autostart")
#define MSG_DISABLE_STEPPERS                _UxGT("Motoren deaktivieren") // M84
#define MSG_AUTO_HOME                       _UxGT("Home") // G28
#define MSG_AUTO_HOME_X                     _UxGT("Home X")
#define MSG_AUTO_HOME_Y                     _UxGT("Home Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Home Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Homing XYZ")
#define MSG_LEVEL_BED_WAITING               _UxGT("Klick für Start")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Nächste Koordinate")
#define MSG_LEVEL_BED_DONE                  _UxGT("Fertig")
#define MSG_LEVEL_BED_CANCEL                _UxGT("Abbruch")
#define MSG_SET_HOME_OFFSETS                _UxGT("Setze Homeversatz")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Homeversatz aktiv")
#define MSG_SET_ORIGIN                      _UxGT("Setze Nullpunkt") //"G92 X0 Y0 Z0" commented out in ultralcd.cpp
#define MSG_PREHEAT_1                       _UxGT("Vorwärmen PLA")
#define MSG_PREHEAT_1_N                     _UxGT("Vorwärmen PLA ")
#define MSG_PREHEAT_1_ALL                   _UxGT("Vorw. PLA Alle")
#define MSG_PREHEAT_1_END                   _UxGT("Vorw. PLA Extr.")
#define MSG_PREHEAT_1_BEDONLY               _UxGT("Vorw. PLA Bett")
#define MSG_PREHEAT_1_SETTINGS              _UxGT("Vorw. PLA Einst.")
#define MSG_PREHEAT_2                       _UxGT("Vorwärmen ABS")
#define MSG_PREHEAT_2_N                     _UxGT("Vorwärmen ABS ")
#define MSG_PREHEAT_2_ALL                   _UxGT("Vorw. ABS Alle")
#define MSG_PREHEAT_2_END                   _UxGT("Vorw. ABS Extr.")
#define MSG_PREHEAT_2_BEDONLY               _UxGT("Vorw. ABS Bett")
#define MSG_PREHEAT_2_SETTINGS              _UxGT("Vorw. ABS Einst.")
#define MSG_COOLDOWN                        _UxGT("Abkühlen")
#define MSG_SWITCH_PS_ON                    _UxGT("Netzteil ein")
#define MSG_SWITCH_PS_OFF                   _UxGT("Netzteil aus")
#define MSG_EXTRUDE                         _UxGT("Extrudieren")
#define MSG_RETRACT                         _UxGT("Retract")
#define MSG_MOVE_AXIS                       _UxGT("Bewegen")
#define MSG_LEVEL_BED                       _UxGT("Bett nivellieren")
#define MSG_MOVING                          _UxGT("In Bewegung...")
#define MSG_FREE_XY                         _UxGT("Abstand XY")
#define MSG_MOVE_X                          _UxGT("X")
#define MSG_MOVE_Y                          _UxGT("Y")
#define MSG_MOVE_Z                          _UxGT("Z")
#define MSG_MOVE_E                          _UxGT("Extruder ")
#define MSG_MOVE_01MM                       _UxGT(" 0,1 mm")
#define MSG_MOVE_1MM                        _UxGT(" 1,0 mm")
#define MSG_MOVE_10MM                       _UxGT("10,0 mm")
#define MSG_SPEED                           _UxGT("Geschw.")
#define MSG_BED_Z                           _UxGT("Bett Z")
#define MSG_NOZZLE                          _UxGT("Düse")
#define MSG_BED                             _UxGT("Bett")
#define MSG_FAN_SPEED                       _UxGT("Lüfter")
#define MSG_FLOW                            _UxGT("Durchfluss")
#define MSG_CONTROL                         _UxGT("Einstellungen")
#define MSG_MIN                             LCD_STR_THERMOMETER _UxGT(" min")
#define MSG_MAX                             LCD_STR_THERMOMETER _UxGT(" max")
#define MSG_FACTOR                          LCD_STR_THERMOMETER _UxGT(" Faktor")
#define MSG_AUTOTEMP                        _UxGT("AutoTemp")
#define MSG_ON                              _UxGT("Ein")
#define MSG_OFF                             _UxGT("Aus")
#define MSG_PID_P                           _UxGT("PID P")
#define MSG_PID_I                           _UxGT("PID I")
#define MSG_PID_D                           _UxGT("PID D")
#define MSG_PID_C                           _UxGT("PID C")
#define MSG_SELECT                          _UxGT("Auswählen")
#define MSG_ACC                             _UxGT("A")
#define MSG_VX_JERK                         _UxGT("V X Jerk")
#define MSG_VY_JERK                         _UxGT("V Y Jerk")
#define MSG_VZ_JERK                         _UxGT("V Z Jerk")
#define MSG_VE_JERK                         _UxGT("V E Jerk")
#define MSG_VMAX                            _UxGT("V max ") // space by purpose
#define MSG_VMIN                            _UxGT("V min")
#define MSG_VTRAV_MIN                       _UxGT("V min Leerfahrt")
#define MSG_AMAX                            _UxGT("A max ") // space by purpose
#define MSG_A_RETRACT                       _UxGT("A Retract")
#define MSG_A_TRAVEL                        _UxGT("A Leerfahrt")
#define MSG_XSTEPS                          _UxGT("X Steps/mm")
#define MSG_YSTEPS                          _UxGT("Y Steps/mm")
#define MSG_ZSTEPS                          _UxGT("Z Steps/mm")
#define MSG_ESTEPS                          _UxGT("E Steps/mm")
#define MSG_E1STEPS                         _UxGT("E1 Steps/mm")
#define MSG_E2STEPS                         _UxGT("E2 Steps/mm")
#define MSG_E3STEPS                         _UxGT("E3 Steps/mm")
#define MSG_E4STEPS                         _UxGT("E4 Steps/mm")
#define MSG_E5STEPS                         _UxGT("E5 Steps/mm")
#define MSG_TEMPERATURE                     _UxGT("Temperatur")
#define MSG_MOTION                          _UxGT("Bewegung")
#define MSG_FILAMENT                        _UxGT("Filament")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm³")
#define MSG_FILAMENT_DIAM                   _UxGT("D Fil.")
#define MSG_ADVANCE_K                       _UxGT("Advance Faktor")
#define MSG_CONTRAST                        _UxGT("LCD Kontrast")
#define MSG_STORE_EEPROM                    _UxGT("EPROM speichern")
#define MSG_LOAD_EEPROM                     _UxGT("EPROM laden")
#define MSG_RESTORE_FAILSAFE                _UxGT("Standardkonfiguration")
#define MSG_REFRESH                         _UxGT("Aktualisieren")
#define MSG_WATCH                           _UxGT("Info")
#define MSG_PREPARE                         _UxGT("Vorbereitung")
#define MSG_TUNE                            _UxGT("Justierung")
#define MSG_PAUSE_PRINT                     _UxGT("SD-Druck Pause")
#define MSG_RESUME_PRINT                    _UxGT("SD-Druck Fortsetzung")
#define MSG_STOP_PRINT                      _UxGT("SD-Druck Abbruch")
#define MSG_CARD_MENU                       _UxGT("SD-Karte")
#define MSG_NO_CARD                         _UxGT("Keine SD-Karte")
#define MSG_DWELL                           _UxGT("Warten...")
#define MSG_USERWAIT                        _UxGT("Warte auf Nutzer")
#define MSG_RESUMING                        _UxGT("Druckfortsetzung")
#define MSG_PRINT_ABORTED                   _UxGT("Druck abgebrochen")
#define MSG_NO_MOVE                         _UxGT("Motoren eingeschaltet")
#define MSG_KILLED                          _UxGT("ABGEBROCHEN")
#define MSG_STOPPED                         _UxGT("ANGEHALTEN")
#define MSG_CONTROL_RETRACT                 _UxGT("Retract mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Wechs. Retract mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Retract  V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Z-Hop mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("Wechs. UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")
#define MSG_AUTORETRACT                     _UxGT("Autom. Retract")
#define MSG_FILAMENTCHANGE                  _UxGT("Filament wechseln")
#define MSG_INIT_SDCARD                     _UxGT("SD-Karte erkennen")  // Manually initialize the SD-card via user interface
#define MSG_CNG_SDCARD                      _UxGT("SD-Karte getauscht") // SD-card changed by user. For machines with no autocarddetect. Both send "M21"
#define MSG_ZPROBE_OUT                      _UxGT("Sensor ausserhalb")
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch Test")
#define MSG_BLTOUCH_RESET                   _UxGT("BLTouch Reset")
#define MSG_HOME                            _UxGT("Vorher")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("homen")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z Versatz")
#define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Endstopp-Abbr.")
#define MSG_HEATING_FAILED_LCD              _UxGT("HEIZEN FEHLGESCHLAGEN")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("REDUND. TEMPERATURABWEICHUNG")
#define MSG_THERMAL_RUNAWAY                 LCD_STR_THERMOMETER _UxGT(" NICHT ERREICHT")
#define MSG_ERR_MAXTEMP                     LCD_STR_THERMOMETER _UxGT(" ÜBERSCHRITTEN")
#define MSG_ERR_MINTEMP                     LCD_STR_THERMOMETER _UxGT(" UNTERSCHRITTEN")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("BETT ") LCD_STR_THERMOMETER _UxGT(" ÜBERSCHRITTEN")
#define MSG_ERR_MINTEMP_BED                 _UxGT("BETT ") LCD_STR_THERMOMETER _UxGT(" UNTERSCHRITTEN")
#define MSG_ERR_Z_HOMING                    _UxGT("G28 Z verboten")
#define MSG_HALTED                          _UxGT("DRUCKER STOPP")
#define MSG_PLEASE_RESET                    _UxGT("Bitte Resetten")
#define MSG_SHORT_DAY                       _UxGT("t") // One character only
#define MSG_SHORT_HOUR                      _UxGT("h") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("m") // One character only
#define MSG_HEATING                         _UxGT("Extr. heizt...")
#define MSG_HEATING_COMPLETE                _UxGT("Extr. aufgeheizt")
#define MSG_BED_HEATING                     _UxGT("Bett heizt...")
#define MSG_BED_DONE                        _UxGT("Bett aufgeheizt")
#define MSG_DELTA_CALIBRATE                 _UxGT("Delta kalibrieren")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Kalibriere X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Kalibriere Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Kalibriere Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Kalibriere Mitte")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Autom. Kalibrierung")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Delta Höhe setzen")
#define MSG_DEBUG_MENU                      _UxGT("Debug Menu")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Fortschrittb. Test")

#define MSG_INFO_MENU                       _UxGT("Über den Drucker")
#define MSG_INFO_PRINTER_MENU               _UxGT("Drucker Info")
#define MSG_INFO_STATS_MENU                 _UxGT("Drucker Stat.")
#define MSG_INFO_BOARD_MENU                 _UxGT("Board Info")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Thermistoren")
#define MSG_INFO_EXTRUDERS                  _UxGT("Extruder")
#define MSG_INFO_BAUDRATE                   _UxGT("Baud")
#define MSG_INFO_PROTOCOL                   _UxGT("Protokoll")
#define MSG_LIGHTS_ON                       _UxGT("Gehäuse Licht an")
#define MSG_LIGHTS_OFF                      _UxGT("Gehäuse Licht aus")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Gesamte Drucke")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Beendete Drucke")
  #define MSG_INFO_PRINT_TIME               _UxGT("Gesamte Druckzeit")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Längster Druckjob")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Gesamt Extrudiert")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Drucke")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Komplett")
  #define MSG_INFO_PRINT_TIME               _UxGT("Gesamt ")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Längster")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Extrud.")
#endif
#define MSG_INFO_MIN_TEMP                   _UxGT("Min Temp")
#define MSG_INFO_MAX_TEMP                   _UxGT("Max Temp")
#define MSG_INFO_PSU                        _UxGT("Stromversorgung")

#define MSG_DRIVE_STRENGTH                  _UxGT("Motorströme")
#define MSG_DAC_PERCENT                     _UxGT("Treiber %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("Werte speichern")

#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("ÄNDERE FILAMENT")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("ÄNDERE OPTIONEN:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("Extrude mehr")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Drucke weiter")
#define MSG_FILAMENT_CHANGE_MINTEMP         _UxGT("Min. Temperatur ist ")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Düse: ")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Warte auf den")
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("Start des")
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("Filamentwechsels")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Warte auf")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("Herausnahme")
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        _UxGT("des Filaments")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Filament einlegen")
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("und Knopf")
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("drücken...")
  #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("Knopf drücken um")
  #define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("Düse aufzuheizen.")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Düse heizt auf.")
  #define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("Bitte warten...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Warte auf")
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("Laden des")
  #define MSG_FILAMENT_CHANGE_LOAD_3          _UxGT("Filaments")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Warte auf")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("Extrusion des")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3       _UxGT("Filaments")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Warte auf")
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("Fortsetzung des")
  #define MSG_FILAMENT_CHANGE_RESUME_3        _UxGT("Druckes")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Bitte warten...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Auswerfen...")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Laden und Klick")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Heizen...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Laden...")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("Extrudieren...")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Fortsetzen...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_DE_H
