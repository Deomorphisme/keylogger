#include "keyboard_layout.hpp"
#include <fstream>
#include <string>

std::string getKeyboardLayout() {
    std::ifstream file("/etc/default/keyboard");
    std::string line;
    while (std::getline(file, line)) {
        if (line.find("XKBLAYOUT") != std::string::npos) {
            return line.substr(line.find("\"") + 1, 2);
        }
    }
    return "unknown";
}
