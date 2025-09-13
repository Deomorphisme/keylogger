#include "key_mapping.hpp"
#include <linux/input.h>

const char* mapKeyCodeAzerty(int code) {
    switch (code) {

        case KEY_A: return "Q";
        case KEY_B: return "B";
        case KEY_C: return "C";
        case KEY_D: return "D";
        case KEY_E: return "E";
        case KEY_F: return "F";
        case KEY_G: return "G";
        case KEY_H: return "H";
        case KEY_I: return "I";
        case KEY_J: return "J";
        case KEY_K: return "K";
        case KEY_L: return "L";
        case KEY_M: return ",";
        case KEY_N: return "N";
        case KEY_O: return "O";
        case KEY_P: return "P";
        case KEY_Q: return "A";
        case KEY_R: return "R";
        case KEY_S: return "S";
        case KEY_T: return "T";
        case KEY_U: return "U";
        case KEY_V: return "V";
        case KEY_W: return "Z";
        case KEY_X: return "X";
        case KEY_Y: return "Y";
        case KEY_Z: return "W";

        case KEY_1: return "&";
        case KEY_2: return "é";
        case KEY_3: return "\"";
        case KEY_4: return "\'";
        case KEY_5: return "(";
        case KEY_6: return "-";
        case KEY_7: return "è";
        case KEY_8: return "_";
        case KEY_9: return "ç";
        case KEY_0: return "à";

        case KEY_MINUS: return ")";
        case KEY_EQUAL: return "=";
        case KEY_LEFTBRACE: return "^";
        case KEY_RIGHTBRACE: return "$";
        case KEY_BACKSLASH: return "*";
        case KEY_SEMICOLON: return "M";
        case KEY_APOSTROPHE: return "ù";
        case KEY_COMMA: return "?";
        case KEY_DOT: return ".";
        case KEY_SLASH: return "!";
        case KEY_GRAVE: return "¨";
        case KEY_SPACE: return " ";

        case KEY_BACKSPACE: return "[BACKSPACE]";
        case KEY_ENTER: return "[ENTER]\n";
        case KEY_TAB: return "[TAB]";
        case KEY_ESC: return "[ESC]";
        case KEY_LEFTSHIFT: return "[LSHIFT]";
        case KEY_RIGHTSHIFT: return "[RSHIFT]";
        case KEY_LEFTCTRL: return "[LCTRL]";
        case KEY_RIGHTCTRL: return "[RCTRL]";
        case KEY_LEFTALT: return "[LALT]";
        case KEY_RIGHTALT: return "[RALT]";
        case KEY_CAPSLOCK: return "[CAPSLOCK]";

        case KEY_RIGHT: return "[RIGHT ARROW]";
        case KEY_LEFT: return "[LEFT ARROW]";
        case KEY_UP: return "[ARROW-UP]";
        case KEY_DOWN: return "[ARROW-DOWN]";

        default: return nullptr;
    }
}

const char* mapKeyCodeQwerty(int code) {
    switch (code) {
        case KEY_A: return "A";
        case KEY_B: return "B";
        case KEY_C: return "C";
        case KEY_D: return "D";
        case KEY_E: return "E";
        case KEY_F: return "F";
        case KEY_G: return "G";
        case KEY_H: return "H";
        case KEY_I: return "I";
        case KEY_J: return "J";
        case KEY_K: return "K";
        case KEY_L: return "L";
        case KEY_M: return "M";
        case KEY_N: return "N";
        case KEY_O: return "O";
        case KEY_P: return "P";
        case KEY_Q: return "Q";
        case KEY_R: return "R";
        case KEY_S: return "S";
        case KEY_T: return "T";
        case KEY_U: return "U";
        case KEY_V: return "V";
        case KEY_W: return "W";
        case KEY_X: return "X";
        case KEY_Y: return "Y";
        case KEY_Z: return "Z";

        case KEY_1: return "1";
        case KEY_2: return "2";
        case KEY_3: return "3";
        case KEY_4: return "4";
        case KEY_5: return "5";
        case KEY_6: return "6";
        case KEY_7: return "7";
        case KEY_8: return "8";
        case KEY_9: return "9";
        case KEY_0: return "0";

        case KEY_MINUS: return "-";
        case KEY_EQUAL: return "=";
        case KEY_LEFTBRACE: return "[";
        case KEY_RIGHTBRACE: return "]";
        case KEY_BACKSLASH: return "\\";
        case KEY_SEMICOLON: return ";";
        case KEY_APOSTROPHE: return "'";
        case KEY_GRAVE: return "`";
        case KEY_COMMA: return ",";
        case KEY_DOT: return ".";
        case KEY_SLASH: return "/";
        case KEY_SPACE: return " ";

        case KEY_BACKSPACE: return "[BACKSPACE]";
        case KEY_ENTER: return "[ENTER]\n";
        case KEY_TAB: return "[TAB]";
        case KEY_ESC: return "[ESC]";
        case KEY_LEFTSHIFT: return "[LSHIFT]";
        case KEY_RIGHTSHIFT: return "[RSHIFT]";
        case KEY_LEFTCTRL: return "[LCTRL]";
        case KEY_RIGHTCTRL: return "[RCTRL]";
        case KEY_LEFTALT: return "[LALT]";
        case KEY_RIGHTALT: return "[RALT]";
        case KEY_CAPSLOCK: return "[CAPSLOCK]";

        case KEY_RIGHT: return "[ARROW-RIGHT]";
        case KEY_LEFT: return "[ARROW-LEFT]";
        case KEY_UP: return "[ARROW-UP]";
        case KEY_DOWN: return "[ARROW-DOWN]";
        
        default: return nullptr;
    }
}

const char* mapKeyCode(int code, const std::string& layout) {
    if (layout == "fr") {
        return mapKeyCodeAzerty(code);
    } else {
        return mapKeyCodeQwerty(code);
    }
}
