/* This software is licensed under the MIT License: https://github.com/spacehuhntech/esp8266_deauther */

#pragma once

#include "Arduino.h"

extern String str(const char* ptr);
extern String keyword(const char* keywordPtr);
extern bool eqls(const char* str, const char* keywordPtr);
extern bool eqls(String str, const char* keywordPtr);
extern String b2s(bool input);
extern String b2a(bool input);
extern bool s2b(String input);
extern void prnt(const String s);
extern void prnt(const bool b);
extern void prnt(const char c);
extern void prnt(const char* ptr);
extern void prnt(const char* ptr, int len);
extern void prnt(const int i);
extern void prnt(const uint32_t i);
extern void prntln();
extern void prntln(const String s);
extern void prntln(const bool b);
extern void prntln(const char c);
extern void prntln(const char* ptr);
extern void prntln(const char* ptr, int len);
extern void prntln(const int i);
extern void prntln(const uint32_t i);

/*
   The following variables are the strings used for the serial interface, display interface and settings.
   The keywords for the serial CLI have a simple structure to save a bit of memory and CPU time:
   - every keyword has a unique string
   - / is used for optional characters, i.e. 'enable/d' makes 'enable' and 'enabled'
   - , is used for seperations, i.e. 'select/ed,-s' makes 'select', 'selected' and '-s'
   - everything is in lowercase
 */

// ===== GLOBAL STRINGS ===== //

// Often used characters, therefor in the RAM
const char CURSOR              = '|';
const char SPACE               = ' ';
const char DOUBLEPOINT         = ':';
const char EQUALS              = '=';
const char HASHSIGN            = '#';
const char ASTERIX             = '*';
const char PERCENT             = '%';
const char DASH                = '-';
const char QUESTIONMARK        = '?';
const char ZERO                = '0';
const char S                   = 's';
const char M                   = 'm';
const char D                   = 'd';
const char DOUBLEQUOTES        = '\"';
const char SLASH               = '/';
const char NEWLINE             = '\n';
const char CARRIAGERETURN      = '\r';
const char SEMICOLON           = ';';
const char BACKSLASH           = '\\';
const char POINT               = '.';
const char VERTICALBAR         = '|';
const char COMMA               = ',';
const char ENDOFLINE           = '\0';
const char OPEN_BRACKET        = '[';
const char CLOSE_BRACKET       = ']';
const char OPEN_CURLY_BRACKET  = '{';
const char CLOSE_CURLY_BRACKET = '}';

const char STR_TRUE[] PROGMEM = "true";
const char STR_FALSE[] PROGMEM = "false";
const char STR_MIN[] PROGMEM = "min";

// ===== SETUP ===== //
const char SETUP_OK[] PROGMEM = "OK";
const char SETUP_ERROR[] PROGMEM = "ERROR";
const char SETUP_MOUNT_SPIFFS[] PROGMEM = "Mounting SPIFFS...";
const char SETUP_FORMAT_SPIFFS[] PROGMEM = "Formatting SPIFFS...";
const char SETUP_FORMAT_EEPROM[] PROGMEM = "Formatting EEPROM...";
const char SETUP_SERIAL_WARNING[] PROGMEM = "Warning: Serial deactivated";
const char SETUP_STARTED[] PROGMEM = "STARTED! \\o/";
const char SETUP_COPYING[] PROGMEM = "Copying ";
const char SETUP_PROGMEM_TO_SPIFFS[] PROGMEM = " from PROGMEM to SPIFFS...";

// ===== SERIAL COMMAND LINE INTERFACE ===== //
const char CLI_SCAN[] PROGMEM = "scan";                        // scan
const char CLI_REBOOT[] PROGMEM = "reboot";                    // reboot
const char CLI_STATUS[] PROGMEM = "status";                    // status
const char CLI_SHOW[] PROGMEM = "show";                        // show
const char CLI_REMOVE[] PROGMEM = "remove";                    // remove
const char CLI_SET[] PROGMEM = "set";                          // set
const char CLI_STOP[] PROGMEM = "stop";                        // stop
const char CLI_LOAD[] PROGMEM = "load";                        // load
const char CLI_SAVE[] PROGMEM = "save";                        // save
const char CLI_ADD[] PROGMEM = "add";                          // add
const char CLI_DESELECT[] PROGMEM = "deselect";                // deselect
const char CLI_CLEAR[] PROGMEM = "clear";                      // clear
const char CLI_SYSINFO[] PROGMEM = "sysinfo";                  // sysinfo
const char CLI_RESET[] PROGMEM = "reset";                      // reset
const char CLI_ON[] PROGMEM = "on";                            // on
const char CLI_OFF[] PROGMEM = "off";                          // off
const char CLI_RANDOM[] PROGMEM = "random";                    // random
const char CLI_GET[] PROGMEM = "get";                          // get
const char CLI_INFO[] PROGMEM = "info";                        // info
const char CLI_HELP[] PROGMEM = "help";                        // help
const char CLI_RICE[] PROGMEM = "rice";                        // rice
const char CLI_FORMAT[] PROGMEM = "format";                    // format
const char CLI_DELETE[] PROGMEM = "delete";                    // delete
const char CLI_PRINT[] PROGMEM = "print";                      // print
const char CLI_RUN[] PROGMEM = "run";                          // run
const char CLI_WRITE[] PROGMEM = "write";                      // write
const char CLI_LED[] PROGMEM = "led";                          // led
const char CLI_SEND[] PROGMEM = "send";                        // send
const char CLI_CUSTOM[] PROGMEM = "custom";                    // custom
const char CLI_DELAY[] PROGMEM = "delay";                      // delay
const char CLI_REPLACE[] PROGMEM = "replace";                  // replace
const char CLI_DRAW[] PROGMEM = "draw";                        // draw
const char CLI_SCRIPT[] PROGMEM = "script";                    // script
const char CLI_STARTAP[] PROGMEM = "startap";                  // startap
const char CLI_STOPAP[] PROGMEM = "stopap";                    // stopap
const char CLI_RENAME[] PROGMEM = "rename";                    // rename
const char CLI_COPY[] PROGMEM = "copy";                        // copy
const char CLI_ENABLE[] PROGMEM = "enable/d";                  // enable, enabled
const char CLI_DISABLE[] PROGMEM = "disable/d";                // disable, disabled
const char CLI_WPA2[] PROGMEM = "wpa/2,-wpa/2";                // wpa, wpa2, -wpa, -wpa2
const char CLI_ATTACK[] PROGMEM = "attack/s";                  // attack, attacks
const char CLI_CHICKEN[] PROGMEM = "chicken/s";                // chicken, chickens
const char CLI_SETTING[] PROGMEM = "setting/s";                // setting, settings
const char CLI_ID[] PROGMEM = "id,-i/d";                       // id, -i, -id
const char CLI_ALL[] PROGMEM = "all,-a";                       // all, -a
const char CLI_TIME[] PROGMEM = "time,-t";                     // time, -t
const char CLI_CONTINUE[] PROGMEM = "continue,-c";             // continue, -c
const char CLI_CHANNEL[] PROGMEM = "channel,-ch";              // channel, -ch
const char CLI_MAC[] PROGMEM = "mac,-m";                       // mac, -m
const char CLI_BSSID[] PROGMEM = "bssid,-b";                   // bssid, -b
const char CLI_BEACON[] PROGMEM = "beacon,-b";                 // bssid, -b
const char CLI_DEAUTH[] PROGMEM = "deauth,-d";                 // deauth, -d
const char CLI_DEAUTHALL[] PROGMEM = "deauthall,-da";          // deauthall, -da
const char CLI_PROBE[] PROGMEM = "probe,-p";                   // probe, -p
const char CLI_NOOUTPUT[] PROGMEM = "nooutput,-no";            // nooutput, -no
const char CLI_FORCE[] PROGMEM = "force,-f";                   // force, -f
const char CLI_TIMEOUT[] PROGMEM = "timeout,-t";               // timeout, -t
const char CLI_WIFI[] PROGMEM = "wifi,-w";                     // wifi, -w
const char CLI_CLONES[] PROGMEM = "clones,-cl";                // clones, -cl
const char CLI_PATH[] PROGMEM = "path,-p";                     // path, -p
const char CLI_PASSWORD[] PROGMEM = "password,-ps/wd";         // password, -ps, -pswd
const char CLI_HIDDEN[] PROGMEM = "hidden,-h";                 // hidden, -h
const char CLI_CAPTIVEPORTAL[] PROGMEM = "captiveportal,-cp";  // captiveportal, -cp
const char CLI_SELECT[] PROGMEM = "select/ed,-s";              // select, selected, -s
const char CLI_SSID[] PROGMEM = "ssid/s,-s/s";                 // ssid, ssids, -s, -ss
const char CLI_AP[] PROGMEM = "ap/s,-ap/s";                    // ap, aps, -ap, -aps
const char CLI_STATION[] PROGMEM = "station/s,-st";            // station, stations, -st
const char CLI_NAME[] PROGMEM = "name/s,-n";                   // name, names, -n
const char CLI_LINE[] PROGMEM = "line/s,-l";                   // line, lines, -l
const char CLI_COMMENT[] PROGMEM = "//";                       // //
const char CLI_SCREEN[] PROGMEM = "screen";                    // screen
const char CLI_MODE[] PROGMEM = "mode,-m";                     // mode
const char CLI_MODE_BUTTONTEST[] PROGMEM = "buttontest";       // buttontest
const char CLI_MODE_PACKETMONITOR[] PROGMEM = "packetmonitor"; // packetmonitor
const char CLI_MODE_LOADINGSCREEN[] PROGMEM = "loadingscreen"; // loading
const char CLI_MODE_MENU[] PROGMEM = "menu";                   // menu

const char CLI_HELP_HELP[] PROGMEM = "help";
const char CLI_HELP_SCAN[] PROGMEM = "scan [<all/aps/stations>] [-t <time>] [-c <continue-time>] [-ch <channel>]";
const char CLI_HELP_SHOW[] PROGMEM = "show [selected] [<all/aps/stations/names/ssids>]";
const char CLI_HELP_SELECT[] PROGMEM = "select [<all/aps/stations/names>] [<id>]";
const char CLI_HELP_DESELECT[] PROGMEM = "deselect [<all/aps/stations/names>] [<id>]";
const char CLI_HELP_SSID_A[] PROGMEM = "add ssid <ssid> [-wpa2] [-cl <clones>]";
const char CLI_HELP_SSID_B[] PROGMEM = "add ssid -ap <id> [-cl <clones>] [-f]";
const char CLI_HELP_SSID_C[] PROGMEM = "add ssid -s [-f]";
const char CLI_HELP_NAME_A[] PROGMEM = "add name <name> [-ap <id>] [-s]";
const char CLI_HELP_NAME_B[] PROGMEM = "add name <name> [-st <id>] [-s]";
const char CLI_HELP_NAME_C[] PROGMEM = "add name <name> [-m <mac>] [-ch <channel>] [-b <bssid>] [-s]";
const char CLI_HELP_SET_NAME[] PROGMEM = "set name <id> <newname>";
const char CLI_HELP_ENABLE_RANDOM[] PROGMEM = "enable random <interval>";
const char CLI_HELP_DISABLE_RANDOM[] PROGMEM = "disable random";
const char CLI_HELP_LOAD[] PROGMEM = "load [<all/ssids/names/settings>] [<file>]";
const char CLI_HELP_SAVE[] PROGMEM = "save [<all/ssids/names/settings>] [<file>]";
const char CLI_HELP_REMOVE_A[] PROGMEM = "remove <ap/station/name/ssid> <id>";
const char CLI_HELP_REMOVE_B[] PROGMEM = "remove <ap/station/names/ssids> [all]";
const char CLI_HELP_ATTACK[] PROGMEM = "attack [beacon] [deauth] [deauthall] [probe] [nooutput] [-t <timeout>]";
const char CLI_HELP_ATTACK_STATUS[] PROGMEM = "attack status [<on/off>]";
const char CLI_HELP_STOP[] PROGMEM = "stop <all/scan/attack/script>";
const char CLI_HELP_SYSINFO[] PROGMEM = "sysinfo";
const char CLI_HELP_CLEAR[] PROGMEM = "clear";
const char CLI_HELP_FORMAT[] PROGMEM = "format";
const char CLI_HELP_PRINT[] PROGMEM = "print <file> [<lines>]";
const char CLI_HELP_DELETE[] PROGMEM = "delete <file> [<lineFrom>] [<lineTo>]";
const char CLI_HELP_REPLACE[] PROGMEM = "replace <file> <line> <new-content>";
const char CLI_HELP_COPY[] PROGMEM = "copy <file> <newfile>";
const char CLI_HELP_RENAME[] PROGMEM = "rename <file> <newfile>";
const char CLI_HELP_RUN[] PROGMEM = "run <file>";
const char CLI_HELP_WRITE[] PROGMEM = "write <file> <commands>";
const char CLI_HELP_GET[] PROGMEM = "get <setting>";
const char CLI_HELP_SET[] PROGMEM = "set <setting> <value>";
const char CLI_HELP_RESET[] PROGMEM = "reset";
const char CLI_HELP_CHICKEN[] PROGMEM = "chicken";
const char CLI_HELP_REBOOT[] PROGMEM = "reboot";
const char CLI_HELP_INFO[] PROGMEM = "info";
const char CLI_HELP_COMMENT[] PROGMEM = "// <comments>";
const char CLI_HELP_SEND_DEAUTH[] PROGMEM = "send deauth <apMac> <stMac> <rason> <channel>";
const char CLI_HELP_SEND_BEACON[] PROGMEM = "send beacon <mac> <ssid> <ch> [wpa2]";
const char CLI_HELP_SEND_PROBE[] PROGMEM = "send probe <mac> <ssid> <ch>";
const char CLI_HELP_LED_A[] PROGMEM = "led <r> <g> <b>";
const char CLI_HELP_LED_B[] PROGMEM = "led <#rrggbb>";
const char CLI_HELP_DRAW[] PROGMEM = "draw";
const char CLI_HELP_SCREEN_ON[] PROGMEM = "screen <on/off>";
const char CLI_HELP_SCREEN_MODE[] PROGMEM = "screen mode <menu/packetmonitor/buttontest/loading>";

const char CLI_INPUT_PREFIX[] PROGMEM = "# ";
const char CLI_SERIAL_ENABLED[] PROGMEM = "Interface serial ativada";
const char CLI_SERIAL_DISABLED[] PROGMEM = "Interface serial desativada";
const char CLI_ERROR[] PROGMEM = "ERROR: ";
const char CLI_ERROR_PARAMETER[] PROGMEM = "Erro Parâmetro inválido \"";
const char CLI_STOPPED_SCRIPT[] PROGMEM = "Fila de comandos da CLI limpa";
const char CLI_CONTINUOUSLY[] PROGMEM = "continuamente";
const char CLI_EXECUTING[] PROGMEM = "Executando ";
const char CLI_SCRIPT_DONE_CONTINUE[] PROGMEM = "Done executing script - type 'stop script' to end the continuous mode";
const char CLI_SCRIPT_DONE[] PROGMEM = "Concluído a execução do script";
const char CLI_HELP_HEADER[] PROGMEM = "[===== Lista de comandos =====]";
const char CLI_HELP_FOOTER[] PROGMEM = "========================================================================\r\npara mais informações visite guilhermemagalhaes.dev.br\r\n========================================================================";
const char CLI_ERROR_NAME_LEN[] PROGMEM = "ERRO : Name length 0";
const char CLI_ERROR_MAC_LEN[] PROGMEM = "ERRO : MAC length 0";
const char CLI_RICE_START[] PROGMEM = "Starting rice debugger (auto - repair mode enabled), please stand by...\r\nKeep the device connected to a power supply until the debugger ends\r\nYOU RISK TO BRICK THE BOARD!!!";
const char CLI_RICE_OUTPUT[] PROGMEM = "[ % d % % ]\r\n";
const char CLI_RICE_ERROR[] PROGMEM = "ERRO : Memory check failure at block 0x";
const char CLI_RICE_MEM[] PROGMEM = "Checking memory block 0x";
const char CLI_CHICKEN_OUTPUT[] PROGMEM = "                                                                 ` - : /////////:-.                    \r\n"
                                          "                                                            ./++so:`   ``    `.:/++/.               \r\n"
                                          "                                                        `/+o+.+o:.s:-++//s`        `:++-            \r\n"
                                          "                                                     `/+oo+//d-   oh/    s-            :o/`         \r\n"
                                          "                                                   .++.o+` `h-   .d.     h`://+`         .o+        \r\n"
                                          "                                                 .o+` +/   +o    y-     +d+.  .y           .s-      \r\n"
                                          "                                                +o`   h    d`   `/     .h-    `h             ++     \r\n"
                                          "                                              .s-     d    -           .`     +/              /o    \r\n"
                                          "                                             :o`      y.                     -y                /+   \r\n"
                                          "                                            /+        :o       `            -h`                 s:  \r\n"
                                          "                                           /o          y..://///////:`     /o/o.                `h  \r\n"
                                          "                                          -s           +o:``       `-++::/+-  `o/                o: \r\n"
                                          "                                          y.          :o              `:::.`   `oo`              -s \r\n"
                                          "                                         -s           h`            .++:---/+/+/:::++.           `h \r\n"
                                          "                                         +/           h            :o`   `  `/s  `  .s-           d \r\n"
                                          "                                         o:          .s            h`   /h-   o:/h-  -s          `h \r\n"
                                          "                                         +/          +/            h`   ``    s- `   +/          -s \r\n"
                                          "                                         .y         `h`            -s-      `+y-.`.:+/           +: \r\n"
                                          "                                          o:        o:              `/+/:/+ss:.-:y/.`           `h` \r\n"
                                          "   .:-`                                   `y-      ++                  `so::-://+y.             +/  \r\n"
                                          "  :o.-/+:  :+//:`                          `s:   `+/                   -h//:::---:/o-          -y   \r\n"
                                          "  :o   `:o:h. `-+/`                         -d+.:o-                    .y.``...-/y/++`        `y.   \r\n"
                                          "   +/    `:hs    -o-                        o/:/yo:-`                   +y++s//+/.           `s.    \r\n"
                                          "    /o`    `oo`   `/+`                   .-:y/-`+:+so+/:-`              s-  y:              -s.     \r\n"
                                          " ++//+y:     -+     .o:            ``-:/+:-.`.:+/:hs+`++:/o/:.`        `h   .y`            /o`      \r\n"
                                          "`h` `./ys-            :o-   .--:////:-.`        `-/o/::.`/sh-:os/:.`   .y oo`+/          -o:        \r\n"
                                          " :o-   `-o+.           `/+o/:-..`                   `.:+++o/``/:-oo++/:.so+://`       `:+/`         \r\n"
                                          "  `/+:`   ..             `++`                           `.-/+/:-/sy.`+o:+y/-.      .-/+-`           \r\n"
                                          "    `-+/-                  .-                                `.:/o+:-:.```-:oy/:://:-`              \r\n"
                                          "       .:+/.                                                      `.-:/+/::s/-..`                   \r\n"
                                          "          .++.                                                          `.-h.                       \r\n"
                                          "            .o/                                                            +/                       \r\n"
                                          "              :o.                                                          :o                       \r\n"
                                          "               .o:                                                         -s                       \r\n"
                                          "                 /o`                                                       :+                       \r\n"
                                          "                  -o-                                                      o:                       \r\n"
                                          "                   `o/                                                     h`                       \r\n"
                                          "                     :o.                                                  -s                        \r\n"
                                          "                      .o:                                                 y.                        \r\n"
                                          "                        /o.                                              /+                         \r\n"
                                          "                         .+/`                                           -s                          \r\n"
                                          "                           -+/.                                        .s`                          \r\n"
                                          "                             ./+/.`                                   -s`                           \r\n"
                                          "                                .:/+:.`                              /o`                            \r\n"
                                          "                                    .:/o/.`                        .o:                              \r\n"
                                          "                                       o/:/+/.`                  .++`                               \r\n"
                                          "                                       -s   `:/+:`            `:+/`                                 \r\n"
                                          "                                        ++`     -+o-`      `-++-                                    \r\n"
                                          "                                         :s/::/+//::+/---/+/:`                                      \r\n"
                                          "                                          +/s:`      `-h-s-                                         \r\n"
                                          "                                          +/s-        `y y.                                         \r\n"
                                          "                                          +/y.        `y h`                                         \r\n"
                                          "                                          //s:`       `y d                                          \r\n"
                                          "                                          +/-:/++/-`  `y h-`                                        \r\n"
                                          "                                          y:hs-ysosss..y --/+++/-`                                  \r\n"
                                          "                                          ds:`s:o+`-:`o:oos./h++osoo`                               \r\n"
                                          "                                          ::   o+++   h:y `o+.s:`.::                                \r\n"
                                          "                                                -+-   -/`   :s.++                                   \r\n"
                                          "                                                             `/+-   ";
const char CLI_SYSTEM_INFO[] PROGMEM = "[======== informações do sistema ========]";
const char CLI_SYSTEM_OUTPUT[] PROGMEM = "RAM usada: %u bytes usados [%d%%], %u bytes livres [%d%%], %u bytes no total\r\n";
const char CLI_SYSTEM_AP_MAC[] PROGMEM = "endereço AP MAC: ";
const char CLI_SYSTEM_ST_MAC[] PROGMEM = "endereço Estação MAC: ";
const char CLI_SYSTEM_RAM_OUT[] PROGMEM = "SPIFFS: %u bytes usados [%d%%], %u bytes livres [%d%%], %u bytes no total\r\n";
const char CLI_SYSTEM_SPIFFS_OUT[] PROGMEM = "        tamanho do bloco %u bytes, tamanho da pagina %u bytes\r\n";
const char CLI_FILES[] PROGMEM = "Files: ";
const char CLI_BYTES[] PROGMEM = " bytes";
const char CLI_SYSTEM_FOOTER[] PROGMEM = "===============================";
const char CLI_FORMATTING_SPIFFS[] PROGMEM = "formatando SPIFFS...";
const char CLI_REMOVED[] PROGMEM = "Remover ";
const char CLI_ERROR_REMOVING[] PROGMEM = "ERRO:ao Remover ";
const char CLI_REMOVING_LINES[] PROGMEM = " remover Linhas ";
const char CLI_COPIED_FILES[] PROGMEM = "copiar Arquivo";
const char CLI_ERROR_COPYING[] PROGMEM = "ERRO:Ao copiar Arquivo";
const char CLI_RENAMED_FILE[] PROGMEM = "renomear arquivo";
const char CLI_ERROR_RENAMING_FILE[] PROGMEM = "ERRO:Ao renomear Arquivo";
const char CLI_WRITTEN[] PROGMEM = "Written \"";
const char CLI_TO[] PROGMEM = "\" to ";
const char CLI_REPLACED_LINE[] PROGMEM = "substituindo linha ";
const char CLI_WITH[] PROGMEM = " with ";
const char CLI_ERROR_REPLACING_LINE[] PROGMEM = "ERRO: AO substituindo linha em ";
const char CLI_INFO_HEADER[] PROGMEM = "====================================================================================";
const char CLI_INFO_SOFTWARE[] PROGMEM = "ESP8266 Deauther ";
const char CLI_INFO_COPYRIGHT[] PROGMEM = "2018 (c) Guilherme Magalhães";
const char CLI_INFO_LICENSE[] PROGMEM = "";
const char CLI_INFO_ADDON[] PROGMEM = "para mais informação visitar guilherme.dev.br";
const char CLI_DEAUTHING[] PROGMEM = "Deauthing ";
const char CLI_ARROW[] PROGMEM = " -> ";
const char CLI_SENDING_BEACON[] PROGMEM = "enviando Beacon \"";
const char CLI_SENDING_PROBE[] PROGMEM = "enviando Probe \"";
const char CLI_CUSTOM_SENT[] PROGMEM = "enviado pacote personalizado";
const char CLI_CUSTOM_FAILED[] PROGMEM = "o envio do pacote personalizado falhou!";
const char CLI_DRAW_OUTPUT[] PROGMEM = "%+4u";
const char CLI_ERROR_NOT_FOUND_A[] PROGMEM = "ERRO: comando \"";
const char CLI_ERROR_NOT_FOUND_B[] PROGMEM = "\" não encontrado :(";
const char CLI_SYSTEM_CHANNEL[] PROGMEM = "Canal WiFi atual: ";
const char CLI_CHANGED_SCREEN[] PROGMEM = "Modo de tela alterado";
const char CLI_DEFAULT_AUTOSTART[] PROGMEM = "scan -t 5s\nsysinfo\n";
const char CLI_RESUMED[] PROGMEM = "Linha de comando retomada";

// ===== DISPLAY ===== //

// DEBUG MESSAGES
const char D_ERROR_NOT_ENABLED[] PROGMEM = "ERRO: Display não indentificado";
const char D_MSG_DISPLAY_OFF[] PROGMEM = "Display desativada";
const char D_MSG_DISPLAY_ON[] PROGMEM = "Display ativada";

// LOADING SCREEN
const char DSP_SCAN_FOR[] PROGMEM = "Escaneando por";
const char DSP_APS[] PROGMEM = "APs";
const char DSP_STS[] PROGMEM = "STs";
const char DSP_PKTS[] PROGMEM = "Pkts";
const char DSP_S[] PROGMEM = "/s";
const char DSP_SCAN_DONE[] PROGMEM = "concluido";

// ALL MENUS
const char D_BACK[] PROGMEM = "[VOLTAR]";
const char D_REMOVE_ALL[] PROGMEM = "remover todos";
const char D_SELECT[] PROGMEM = "selecionar";
const char D_DESELECT[] PROGMEM = "desselecionar";
const char D_REMOVE[] PROGMEM = "remover";
const char D_SELECT_ALL[] PROGMEM = "selecionar todos ";
const char D_DESELECT_ALL[] PROGMEM = "desselecionar todos ";
const char D_CLONE[] PROGMEM = "clonar SSID";
const char D_LED[] PROGMEM = "LED";

// BUTTON TEST
const char D_UP[] PROGMEM = "UP:";
const char D_DOWN[] PROGMEM = "DOWN:";
const char D_LEFT[] PROGMEM = "LEFT:";
const char D_RIGHT[] PROGMEM = "RIGHT:";
const char D_B[] PROGMEM = "A:";
const char D_A[] PROGMEM = "B:";

// MAIN MENU
const char D_SCAN[] PROGMEM = "ESCANEAR";
const char D_SHOW[] PROGMEM = "SELECIONAR";
const char D_ATTACK[] PROGMEM = "ATACAR";
const char D_PACKET_MONITOR[] PROGMEM = "MONITORAR PACOTES";
const char D_CLOCK[] PROGMEM = "RELOGIO";
const char D_CLOCK_DISPLAY[] PROGMEM = "MOSTRAR AS HORAS";
const char D_CLOCK_SET[] PROGMEM = "MUDAR HORARIO";

// SCAN MENU
const char D_SCAN_APST[] PROGMEM = "SCAN AP + ST";
const char D_SCAN_AP[] PROGMEM = "SCAN APs";
const char D_SCAN_ST[] PROGMEM = "SCAN ESTACOES";

// SHOW MENU
const char D_ACCESSPOINTS[] PROGMEM = "APs ";
const char D_STATIONS[] PROGMEM = "Estacoes ";
const char D_NAMES[] PROGMEM = "Nomes ";
const char D_SSIDS[] PROGMEM = "SSIDs ";

// SSID LIST MENU
const char D_CLONE_APS[] PROGMEM = "CLONAR APs";
const char D_RANDOM_MODE[] PROGMEM = "MODO ALEATORIO";

// ATTACK MENU
const char D_DEAUTH[] PROGMEM = "DEAUTH";
const char D_BEACON[] PROGMEM = "BEACON";
const char D_PROBE[] PROGMEM = "PROBE";
const char D_START_ATTACK[] PROGMEM = "INICIAR";
const char D_STOP_ATTACK[] PROGMEM = "PARAR";

// SUB MENUS
const char D_ENCRYPTION[] PROGMEM = "Encriptação:";
const char D_RSSI[] PROGMEM = "RSSI:";
const char D_CHANNEL[] PROGMEM = "Canal:";
const char D_CH[] PROGMEM = "Ch";
const char D_VENDOR[] PROGMEM = "Fornecedor:";
const char D_AP[] PROGMEM = "AP:";
const char D_PKTS[] PROGMEM = "pkts";
const char D_SEEN[] PROGMEM = "Seen:";

// ===== STATIONS ===== //
const char ST_CLEARED_LIST[] PROGMEM = "Lista de estações limpa";
const char ST_REMOVED_STATION[] PROGMEM = "Estação removida ";
const char ST_LIST_EMPTY[] PROGMEM = "A lista de estações está vazia :(";
const char ST_HEADER[] PROGMEM = "[===== estações =====]";
const char ST_NO_DEVICES_SELECTED[] PROGMEM = "Nenhum dispositivo selecionado";
const char ST_TABLE_HEADER[] PROGMEM = "ID MAC               Ch Nome             Fornecedor   Pkts     AP                              última momento visto";
const char ST_TABLE_DIVIDER[] PROGMEM = "==============================================================================================================";
const char ST_SMALLER_ONESEC[] PROGMEM = "<1seg";
const char ST_SMALLER_ONEMIN[] PROGMEM = "<1min";
const char ST_BIGER_ONEHOUR[] PROGMEM = ">1h";
const char ST_SELECTED_STATION[] PROGMEM = "Estação selecionada ";
const char ST_DESELECTED_STATION[] PROGMEM = "Estação deselecionada ";
const char ST_ERROR_ID[] PROGMEM = "ERRO:  enenhuma estação encontrada com ID ";
const char ST_SELECTED_ALL[] PROGMEM = "selecionar todas estações ";
const char ST_DESELECTED_ALL[] PROGMEM  = "desselecionar todas estacoes ";

// ===== ACCESS POINTS ===== //
const char AP_HEADER[] PROGMEM = "[===== Pontos de Acesso =====]";
const char AP_LIST_EMPTY[] PROGMEM = "lista de APs está vazia :(";
const char AP_NO_AP_SELECTED[] PROGMEM = "nenhuma APs selecionado";
const char AP_TABLE_HEADER[] PROGMEM = "ID SSID                             Nome             Ch RSSI Enc. Mac               Fornecedor   Selecionado";
const char AP_TABLE_DIVIDER[] PROGMEM = "=====================================================================================================";
const char AP_HIDDE_SSID[] PROGMEM = "*ESCONDIDO*";
const char AP_WEP[] PROGMEM = "WEP";
const char AP_WPA[] PROGMEM = "WPA";
const char AP_WPA2[] PROGMEM = "WPA2";
const char AP_AUTO[] PROGMEM = "WPA*";
const char AP_SELECTED[] PROGMEM = "Ponto de acesso selecionado ";
const char AP_DESELECTED[] PROGMEM = "Ponto de acesso desselecionado ";
const char AP_REMOVED[] PROGMEM = "Ponto de acesso removido ";
const char AP_SELECTED_ALL[] PROGMEM = "Selecionar todos APs ";
const char AP_DESELECTED_ALL[] PROGMEM = "Desselecionar todos APs ";
const char AP_REMOVED_ALL[] PROGMEM = "remover todas APs";
const char AP_NO_AP_ERROR[] PROGMEM = "ERRO: Nenhum APs encontrado com ID ";

// ===== ATTACKS ===== //
const char A_START[] PROGMEM = "Comece a atacar";
const char A_NO_MODE_ERROR[] PROGMEM = "AVISO: Nenhum modo de ataque válido definido";
const char A_STOP[] PROGMEM = "Parou o ataque";
const char A_TIMEOUT[] PROGMEM = "Tempo limite - ";
const char A_STATUS[] PROGMEM = "[Pkt/s] todos: %+4u | Deauths: %+3u/%-3u | Beacons: %+3u/%-3u | Probes: %+3u/%-3u\r\n";
const char A_ENABLED_OUTPUT[] PROGMEM = "Saída de ataque habilitada";
const char A_DISABLED_OUTPUT[] PROGMEM = "Saída de ataque desativada";

// ===== NAMES ===== //
const char N_SAVED[] PROGMEM = "Nomes de dispositivos salvos em ";
const char N_LOADED[] PROGMEM = "Nomes de dispositivos carregados a partir de ";
const char N_REMOVED_ALL[] PROGMEM = "Removidos todos os nomes de dispositivos salvos";
const char N_HEADER[] PROGMEM = "[===== dispositivos salvos =====]";
const char N_TABLE_HEADER[] PROGMEM =  "ID MAC               Fornecedor   Name             AP-BSSID          Ch Selecionado";
const char N_TABLE_DIVIDER[] PROGMEM = "============================================================================";
const char N_ERROR_LIST_EMPTY[] PROGMEM = "A lista de nomes de dispositivos está vazia :(";
const char N_ERROR_NO_SELECTED[] PROGMEM = "Nenhum dispositivo selecionado";
const char N_ERROR_LIST_FULL[] PROGMEM = "ERRO: A lista de nomes está cheia!";
const char N_ADDED[] PROGMEM = "Adicionado à lista de nomes de dispositivos ";
const char N_REPLACED[] PROGMEM = "Lista de nomes de dispositivos substituídos ";
const char N_REMOVED[] PROGMEM = "Removido da lista de nomes de dispositivos ";
const char N_CHANGED_NAME[] PROGMEM = "Nome do dispositivo alterado";
const char N_CHANGED_MAC[] PROGMEM = "Mudou o dispositivo mac";
const char N_CHANGED_BSSID[] PROGMEM = "Dispositivo alterado AP-BSSID";
const char N_CHANGED_CH[] PROGMEM = "Canal do dispositivo alterado ";
const char N_SELECTED[] PROGMEM = "Dispositivo selecionado ";
const char N_ERROR_NOT_FOUND[] PROGMEM = "Nenhum dispositivo encontrado com nome ";
const char N_DESELECTED[] PROGMEM = "Desselecionar dispositivo ";
const char N_SELECTED_ALL[] PROGMEM = "selecionar todos nomes de dispositivos ";
const char N_DESELECTED_ALL[] PROGMEM = "Desselecionar todos nomes de dispositivos ";

// ===== SSIDs ===== //
const char SS_LOADED[] PROGMEM = "SSIDs carregados a partir de ";
const char SS_CLEARED[] PROGMEM = "Lista SSID limpa";
const char SS_SAVED[] PROGMEM = "SSIDs salvos";
const char SS_SAVED_IN[] PROGMEM = "SSIDs salvos em ";
const char SS_REMOVED[] PROGMEM = "SSID removido ";
const char SS_ERROR_FULL[] PROGMEM =
    "ERRO: A lista SSID está cheia! Remova alguns SSIDs primeiro ou execute o comando com o parâmetro -f (force) parametro.";
const char SS_ADDED[] PROGMEM = "SSID adicionado ";
const char SS_REPLACED[] PROGMEM = "SSID substituído ";
const char SS_TABLE_HEADER[] PROGMEM = "ID Enc. SSID";
const char SS_TABLE_DIVIDER[] PROGMEM = "=========================================";
const char SS_HEADER[] PROGMEM = "[===== SSIDs =====]";
const char SS_ERROR_EMPTY[] PROGMEM = "A lista SSID está vazia :(";
const char SS_RANDOM_ENABLED[] PROGMEM = "Modo aleatório SSID ativado";
const char SS_RANDOM_DISABLED[] PROGMEM = "Modo aleatório SSID desativado";
const char SS_JSON_SSIDS[] PROGMEM = "ssids";
const char SS_JSON_RANDOM[] PROGMEM = "random";
const char SS_JSON_DEFAULT[] PROGMEM = "{\"random\":false,\"ssids\":[[\"Never gonna give you up\",false,23],[\"Never gonna let you down\",false,24],[\"Never gonna run around\",false,22],[\"Never gonna make you cry\",false,24],[\"Never gonna say goodbye\",false,23],[\"Never gonna tell a lie\",false,22],[\"Never gonna hurt you\",false,20],[\"Never gonna desert you\",false,22]]}";
const char SS_RANDOM_INFO[] PROGMEM = "Generating new SSIDs... Type \"disable random\" to stop the random mode";

// ===== SCAN ==== //
const char SC_START_CLIENT[] PROGMEM = "Iniciando o escaneamento de estações (dispositivos cliente) - ";
const char SS_START_SNIFFER[] PROGMEM = "Iniciando o sniffer de pacotes - ";
const char SC_ERROR_NO_AP[] PROGMEM =
    "ERRO: AP-lista vazia! Não é possível procurar clientes, por favor, Procure pontos de acesso primeiro.";
const char SC_INFINITELY[] PROGMEM = " infinitamente";
const char SC_ON_CHANNEL[] PROGMEM = "no canal ";
const char SC_START_AP[] PROGMEM = "Iniciando o escaneamento de pontos de acesso (redes Wi-Fi)...";
const char SC_ONE_TO[] PROGMEM = "1 - ";
const char SC_STOPPED[] PROGMEM = "scaneamento interrompido";
const char SC_RESTRAT[] PROGMEM = "o scaneamento será reiniciada em ";
const char SC_CONTINUE[] PROGMEM = "s - Digite stop para desativar o modo contínuo";
const char SC_RESTART[] PROGMEM = "reiniciando em ";
const char SC_ERROR_MODE[] PROGMEM = "ERRO: Modo de verificação inválido ";
const char SC_OUTPUT_A[] PROGMEM = "scaneamento WiFi [%+2u%%]: %+3u pacotes/s | %+2u dispositivo | %+2u deauths\r\n";
const char SC_OUTPUT_B[] PROGMEM = "scaneamento WiFi: %+3u pacotes/s | %+2u dispositivo | %+2u deauths\r\n";
const char SC_JSON_APS[] PROGMEM = "aps";
const char SC_JSON_STATIONS[] PROGMEM = "estacoes";
const char SC_JSON_NAMES[] PROGMEM = "nomes";
const char SC_SAVED[] PROGMEM = "Resultados da varredura salvos";
const char SC_SAVED_IN[] PROGMEM = "Resultados da varredura salvos em ";
const char SC_MODE_OFF[] PROGMEM = "-";
const char SC_MODE_AP[] PROGMEM = "APs";
const char SC_MODE_ST[] PROGMEM = "STs";
const char SC_MODE_ALL[] PROGMEM = "AP+ST";
const char SC_MODE_SNIFFER[] PROGMEM = "Sniffer";

// ===== FUNCTIONS ===== //
const char F_ERROR_MAC[] PROGMEM = "ERRO: Endereço MAC inválido";
const char F_COLOR_INVALID[] PROGMEM = "ERRO: Código de cor inválido";
const char F_ERROR_READING_FILE[] PROGMEM = "ERRO: lendo arquivo ";
const char F_LINE[] PROGMEM = "[%d] ";
const char F_ERROR_FILE[] PROGMEM = "ERRO: O arquivo não existe ";
const char F_ERROR_OPEN[] PROGMEM = "ERRO: nao pode abrir ";
const char F_ERROR_PARSING_JSON[] PROGMEM = "ERRO ao analisar JSON ";
const char F_ERROR_TO_BIG[] PROGMEM = "ERRO ao analisar JSON ... ";
const char F_TMP[] PROGMEM = "/tmp";
const char F_COPY[] PROGMEM = "_copy";
const char F_ERROR_SAVING[] PROGMEM = "ERRO: salvando arquivo. Tente 'formatar' e reinicie - ";

// ===== WIFI ===== //
const char W_STOPPED_AP[] PROGMEM = "Ponto de acesso interrompido";
const char W_AP_REQUEST[] PROGMEM = "[AP] request: ";
const char W_AP[] PROGMEM = "AP";
const char W_STATION[] PROGMEM = "ESTACOES";
const char W_MODE_OFF[] PROGMEM = "DESLIGADO";
const char W_MODE_AP[] PROGMEM = "AP";
const char W_MODE_ST[] PROGMEM = "estação";
const char W_OK[] PROGMEM = " OK";
const char W_NOT_FOUND[] PROGMEM = " NAO ENCONTRADO";
const char W_BAD_ARGS[] PROGMEM = "ARGS RUIM";
const char W_BAD_PATH[] PROGMEM = "MAU PATH";
const char W_FILE_NOT_FOUND[] PROGMEM = "ERRO 404 arquivo não encontrado";
const char W_STARTED_AP[] PROGMEM = "iniciado AP";
const char W_WEBINTERFACE[] PROGMEM = "/web"; // default folder containing the web files
const char W_DEFAULT_LANG[] PROGMEM = "/lang/default.lang";

const char W_HTML[] PROGMEM = "text/html";
const char W_CSS[] PROGMEM = "text/css";
const char W_JS[] PROGMEM = "application/javascript";
const char W_PNG[] PROGMEM = "image/png";
const char W_GIF[] PROGMEM = "image/gif";
const char W_JPG[] PROGMEM = "image/jpeg";
const char W_ICON[] PROGMEM = "image/x-icon";
const char W_XML[] PROGMEM = "text/xml";
const char W_XPDF[] PROGMEM = "application/x-pdf";
const char W_XZIP[] PROGMEM = "application/x-zip";
const char W_GZIP[] PROGMEM = "application/x-gzip";
const char W_JSON[] PROGMEM = "application/json";
const char W_TXT[] PROGMEM = "text/plain";

const char W_DOT_HTM[] PROGMEM = ".htm";
const char W_DOT_HTML[] PROGMEM = ".html";
const char W_DOT_CSS[] PROGMEM = ".css";
const char W_DOT_JS[] PROGMEM = ".js";
const char W_DOT_PNG[] PROGMEM = ".png";
const char W_DOT_GIF[] PROGMEM = ".gif";
const char W_DOT_JPG[] PROGMEM = ".jpg";
const char W_DOT_ICON[] PROGMEM = ".ico";
const char W_DOT_XML[] PROGMEM = ".xml";
const char W_DOT_PDF[] PROGMEM = ".pdf";
const char W_DOT_ZIP[] PROGMEM = ".zip";
const char W_DOT_GZIP[] PROGMEM = ".gz";
const char W_DOT_JSON[] PROGMEM = ".json";

// ===== SETTINGS ====== //
// Version
const char S_JSON_VERSION[] PROGMEM = "version";

// Autosave
const char S_JSON_AUTOSAVE[] PROGMEM = "autosave";
const char S_JSON_AUTOSAVETIME[] PROGMEM = "autosavetime";

// Attack
const char S_JSON_BEACONCHANNEL[] PROGMEM = "beaconchannel";
const char S_JSON_RANDOMTX[] PROGMEM = "randomTX";
const char S_JSON_ATTACKTIMEOUT[] PROGMEM = "attacktimeout";
const char S_JSON_DEAUTHSPERTARGET[] PROGMEM = "deauthspertarget";
const char S_JSON_DEAUTHREASON[] PROGMEM = "deauthReason";
const char S_JSON_BEACONINTERVAL[] PROGMEM = "beaconInterval";
const char S_JSON_PROBESPERSSID[] PROGMEM = "probesPerSSID";

// WiFi
const char S_JSON_CHANNEL[] PROGMEM = "channel";
const char S_JSON_MACST[] PROGMEM = "macSt";
const char S_JSON_MACAP[] PROGMEM = "macAP";

// Sniffer
const char S_JSON_CHTIME[] PROGMEM = "chtime";
const char S_JSON_MIN_DEAUTHS[] PROGMEM = "minDeauths";

// AP
const char S_JSON_SSID[] PROGMEM = "ssid";
const char S_JSON_PASSWORD[] PROGMEM = "password";
const char S_JSON_HIDDEN[] PROGMEM = "hidden";
const char S_JSON_IP[] PROGMEM = "ip";

// Web
const char S_JSON_WEBINTERFACE[] PROGMEM = "webinterface";
const char S_JSON_CAPTIVEPORTAL[] PROGMEM = "captivePortal";
const char S_JSON_WEB_SPIFFS[] PROGMEM = "webSpiffs";
const char S_JSON_LANG[] PROGMEM = "lang";

// CLI
const char S_JSON_SERIALINTERFACE[] PROGMEM = "serial";
const char S_JSON_SERIAL_ECHO[] PROGMEM = "serialEcho";

// LED
const char S_JSON_LEDENABLED[] PROGMEM = "led";

// Display
const char S_JSON_DISPLAYINTERFACE[] PROGMEM = "display";
const char S_JSON_DISPLAY_TIMEOUT[] PROGMEM = "displayTimeout";
