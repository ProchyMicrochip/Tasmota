/*
  pl-PL-d.h - localization for Polish with diacritics - Poland for Tasmota

  Copyright (C) 2020  Theo Arends (translated by roblad - Robert L., upgraded by R. Turala)

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _LANGUAGE_PL_PL_D_H_
#define _LANGUAGE_PL_PL_D_H_

/*************************** ATTENTION *******************************\
 *
 * Due to memory constraints only UTF-8 is supported.
 * To save code space keep text as short as possible.
 * Time and Date provided by SDK can not be localized (yet).
 * Use online command StateText to translate ON, OFF, HOLD and TOGGLE.
 * Use online command Prefix to translate cmnd, stat and tele.
 *
 * Updated until v5.12.0d
\*********************************************************************/

//#define LANGUAGE_MODULE_NAME         // Enable to display "Module Generic" (ie Spanish), Disable to display "Generic Module" (ie English)

#define LANGUAGE_LCID 1045
// HTML (ISO 639-1) Language Code
#define D_HTML_LANGUAGE "pl"

// "2017-03-07T11:08:02" - ISO8601:2004
#define D_YEAR_MONTH_SEPARATOR "-"
#define D_MONTH_DAY_SEPARATOR "-"
#define D_DATE_TIME_SEPARATOR "T"
#define D_HOUR_MINUTE_SEPARATOR ":"
#define D_MINUTE_SECOND_SEPARATOR ":"

#define D_DAY3LIST "NiePonWtoŚroCzwPiąSob"
#define D_MONTH3LIST "StyLutMarKwiMajCzeLipSieWrzPaźLisGru"

// Non JSON decimal separator
#define D_DECIMAL_SEPARATOR ","

// Common
#define D_ADMIN "Admin"
#define D_AIR_QUALITY "Jakość powietrza"
#define D_AP "AP"                    // Access Point
#define D_AS "jak"
#define D_AUTO "AUTO"
#define D_BATT "Batt"                // Short for Battery
#define D_BLINK "Miganie"
#define D_BLINKOFF "Miganie - Wył."
#define D_BOOT_COUNT "Licznik restartów"
#define D_BRIGHTLIGHT "Jasny"
#define D_BSSID "BSSId"
#define D_BUTTON "Przycisk"
#define D_BY "przez"                    // Written by me
#define D_BYTES "Bajtów"
#define D_CELSIUS "Celsiusz"
#define D_CHANNEL "Kanał"
#define D_CO2 "Dwutlenek węgla"
#define D_CODE "Kod"                 // Button code
#define D_COLDLIGHT "Zimny"
#define D_COMMAND "Komenda"
#define D_CONNECTED "Połączony"
#define D_CORS_DOMAIN "Domena CORS"
#define D_COUNT "Licz"
#define D_COUNTER "Licznik"
#define D_CT_POWER "CT Power"
#define D_CURRENT "Prąd"          // As in Voltage and Current
#define D_DATA "Data"
#define D_DARKLIGHT "Ciemny"
#define D_DEBUG "Debug"
#define D_DEWPOINT "Dew point"
#define D_DISABLED "Wyłączony"
#define D_DISTANCE "Odległość"
#define D_DNS_SERVER "Serwer DNS"
#define D_DO "Disolved Oxygen"
#define D_DONE "Wykonane"
#define D_DST_TIME "Czas DST"
#define D_EC "EC"
#define D_ECO2 "eCO₂"
#define D_EMULATION "Emulacja"
#define D_ENABLED "Załączony"
#define D_ERASE "Wyczyść"
#define D_ERROR "Błąd"
#define D_FAHRENHEIT "Fahrenheit"
#define D_FAILED "Błędny"
#define D_FALLBACK "Awaryjny"
#define D_FALLBACK_TOPIC "Temat zastępczy"
#define D_FALSE "Fałsz"
#define D_FILE "Plik"
#define D_FLOW_RATE "Przepływ"
#define D_FREE_MEMORY "Wolna pamięć"
#define D_PSR_MAX_MEMORY "PS-RAM Memory"
#define D_PSR_FREE_MEMORY "PS-RAM free Memory"
#define D_FREQUENCY "Częstotliwość"
#define D_GAS "Gas"
#define D_GATEWAY "Brama"
#define D_GROUP "Grupa"
#define D_HOST "Serwer"
#define D_HOSTNAME "Nazwa serwera"
#define D_HUMIDITY "Wilgotność"
#define D_ILLUMINANCE "Podświetlanie"
#define D_IMMEDIATE "Natychmiastowy"      // Button immediate
#define D_INDEX "Indeks"
#define D_INFO "Informacja"
#define D_INFRARED "Podczerwień"
#define D_INITIALIZED "Zainicjowany"
#define D_IP_ADDRESS "Adres IP"
#define D_LIGHT "Światło"
#define D_LWT "LWT"
#define D_LQI "LQI"                  // Zigbee Link Quality Index
#define D_MODULE "Moduł"
#define D_MOISTURE "Wilgotność"
#define D_MQTT "MQTT"
#define D_MULTI_PRESS "Wielokrotne naciśnięcie"
#define D_NOISE "Szum"
#define D_NONE "Brak"
#define D_O2 "Oxygen"
#define D_OFF "Wyłączony"
#define D_OFFLINE "Nieaktywny"
#define D_OK "Ok"
#define D_ON "Załączony"
#define D_ONLINE "Aktywny"
#define D_ORP "ORP"
#define D_PASSWORD "Hasło"
#define D_PH "pH"
#define D_PORT "Port"
#define D_POWER_FACTOR "Cosinus fi"
#define D_POWERUSAGE "Moc"
#define D_POWERUSAGE_ACTIVE "Moc czynna"
#define D_POWERUSAGE_APPARENT "Moc pozorna"
#define D_POWERUSAGE_REACTIVE "Moc bierna"
#define D_PRESSURE "Ciśnienie"
#define D_PRESSUREATSEALEVEL "Ciśnienie na poziomie morza"
#define D_PROGRAM_FLASH_SIZE "Rozmiar programu flash"
#define D_PROGRAM_SIZE "Rozmiar programu"
#define D_PROJECT "Projekt"
#define D_RAIN "Deszcz"
#define D_RANGE "Range"
#define D_RECEIVED "Otrzymany"
#define D_RESTART "Restart"
#define D_RESTARTING "Restartowanie"
#define D_RESTART_REASON "Przyczyna restartu"
#define D_RESTORE "Przywracanie"
#define D_RETAINED "Zachowane"
#define D_RULE "Reguła"
#define D_SAVE "Zapisz"
#define D_SENSOR "Czujnik"
#define D_SSID "SSID"
#define D_START "Start"
#define D_STD_TIME "STD"
#define D_STOP "Stop"
#define D_SUBNET_MASK "Maska podsieci"
#define D_SUBSCRIBE_TO "Subskrybuj"
#define D_UNSUBSCRIBE_FROM "Nie subskrybuj"
#define D_SUCCESSFUL "Powodzenie"
#define D_SUNRISE "Wschód słońca"
#define D_SUNSET "Zachód słońca"
#define D_TEMPERATURE "Temperatura"
#define D_TO "do"
#define D_TOGGLE "Przełącz"
#define D_TOPIC "Temat"
#define D_TOTAL_USAGE "Całkowite użycie"
#define D_TRANSMIT "Wyślij"
#define D_TRUE "Prawda"
#define D_TVOC "TVOC"
#define D_UPGRADE "aktualizacji"
#define D_UPLOAD "Wgraj"
#define D_UPTIME "Czas pracy"
#define D_USER "Użytkownik"
#define D_UTC_TIME "UTC"
#define D_UV_INDEX "Index UV"
#define D_UV_INDEX_1 "Niski"
#define D_UV_INDEX_2 "Średni"
#define D_UV_INDEX_3 "Wysoki"
#define D_UV_INDEX_4 "Niebezpieczny"
#define D_UV_INDEX_5 "Burn L1/2"
#define D_UV_INDEX_6 "Burn L3"
#define D_UV_INDEX_7 "OoR"
#define D_UV_LEVEL "Poziom UV"
#define D_UV_POWER "Moc UV"
#define D_VERSION "Wersja"
#define D_VOLTAGE "Napięcie"
#define D_VOLUME "Volume"
#define D_WEIGHT "Waga"
#define D_WARMLIGHT "Temperatura światła"
#define D_WEB_SERVER "Serwer Web"

// tasmota.ino
#define D_WARNING_MINIMAL_VERSION "UWAGA Ta wersja nie obsługuje zapisu ustawień"
#define D_LEVEL_10 "poziom 1-0"
#define D_LEVEL_01 "poziom 0-1"
#define D_SERIAL_LOGGING_DISABLED "Wyłączony dziennik na porcie szeregowym"
#define D_SYSLOG_LOGGING_REENABLED "Wznowiono zapis do Syslog"

#define D_SET_BAUDRATE_TO "Ustaw szybkość transmisji na"
#define D_RECEIVED_TOPIC "Otrzymany temat"
#define D_DATA_SIZE "Wielkość danych"
#define D_ANALOG_INPUT "Wejście analogowe"

// support.ino
#define D_OSWATCH "osWatch"
#define D_BLOCKED_LOOP "Pętla zablokowana"
#define D_WPS_FAILED_WITH_STATUS "Błąd konfiguracji WPS ze statusem"
#define D_ACTIVE_FOR_3_MINUTES "aktywny 3 minuty"
#define D_FAILED_TO_START "nie udało się uruchomić"
#define D_PATCH_ISSUE_2186 "Błąd poprawki 2186"
#define D_CONNECTING_TO_AP "Łączenie z AP"
#define D_IN_MODE "w trybie"
#define D_CONNECT_FAILED_NO_IP_ADDRESS "Połączenie nie powiodło się, ponieważ nie otrzymano adresu IP"
#define D_CONNECT_FAILED_AP_NOT_REACHED "Połączenie nie powiodło się, AP nie osiągalny"
#define D_CONNECT_FAILED_WRONG_PASSWORD "Połączenie nie powiodło się"
#define D_CONNECT_FAILED_AP_TIMEOUT "Nie udało się nawiązac połączenia, limit czasu przekroczony"
#define D_ATTEMPTING_CONNECTION "Próba połączenia..."
#define D_CHECKING_CONNECTION "Sprawdzanie połączenia..."
#define D_QUERY_DONE "Zapytanie wykonane"
#define D_MQTT_SERVICE_FOUND "Usługa MQTT została znaleziona"
#define D_FOUND_AT "znaleziono w"
#define D_SYSLOG_HOST_NOT_FOUND "Syslog Host nie znaleziony"

// settings.ino
#define D_SAVED_TO_FLASH_AT "Zapisano do pamięci flash w"
#define D_LOADED_FROM_FLASH_AT "Wczytano z pamięci flash w"
#define D_USE_DEFAULTS "Użyj domyślnych"
#define D_ERASED_SECTOR "Sektor wymazany"

// xdrv_02_webserver.ino
#define D_NOSCRIPT "Aby korzystać z Tasmota, włącz obsługę JavaScript"
#define D_MINIMAL_FIRMWARE_PLEASE_UPGRADE "Oprogramowanie MINIMAL<br>proszę uaktualnić"
#define D_WEBSERVER_ACTIVE_ON "Aktywny serwer Web"
#define D_WITH_IP_ADDRESS "z adresem IP"
#define D_WEBSERVER_STOPPED "Serwer Web zatrzymany"
#define D_FILE_NOT_FOUND "Plik nie odnaleziony"
#define D_REDIRECTED "Przekierowano do własnego portalu"
#define D_WIFIMANAGER_SET_ACCESSPOINT_AND_STATION "Menedżer Wifi ustawia punkt dostępowy i zachowuje stacje"
#define D_WIFIMANAGER_SET_ACCESSPOINT "Menedżer sieci Wi-Fi Access Point"
#define D_TRYING_TO_CONNECT "Próbuję połączyć urzadzenie z siecią"

#define D_RESTART_IN "Zrestartuj"
#define D_SECONDS "Sekund"
#define D_DEVICE_WILL_RESTART "Urządzenie zrestartuje sie za kilka sekund"
#define D_BUTTON_TOGGLE "Załącz/Wyłącz"
#define D_CONFIGURATION "Konfiguracja"
#define D_INFORMATION "Informacje"
#define D_FIRMWARE_UPGRADE "Aktualizacja oprogramowania"
#define D_CONSOLE "Konsola"
#define D_CONFIRM_RESTART "Potwierdź restart"

#define D_CONFIGURE_MODULE "Konfiguracja modułu"
#define D_CONFIGURE_WIFI "Konfiguracja WiFi"
#define D_CONFIGURE_MQTT "Konfiguracja MQTT"
#define D_CONFIGURE_DOMOTICZ "Konfiguracja Domoticza"
#define D_CONFIGURE_LOGGING "Konfiguracja dziennika"
#define D_CONFIGURE_OTHER "Inne konfiguracje"
#define D_CONFIRM_RESET_CONFIGURATION "Potwierdź reset ustawień"
#define D_RESET_CONFIGURATION "Reset ustawień"
#define D_BACKUP_CONFIGURATION "Kopia ustawień"
#define D_RESTORE_CONFIGURATION "Przywracanie ustawień"
#define D_MAIN_MENU "Menu główne"

#define D_MODULE_PARAMETERS "Parametry modułu"
#define D_MODULE_TYPE "Typ"
#define D_PULLUP_ENABLE "Przełącznik pull-up"
#define D_ADC "ADC"
#define D_GPIO "GPIO"
#define D_SERIAL_IN "Wejście rs"
#define D_SERIAL_OUT "Wyjście rs"

#define D_WIFI_PARAMETERS "Parametry sieci WiFi"
#define D_SCAN_FOR_WIFI_NETWORKS "Skanuj sieci"
#define D_SCAN_DONE "Skanowanie wykonane"
#define D_NO_NETWORKS_FOUND "Nie znaleziono sieci"
#define D_REFRESH_TO_SCAN_AGAIN "Odśwież aby ponownie wyszukać sieci"
#define D_DUPLICATE_ACCESSPOINT "Duplikuj"
#define D_SKIPPING_LOW_QUALITY "Pominięto z powodu niskiej jakości sygnału"
#define D_RSSI "RSSI"
#define D_WEP "WEP"
#define D_WPA_PSK "WPA PSK"
#define D_WPA2_PSK "WPA2 PSK"
#define D_AP1_SSID "Nazwa 1"
#define D_AP1_PASSWORD "Hasło 1"
#define D_AP2_SSID "Nazwa 2"
#define D_AP2_PASSWORD "Hasło 2"

#define D_MQTT_PARAMETERS "Parametry MQTT"
#define D_CLIENT "Klient"
#define D_FULL_TOPIC "Pełny temat"

#define D_LOGGING_PARAMETERS "Opcje dziennika"
#define D_SERIAL_LOG_LEVEL "Serial - poziom"
#define D_MQTT_LOG_LEVEL "Mqtt - poziom"
#define D_WEB_LOG_LEVEL "Web - poziom"
#define D_SYS_LOG_LEVEL "System - poziom"
#define D_MORE_DEBUG "Więcej informacji dziennika"
#define D_SYSLOG_HOST "Syslog host"
#define D_SYSLOG_PORT "Syslog port"
#define D_TELEMETRY_PERIOD "Okres telemetrii"

#define D_OTHER_PARAMETERS "Inne parametry"
#define D_TEMPLATE "Szablon"
#define D_ACTIVATE "Aktywuj"
#define D_DEVICE_NAME "Device Name"
#define D_WEB_ADMIN_PASSWORD "Hasło administratora"
#define D_MQTT_ENABLE "Załącz MQTT"
#define D_MQTT_TLS_ENABLE "MQTT TLS"
#define D_FRIENDLY_NAME "Nazwa"
#define D_BELKIN_WEMO "Belkin WeMo"
#define D_HUE_BRIDGE "Mostek Hue"
#define D_SINGLE_DEVICE "pojedyńcze urządzenie"
#define D_MULTI_DEVICE "multi urządzenie"

#define D_CONFIGURE_TEMPLATE "Konfiguracja szablonu"
#define D_TEMPLATE_PARAMETERS "Parametry szablonu"
#define D_TEMPLATE_NAME "Nazwa"
#define D_BASE_TYPE "Na bazie"
#define D_TEMPLATE_FLAGS "Opcje"

#define D_SAVE_CONFIGURATION "Zapisz ustawienia"
#define D_CONFIGURATION_SAVED "Ustawienia zapisane"
#define D_CONFIGURATION_RESET "Ustawienia zresetowane"

#define D_PROGRAM_VERSION "Wersja oprogramowania"
#define D_BUILD_DATE_AND_TIME "Data kompilacji"
#define D_CORE_AND_SDK_VERSION "Wersja Core/SDK"
#define D_FLASH_WRITE_COUNT "Liczba zapisów do pamięci"
#define D_MAC_ADDRESS "Adres MAC"
#define D_MQTT_HOST "Host"
#define D_MQTT_PORT "Port"
#define D_MQTT_CLIENT "Klient"
#define D_MQTT_USER "Użytkownik"
#define D_MQTT_TOPIC "Temat"
#define D_MQTT_GROUP_TOPIC "Temat grupy"
#define D_MQTT_FULL_TOPIC "Pełny temat"
#define D_MQTT_NO_RETAIN "MQTT No Retain"
#define D_MDNS_DISCOVERY "Wykrywanie mDNS"
#define D_MDNS_ADVERTISE "Rozgłaszanie mDNS"
#define D_ESP_CHIP_ID "ID ukladu ESP"
#define D_FLASH_CHIP_ID "ID pamięci flash"
#define D_FLASH_CHIP_SIZE "Rozmiar pamięci flash"
#define D_FREE_PROGRAM_SPACE "Wolna pamięć programu"

#define D_UPGRADE_BY_WEBSERVER "Aktualizacja z serwera Web"
#define D_OTA_URL "Adres serwera"
#define D_START_UPGRADE "Aktualizuj"
#define D_UPGRADE_BY_FILE_UPLOAD "Aktualizacja z pliku"
#define D_UPLOAD_STARTED "Wgrywanie rozpoczęte"
#define D_UPGRADE_STARTED "Aktualizacja rozpoczęta"
#define D_UPLOAD_DONE "Wgrywanie zakończone"
#define D_UPLOAD_TRANSFER "Upload transfer"
#define D_TRANSFER_STARTED "Transfer started"
#define D_UPLOAD_ERR_1 "Nie wybrano pliku"
#define D_UPLOAD_ERR_2 "Niewystarczająca ilość miejsca"
#define D_UPLOAD_ERR_3 "Invalid file signature"
#define D_UPLOAD_ERR_4 "Rozmiar programu jest większy niż rzeczywisty rozmiar pamięci flash"
#define D_UPLOAD_ERR_5 "Wgrywanie, bufor niezgodności stanu porównywanych bitow"
#define D_UPLOAD_ERR_6 "Błąd wgrywania. Uruchomiono zapis do dziennika na poziomie 3"
#define D_UPLOAD_ERR_7 "Wgrywanie przerwane"
#define D_UPLOAD_ERR_8 "Błędny plik"
#define D_UPLOAD_ERR_9 "Plik jest za duży"
#define D_UPLOAD_ERR_10 "Błąd inicjacji układu RF"
#define D_UPLOAD_ERR_11 "Błąd kasowania układu RF"
#define D_UPLOAD_ERR_12 "Błąd zapisu układu RF"
#define D_UPLOAD_ERR_13 "Błąd dekodowania oprrogramowania układu RF"
#define D_UPLOAD_ERR_14 "Not compatible"
#define D_UPLOAD_ERROR_CODE "Błąd wgrywania"

#define D_ENTER_COMMAND "Wprowadź polecenie"
#define D_ENABLE_WEBLOG_FOR_RESPONSE "Włącz poziom 2 zapisu dziennika, jeśli oczekiwana jest odpowiedź"
#define D_NEED_USER_AND_PASSWORD "Wymagany użytkownik=<username>&hasło=<password>"

// xdrv_01_mqtt.ino
#define D_FINGERPRINT "Weryfikuj odcisk TLS..."
#define D_TLS_CONNECT_FAILED_TO "Nieudane połączenie TLS do"
#define D_RETRY_IN "Spróbuj ponownie"
#define D_VERIFIED "Zweryfikowano odcisk"
#define D_INSECURE "Nieprawidłowe połączenie z powodu błędnego odcisku TLS"
#define D_CONNECT_FAILED_TO "Nie udało się nawiązać połączenia"

// xplg_wemohue.ino
#define D_MULTICAST_DISABLED "Multicast wyłączony"
#define D_MULTICAST_REJOINED "Multicast dołączony"
#define D_MULTICAST_JOIN_FAILED "Podłączenie Multicast nie powiodło się"
#define D_FAILED_TO_SEND_RESPONSE "Nie udało się wysłać odpowiedzi"

#define D_WEMO "WeMo"
#define D_WEMO_BASIC_EVENT "Zdarzenie podstawowe"
#define D_WEMO_EVENT_SERVICE "Zdarzenie serwisowe"
#define D_WEMO_META_SERVICE "Meta dane serwisowe"
#define D_WEMO_SETUP "Ustawienia WeMo"
#define D_RESPONSE_SENT "Wyślij odpowiedź"

#define D_HUE "Hue"
#define D_HUE_BRIDGE_SETUP "Ustawienia Hue"
#define D_HUE_API_NOT_IMPLEMENTED "Api nie zaimplementowane"
#define D_HUE_API "API"
#define D_HUE_POST_ARGS "POST argument"
#define D_3_RESPONSE_PACKETS_SENT "3 pakiety odpowiedzi wysyłane"

// xdrv_07_domoticz.ino
#define D_DOMOTICZ_PARAMETERS "Parametry Domoticz"
#define D_DOMOTICZ_IDX "Idx"
#define D_DOMOTICZ_KEY_IDX "Klucz Idx"
#define D_DOMOTICZ_SWITCH_IDX "Przełącznik Idx"
#define D_DOMOTICZ_SENSOR_IDX "Sensor Idx"
  #define D_DOMOTICZ_TEMP "Temperatura"
  #define D_DOMOTICZ_TEMP_HUM "Temperatura, Wilgotność"
  #define D_DOMOTICZ_TEMP_HUM_BARO "Temperatura, Wilgotność, Ciśnienie"
  #define D_DOMOTICZ_POWER_ENERGY "Moc, Energia"
  #define D_DOMOTICZ_ILLUMINANCE "Oświetlenie"
  #define D_DOMOTICZ_COUNT "Licznik"
  #define D_DOMOTICZ_VOLTAGE "Napięcie"
  #define D_DOMOTICZ_CURRENT "Prąd"
  #define D_DOMOTICZ_AIRQUALITY "Jakość powietrza"
  #define D_DOMOTICZ_P1_SMART_METER "Miernik P1"
#define D_DOMOTICZ_UPDATE_TIMER "Aktualizacja zegara"

// xdrv_09_timers.ino
#define D_CONFIGURE_TIMER "Konfiguracja harmonogramu"
#define D_TIMER_PARAMETERS "Parametry harmonogramu"
#define D_TIMER_ENABLE "Załącz harmonogram"
#define D_TIMER_ARM "Załącz"
#define D_TIMER_TIME "Czas"
#define D_TIMER_DAYS "Dni"
#define D_TIMER_REPEAT "Powtarzaj"
#define D_TIMER_OUTPUT "Wyjście"
#define D_TIMER_ACTION "Akcja"

// xdrv_10_knx.ino
#define D_CONFIGURE_KNX "Konfiguracja KNX"
#define D_KNX_PARAMETERS "Parametry KNX"
#define D_KNX_GENERAL_CONFIG "Konfiguracja ogólna"
#define D_KNX_PHYSICAL_ADDRESS "Adres fizyczny"
#define D_KNX_PHYSICAL_ADDRESS_NOTE "(Musi być unikalny w sieci KNX)"
#define D_KNX_ENABLE "Załącz"
#define D_KNX_GROUP_ADDRESS_TO_WRITE "Adresy grupowe do zapisu"
#define D_ADD "Dodaj"
#define D_DELETE "Usuń"
#define D_REPLY "Odpowiedz"
#define D_KNX_GROUP_ADDRESS_TO_READ "Adresy grupowe do odbioru"
#define D_RECEIVED_FROM "Odebrane od"
#define D_KNX_COMMAND_WRITE "Zapisz"
#define D_KNX_COMMAND_READ "Czytaj"
#define D_KNX_COMMAND_OTHER "Inna komenda"
#define D_SENT_TO "Wyślij do"
#define D_KNX_WARNING "Adres grupy (0/0/0) jest zarezerwowany i nie można go użyć."
#define D_KNX_ENHANCEMENT "Rozszerzenia"
#define D_KNX_TX_SLOT "Gniazdo TX"
#define D_KNX_RX_SLOT "Gniazdo RX"
#define D_KNX_TX_SCENE "KNX SCENE TX"
#define D_KNX_RX_SCENE "KNX SCENE RX"

// xdrv_03_energy.ino
#define D_ENERGY_TODAY "Energia dzisiaj"
#define D_ENERGY_YESTERDAY "Energia wczoraj"
#define D_ENERGY_TOTAL "Energia całkowita"

// xdrv_27_shutter.ino
#define D_OPEN "Otwórz"
#define D_CLOSE "Zamknij"
#define D_DOMOTICZ_SHUTTER "Roleta"

// xdrv_28_pcf8574.ino
#define D_CONFIGURE_PCF8574 "Konfiguracja PCF8574"
#define D_PCF8574_PARAMETERS "Parametry PCF8574"
#define D_INVERT_PORTS "Porty odwrócone"
#define D_DEVICE "Urządzenie"
#define D_DEVICE_INPUT "Wejście"
#define D_DEVICE_OUTPUT "Wyjście"

// xsns_05_ds18b20.ino
#define D_SENSOR_BUSY "Czujnik zajęty"
#define D_SENSOR_CRC_ERROR "Błąd CRC czujnika"
#define D_SENSORS_FOUND "Znaleziono czujnik"

// xsns_06_dht.ino
#define D_TIMEOUT_WAITING_FOR "Trwa oczekiwanie"
#define D_START_SIGNAL_LOW "Sygnał startowy niski"
#define D_START_SIGNAL_HIGH "Sygnał startowy wysoki"
#define D_PULSE "Impuls"
#define D_CHECKSUM_FAILURE "Błędna suma kontrolna"

// xsns_07_sht1x.ino
#define D_SENSOR_DID_NOT_ACK_COMMAND "Czujnik nie otrzymał komendy ACK"
#define D_SHT1X_FOUND "SHT1X znaleziony"

// xsns_18_pms5003.ino
#define D_STANDARD_CONCENTRATION "CF-1 PM"     // Standard Particle CF-1 Particle Matter
#define D_ENVIRONMENTAL_CONCENTRATION "PM"     // Environmetal Particle Matter
#define D_PARTICALS_BEYOND "Cząstki"

// xsns_27_apds9960.ino
#define D_GESTURE "Gesture"
#define D_COLOR_RED "Red"
#define D_COLOR_GREEN "Green"
#define D_COLOR_BLUE "Blue"
#define D_CCT "CCT"
#define D_PROXIMITY "Proximity"

// xsns_32_mpu6050.ino
#define D_AX_AXIS "Accel. X-Axis"
#define D_AY_AXIS "Accel. Y-Axis"
#define D_AZ_AXIS "Accel. Z-Axis"
#define D_GX_AXIS "Gyro X-Axis"
#define D_GY_AXIS "Gyro Y-Axis"
#define D_GZ_AXIS "Gyro Z-Axis"

// xsns_34_hx711.ino
#define D_HX_CAL_REMOVE "Usuń wagę"
#define D_HX_CAL_REFERENCE "Załaduj wagę referencyjną"
#define D_HX_CAL_DONE "Skalibrowany"
#define D_HX_CAL_FAIL "Błąd kalibracji"
#define D_RESET_HX711 "Zresetuj skalę"
#define D_CONFIGURE_HX711 "Skonfiguruj skalę"
#define D_HX711_PARAMETERS "Parametry skali"
#define D_ITEM_WEIGHT "Waga przedmiotu"
#define D_REFERENCE_WEIGHT "Waga referencyjna"
#define D_CALIBRATE "Skalibruj"
#define D_CALIBRATION "Kalibrowanie"

//xsns_35_tx20.ino
#define D_TX20_WIND_DIRECTION "Kierunek"
#define D_TX20_WIND_SPEED "Prędkość"
#define D_TX20_WIND_SPEED_MIN "Minimalna prędkość"
#define D_TX20_WIND_SPEED_MAX "Maksymalna prędkość"
#define D_TX20_NORTH "N"
#define D_TX20_EAST "E"
#define D_TX20_SOUTH "S"
#define D_TX20_WEST "W"

// xsns_53_sml.ino
#define D_TPWRIN "Energy Total-In"
#define D_TPWROUT "Energy Total-Out"
#define D_TPWRCURR "Active Power-In/Out"
#define D_TPWRCURR1 "Active Power-In p1"
#define D_TPWRCURR2 "Active Power-In p2"
#define D_TPWRCURR3 "Active Power-In p3"
#define D_Strom_L1 "Current L1"
#define D_Strom_L2 "Current L2"
#define D_Strom_L3 "Current L3"
#define D_Spannung_L1 "Voltage L1"
#define D_Spannung_L2 "Voltage L2"
#define D_Spannung_L3 "Voltage L3"
#define D_METERNR "Meter_number"
#define D_METERSID "Service ID"
#define D_GasIN "Counter"
#define D_H2oIN "Counter"
#define D_StL1L2L3 "Current L1+L2+L3"
#define D_SpL1L2L3 "Voltage L1+L2+L3/3"

// tasmota_template.h - keep them as short as possible to be able to fit them in GUI drop down box
#define D_SENSOR_NONE          "Brak"
#define D_SENSOR_USER          "Użytkownik"
#define D_SENSOR_OPTION        "Option"
#define D_SENSOR_DHT11         "DHT11"
#define D_SENSOR_AM2301        "AM2301"
#define D_SENSOR_SI7021        "SI7021"
#define D_SENSOR_DS18X20       "DS18x20"
#define D_SENSOR_I2C_SCL       "I2C SCL"
#define D_SENSOR_I2C_SDA       "I2C SDA"
#define D_SENSOR_WS2812        "WS2812"
#define D_SENSOR_DFR562        "Odtearzacz MP3"
#define D_SENSOR_IRSEND        "IRsend"
#define D_SENSOR_SWITCH        "Przełącznik"     // Suffix "1"
#define D_SENSOR_BUTTON        "Przycisk"     // Suffix "1"
#define D_SENSOR_RELAY         "Przekaźnik"      // Suffix "1i"
#define D_SENSOR_LED           "Led"        // Suffix "1i"
#define D_SENSOR_LED_LINK      "Led link"    // Suffix "i"
#define D_SENSOR_PWM           "PWM"        // Suffix "1"
#define D_SENSOR_COUNTER       "Licznik"     // Suffix "1"
#define D_SENSOR_IRRECV        "IRrecv"
#define D_SENSOR_MHZ_RX        "MHZ Rx"
#define D_SENSOR_MHZ_TX        "MHZ Tx"
#define D_SENSOR_PZEM004_RX    "PZEM004 Rx"
#define D_SENSOR_PZEM016_RX    "PZEM016 Rx"
#define D_SENSOR_PZEM017_RX    "PZEM017 Rx"
#define D_SENSOR_PZEM0XX_TX    "PZEM0XX Tx"
#define D_SENSOR_SAIR_RX       "SAir Rx"
#define D_SENSOR_SAIR_TX       "SAir Tx"
#define D_SENSOR_SPI_CS        "SPI CS"
#define D_SENSOR_SPI_DC        "SPI DC"
#define D_SENSOR_SPI_MISO      "SPI MISO"
#define D_SENSOR_SPI_MOSI      "SPI MOSI"
#define D_SENSOR_SPI_CLK       "SPI CLK"
#define D_SENSOR_BACKLIGHT     "Podświetlanie"
#define D_SENSOR_PMS5003_TX    "PMS5003 Tx"
#define D_SENSOR_PMS5003_RX    "PMS5003 Rx"
#define D_SENSOR_SDS0X1_RX     "SDS0X1 Rx"
#define D_SENSOR_SDS0X1_TX     "SDS0X1 Tx"
#define D_SENSOR_HPMA_RX       "HPMA Rx"
#define D_SENSOR_HPMA_TX       "HPMA Tx"
#define D_SENSOR_SBR_RX        "SerBr Rx"
#define D_SENSOR_SBR_TX        "SerBr Tx"
#define D_SENSOR_SR04_TRIG     "SR04 Tri/TX"
#define D_SENSOR_SR04_ECHO     "SR04 Ech/RX"
#define D_SENSOR_SDM120_TX     "SDMx20 Tx"
#define D_SENSOR_SDM120_RX     "SDMx20 Rx"
#define D_SENSOR_SDM630_TX     "SDM630 Tx"
#define D_SENSOR_SDM630_RX     "SDM630 Rx"
#define D_SENSOR_WE517_TX      "WE517 Tx"
#define D_SENSOR_WE517_RX      "WE517 Rx"
#define D_SENSOR_TM1638_CLK    "TM16 CLK"
#define D_SENSOR_TM1638_DIO    "TM16 DIO"
#define D_SENSOR_TM1638_STB    "TM16 STB"
#define D_SENSOR_HX711_SCK     "HX711 SCK"
#define D_SENSOR_HX711_DAT     "HX711 DAT"
#define D_SENSOR_TX2X_TX       "TX2x"
#define D_SENSOR_RFSEND        "RFSend"
#define D_SENSOR_RFRECV        "RFrecv"
#define D_SENSOR_TUYA_TX       "Tuya Tx"
#define D_SENSOR_TUYA_RX       "Tuya Rx"
#define D_SENSOR_MGC3130_XFER  "MGC3130 Xfr"
#define D_SENSOR_MGC3130_RESET "MGC3130 Rst"
#define D_SENSOR_SSPI_MISO     "SSPI MISO"
#define D_SENSOR_SSPI_MOSI     "SSPI MOSI"
#define D_SENSOR_SSPI_SCLK     "SSPI SCLK"
#define D_SENSOR_SSPI_CS       "SSPI CS"
#define D_SENSOR_SSPI_DC       "SSPI DC"
#define D_SENSOR_RF_SENSOR     "RF Sensor"
#define D_SENSOR_AZ_RX         "AZ Rx"
#define D_SENSOR_AZ_TX         "AZ Tx"
#define D_SENSOR_MAX31855_CS   "MX31855 CS"
#define D_SENSOR_MAX31855_CLK  "MX31855 CLK"
#define D_SENSOR_MAX31855_DO   "MX31855 DO"
#define D_SENSOR_MAX31865_CS   "MX31865 CS"
#define D_SENSOR_NRG_SEL       "HLWBL SEL"  // Suffix "i"
#define D_SENSOR_NRG_CF1       "HLWBL CF1"
#define D_SENSOR_HLW_CF        "HLW8012 CF"
#define D_SENSOR_HJL_CF        "BL0937 CF"
#define D_SENSOR_MCP39F5_TX    "MCP39F5 Tx"
#define D_SENSOR_MCP39F5_RX    "MCP39F5 Rx"
#define D_SENSOR_MCP39F5_RST   "MCP39F5 Rst"
#define D_SENSOR_CSE7766_TX    "CSE7766 Tx"
#define D_SENSOR_CSE7766_RX    "CSE7766 Rx"
#define D_SENSOR_PN532_TX      "PN532 Tx"
#define D_SENSOR_PN532_RX      "PN532 Rx"
#define D_SENSOR_SM16716_CLK   "SM16716 CLK"
#define D_SENSOR_SM16716_DAT   "SM16716 DAT"
#define D_SENSOR_SM16716_POWER "SM16716 PWR"
#define D_SENSOR_P9813_CLK     "P9813 Clk"
#define D_SENSOR_P9813_DAT     "P9813 Dat"
#define D_SENSOR_MY92X1_DI     "MY92x1 DI"
#define D_SENSOR_MY92X1_DCKI   "MY92x1 DCKI"
#define D_SENSOR_ARIRFRCV      "ALux IrRcv"
#define D_SENSOR_ARIRFSEL      "ALux IrSel"
#define D_SENSOR_TXD           "Serial Tx"
#define D_SENSOR_RXD           "Serial Rx"
#define D_SENSOR_ROTARY        "Rotary"     // Suffix "1A"
#define D_SENSOR_HRE_CLOCK     "HRE Clock"
#define D_SENSOR_HRE_DATA      "HRE Data"
#define D_SENSOR_ADE7953_IRQ   "ADE7953 IRQ"
#define D_SENSOR_BUZZER        "Buzzer"
#define D_SENSOR_OLED_RESET    "OLED Reset"
#define D_SENSOR_ZIGBEE_TXD    "Zigbee Tx"
#define D_SENSOR_ZIGBEE_RXD    "Zigbee Rx"
#define D_SENSOR_ZIGBEE_RST    "Zigbee Rst"
#define D_SENSOR_SOLAXX1_TX    "SolaxX1 Tx"
#define D_SENSOR_SOLAXX1_RX    "SolaxX1 Rx"
#define D_SENSOR_IBEACON_TX    "iBeacon TX"
#define D_SENSOR_IBEACON_RX    "iBeacon RX"
#define D_SENSOR_RDM6300_RX    "RDM6300 RX"
#define D_SENSOR_CC1101_CS     "CC1101 CS"
#define D_SENSOR_A4988_DIR     "A4988 DIR"
#define D_SENSOR_A4988_STP     "A4988 STP"
#define D_SENSOR_A4988_ENA     "A4988 ENA"
#define D_SENSOR_A4988_MS1     "A4988 MS1"
#define D_SENSOR_OUTPUT_HI     "Output Hi"
#define D_SENSOR_OUTPUT_LO     "Output Lo"
#define D_SENSOR_AS608_TX      "AS608 Tx"
#define D_SENSOR_AS608_RX      "AS608 Rx"
#define D_SENSOR_DDS2382_TX    "DDS238-2 Tx"
#define D_SENSOR_DDS2382_RX    "DDS238-2 Rx"
#define D_SENSOR_DDSU666_TX    "DDSU666 Tx"
#define D_SENSOR_DDSU666_RX    "DDSU666 Rx"
#define D_SENSOR_SM2135_CLK    "SM2135 Clk"
#define D_SENSOR_SM2135_DAT    "SM2135 Dat"
#define D_SENSOR_DEEPSLEEP     "Głęboko uśpiony"
#define D_SENSOR_EXS_ENABLE    "Załącz EXS"
#define D_SENSOR_CLIENT_TX    "Client TX"
#define D_SENSOR_CLIENT_RX    "Client RX"
#define D_SENSOR_CLIENT_RESET "Client RST"
#define D_SENSOR_GPS_RX        "GPS RX"
#define D_SENSOR_GPS_TX        "GPS TX"
#define D_SENSOR_HM10_RX       "HM10 RX"
#define D_SENSOR_HM10_TX       "HM10 TX"
#define D_SENSOR_LE01MR_RX     "LE-01MR Rx"
#define D_SENSOR_LE01MR_TX     "LE-01MR Tx"
#define D_SENSOR_BL0940_RX     "BL0940 Rx"
#define D_SENSOR_CC1101_GDO0   "CC1101 GDO0"
#define D_SENSOR_CC1101_GDO2   "CC1101 GDO2"
#define D_SENSOR_HRXL_RX       "HRXL Rx"
#define D_SENSOR_DYP_RX        "DYP Rx"
#define D_SENSOR_ELECTRIQ_MOODL "MOODL Tx"
#define D_SENSOR_AS3935        "AS3935"
#define D_SENSOR_WINDMETER_SPEED "WindMeter Spd"
#define D_SENSOR_TELEINFO_RX   "TInfo Rx"
#define D_SENSOR_TELEINFO_ENABLE "TInfo EN"
#define D_SENSOR_LMT01_PULSE   "LMT01 Pulse"
#define D_SENSOR_ADC_INPUT     "ADC Input"
#define D_SENSOR_ADC_TEMP      "ADC Temp"
#define D_SENSOR_ADC_LIGHT     "ADC Light"
#define D_SENSOR_ADC_BUTTON    "ADC Button"
#define D_SENSOR_ADC_RANGE     "ADC Range"
#define D_SENSOR_ADC_CT_POWER  "ADC CT Power"
#define D_SENSOR_ADC_JOYSTICK  "ADC Joystick"
#define D_GPIO_WEBCAM_PWDN     "CAM_PWDN"
#define D_GPIO_WEBCAM_RESET    "CAM_RESET"
#define D_GPIO_WEBCAM_XCLK     "CAM_XCLK"
#define D_GPIO_WEBCAM_SIOD     "CAM_SIOD"
#define D_GPIO_WEBCAM_SIOC     "CAM_SIOC"
#define D_GPIO_WEBCAM_DATA     "CAM_DATA"
#define D_GPIO_WEBCAM_VSYNC    "CAM_VSYNC"
#define D_GPIO_WEBCAM_HREF     "CAM_HREF"
#define D_GPIO_WEBCAM_PCLK     "CAM_PCLK"
#define D_GPIO_WEBCAM_PSCLK    "CAM_PSCLK"
#define D_GPIO_WEBCAM_HSD      "CAM_HSD"
#define D_GPIO_WEBCAM_PSRCS    "CAM_PSRCS"
#define D_SENSOR_ETH_PHY_POWER "ETH POWER"
#define D_SENSOR_ETH_PHY_MDC   "ETH MDC"
#define D_SENSOR_ETH_PHY_MDIO  "ETH MDIO"
#define D_SENSOR_TCP_TXD       "TCP Tx"
#define D_SENSOR_TCP_RXD       "TCP Rx"
#define D_SENSOR_IEM3000_TX    "iEM3000 TX"
#define D_SENSOR_IEM3000_RX    "iEM3000 RX"
#define D_SENSOR_MIEL_HVAC_TX  "MiEl HVAC Tx"
#define D_SENSOR_MIEL_HVAC_RX  "MiEl HVAC Rx"
#define D_SENSOR_SHELLY_DIMMER_BOOT0 "SHD Boot 0"
#define D_SENSOR_SHELLY_DIMMER_RST_INV "SHD Reset"
#define D_SENSOR_RC522_RST     "RC522 Rst"

// Units
#define D_UNIT_AMPERE "A"
#define D_UNIT_CELSIUS "C"
#define D_UNIT_CENTIMETER "cm"
#define D_UNIT_DEGREE "°"
#define D_UNIT_FAHRENHEIT "F"
#define D_UNIT_HERTZ "Hz"
#define D_UNIT_HOUR "Godz"
#define D_UNIT_GALLONS "gal"
#define D_UNIT_GALLONS_PER_MIN "g/m"
#define D_UNIT_INCREMENTS "inc"
#define D_UNIT_KELVIN "K"
#define D_UNIT_KILOMETER "km"
#define D_UNIT_KILOGRAM "kg"
#define D_UNIT_KILOMETER_PER_HOUR "km/h"  // or "km/h"
#define D_UNIT_KILOOHM "kΩ"
#define D_UNIT_KILOWATTHOUR "kWh"
#define D_UNIT_LITERS "L"
#define D_UNIT_LITERS_PER_MIN "L/m"
#define D_UNIT_LUX "lx"
#define D_UNIT_MICROGRAM_PER_CUBIC_METER "µg/m³"
#define D_UNIT_MICROMETER "µm"
#define D_UNIT_MICROSECOND "µs"
#define D_UNIT_MICROSIEMENS_PER_CM "µS/cm"
#define D_UNIT_MILLIAMPERE "mA"
#define D_UNIT_MILLILITERS "ml"
#define D_UNIT_MILLIMETER "mm"
#define D_UNIT_MILLIMETER_MERCURY "mmHg"
#define D_UNIT_MILLISECOND "ms"
#define D_UNIT_MILLIVOLT "mV"
#define D_UNIT_MINUTE "Min"
#define D_UNIT_PARTS_PER_BILLION "ppb"
#define D_UNIT_PARTS_PER_DECILITER "ppd"
#define D_UNIT_PARTS_PER_MILLION "ppm"
#define D_UNIT_PERCENT "%%"
#define D_UNIT_PRESSURE "hPa"
#define D_UNIT_SECOND "sec"
#define D_UNIT_SECTORS "sektory"
#define D_UNIT_VA "VA"
#define D_UNIT_VAR "VAr"
#define D_UNIT_VOLT "V"
#define D_UNIT_WATT "W"
#define D_UNIT_WATTHOUR "Wh"
#define D_UNIT_WATT_METER_QUADRAT "W/m²"

//SDM220, SDM120, LE01MR
#define D_PHASE_ANGLE     "Przesunięcie faz"
#define D_IMPORT_ACTIVE   "Czynna pobrana"
#define D_EXPORT_ACTIVE   "Czynna oddana"
#define D_IMPORT_REACTIVE "Bierna pobrana"
#define D_EXPORT_REACTIVE "Bierna oddana"
#define D_TOTAL_REACTIVE  "Bierna całkowita"
#define D_UNIT_KWARH      "kVArh"
#define D_UNIT_ANGLE      "Deg"
#define D_TOTAL_ACTIVE    "Całkowita czynna"

//SOLAXX1
#define D_PV1_VOLTAGE     "Napięcie PV1"
#define D_PV1_CURRENT     "Prąd PV1"
#define D_PV1_POWER       "Moc PV1 "
#define D_PV2_VOLTAGE     "Napięcie PV2"
#define D_PV2_CURRENT     "Prąd PV2"
#define D_PV2_POWER       "Moc PV2"
#define D_SOLAR_POWER     "Moc PV"
#define D_INVERTER_POWER  "Moc invertera"
#define D_STATUS          "Status"
#define D_WAITING         "Oczekiwanie"
#define D_CHECKING        "Sprawdzanie"
#define D_WORKING         "Praca"
#define D_FAILURE         "Błąd"
#define D_SOLAX_ERROR_0   "Błąd - brak kodu"
#define D_SOLAX_ERROR_1   "Błąd - utrata sieci"
#define D_SOLAX_ERROR_2   "Błąd - napięcie sieci"
#define D_SOLAX_ERROR_3   "Błąd - częstotliwość sieci"
#define D_SOLAX_ERROR_4   "Błąd - napięcie PV"
#define D_SOLAX_ERROR_5   "Błąd - usterka izolacji"
#define D_SOLAX_ERROR_6   "Błąd - przegrzanie"
#define D_SOLAX_ERROR_7   "Błąd - wentylator"
#define D_SOLAX_ERROR_8   "Błąd - inne urządzenie"

//xdrv_10_scripter.ino
#define D_CONFIGURE_SCRIPT     "Edit script"
#define D_SCRIPT               "edit script"
#define D_SDCARD_UPLOAD        "file upload"
#define D_SDCARD_DIR           "sd card directory"
#define D_UPL_DONE             "Done"
#define D_SCRIPT_CHARS_LEFT    "chars left"
#define D_SCRIPT_CHARS_NO_MORE "no more chars"
#define D_SCRIPT_DOWNLOAD      "Download"
#define D_SCRIPT_ENABLE        "script enable"
#define D_SCRIPT_UPLOAD        "Upload"
#define D_SCRIPT_UPLOAD_FILES  "Upload files"

//xsns_67_as3935.ino
#define D_AS3935_GAIN "gain:"
#define D_AS3935_ENERGY "energy:"
#define D_AS3935_DISTANCE "distance:"
#define D_AS3935_DISTURBER "disturber:"
#define D_AS3935_VRMS "µVrms:"
#define D_AS3935_APRX "aprx.:"
#define D_AS3935_AWAY "away"
#define D_AS3935_LIGHT "lightning"
#define D_AS3935_OUT "lightning out of range"
#define D_AS3935_NOT "distance not determined"
#define D_AS3935_ABOVE "lightning overhead"
#define D_AS3935_NOISE "noise detected"
#define D_AS3935_DISTDET "disturber detected"
#define D_AS3935_INTNOEV "Interrupt with no Event!"
#define D_AS3935_FLICKER "IRQ flicker!"
#define D_AS3935_POWEROFF "Power Off"
#define D_AS3935_NOMESS "listening..."
#define D_AS3935_ON "On"
#define D_AS3935_OFF "Off"
#define D_AS3935_INDOORS "Indoors"
#define D_AS3935_OUTDOORS "Outdoors"
#define D_AS3935_CAL_FAIL "calibration failed"
#define D_AS3935_CAL_OK "calibration set to:"

//xsns_68_opentherm.ino
#define D_SENSOR_BOILER_OT_RX   "OpenTherm RX"
#define D_SENSOR_BOILER_OT_TX   "OpenTherm TX"

// xnrg_15_teleinfo Denky (Teleinfo)
#define D_CONTRACT        "Contract"
#define D_POWER_LOAD      "Power load"
#define D_CURRENT_TARIFF  "Current Tariff"
#define D_TARIFF          "Tariff"
#define D_OVERLOAD        "ADPS"
#define D_MAX_POWER       "Max Power"
#define D_MAX_CURRENT     "Max Current"

// xsns_79_as608.ino
#define D_FP_ENROLL_PLACEFINGER "Place finger"
#define D_FP_ENROLL_REMOVEFINGER "Remove finger"
#define D_FP_ENROLL_PLACESAMEFINGER "Place same finger again"
#define D_FP_ENROLL_RETRY "Error so retry"
#define D_FP_ENROLL_RESTART "Restart"
#define D_FP_ENROLL_ERROR "Error"
#define D_FP_ENROLL_RESET "Reset"
#define D_FP_ENROLL_ACTIVE "Active"
#define D_FP_ENROLL_INACTIVE "Inactive"
// Indexed by Adafruit_Fingerprint.h defines
#define D_FP_PACKETRECIEVEERR "Comms error"    // 0x01 Error when receiving data package
#define D_FP_NOFINGER ""                       // 0x02 No finger on the sensor
#define D_FP_IMAGEFAIL "Imaging error"         // 0x03 Failed to enroll the finger
#define D_FP_IMAGEMESS "Image too messy"       // 0x06 Failed to generate character file due to overly disorderly fingerprint image
#define D_FP_FEATUREFAIL "Fingerprint too small" // 0x07 Failed to generate character file due to the lack of character point or small fingerprint image
#define D_FP_NOMATCH "No match"                // 0x08 Finger doesn't match
#define D_FP_NOTFOUND "Did not find a match"   // 0x09 Failed to find matching finger
#define D_FP_ENROLLMISMATCH "Fingerprint did not match" // 0x0A Failed to combine the character files
#define D_FP_BADLOCATION "Bad location"        // 0x0B Addressed PageID is beyond the finger library
#define D_FP_DBRANGEFAIL "DB range error"      // 0x0C Error when reading template from library or invalid template
#define D_FP_UPLOADFEATUREFAIL "Upload feature error" // 0x0D Error when uploading template
#define D_FP_PACKETRESPONSEFAIL "Packet response error" // 0x0E Module failed to receive the following data packages
#define D_FP_UPLOADFAIL "Upload error"         // 0x0F Error when uploading image
#define D_FP_DELETEFAIL "Delete error"         // 0x10 Failed to delete the template
#define D_FP_DBCLEARFAIL "DB Clear error"      // 0x11 Failed to clear finger library
#define D_FP_PASSFAIL "Password error"         // 0x13 Find whether the fingerprint passed or failed
#define D_FP_INVALIDIMAGE "Image invalid"      // 0x15 Failed to generate image because of lac of valid primary image
#define D_FP_FLASHERR "Flash write error"      // 0x18 Error when writing flash
#define D_FP_INVALIDREG "Invalid number"       // 0x1A Invalid register number
#define D_FP_ADDRCODE "Address code"           // 0x20 Address code
#define D_FP_PASSVERIFY "Password verified"    // 0x21 Verify the fingerprint passed
#define D_FP_UNKNOWNERROR "Error"              // Any other error

#endif  // _LANGUAGE_PL_PL_D_H_
