#include "keyboard_utils.hpp"
#include <fstream>
#include <string>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/input.h>
#include <iostream>

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

bool isKeyboard(const std::string& device) {
    int fd = open(device.c_str(), O_RDONLY | O_NONBLOCK);
    if (fd < 0) {
        std::cerr << "Failed to open " << device << std::endl;
        return false;
    }

    // Check if the device supports EV_KEY (keyboard events)
    unsigned char keybit[KEY_MAX / 8 + 1];
    if (ioctl(fd, EVIOCGBIT(EV_KEY, sizeof(keybit)), keybit) < 0) {
        close(fd);
        return false;
    }

    // Check for common keyboard keys (e.g., KEY_A, KEY_ENTER)
    bool hasKeys = false;
    for (int i = 0; i < KEY_MAX; ++i) {
        if (i == KEY_A || i == KEY_ENTER || i == KEY_SPACE) {
            if (keybit[i / 8] & (1 << (i % 8))) {
                hasKeys = true;
                break;
            }
        }
    }

    close(fd);
    return hasKeys;
}

std::string get_device_name(){
    for (int i = 0; i < 30; ++i) { // Check first 20 event devices
        std::string device = "/dev/input/event";
        device = device + std::to_string(i);

        if (isKeyboard(device)) {
            return device;
        }
    }

    return "";
}