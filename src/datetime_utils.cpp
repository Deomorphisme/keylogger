#include "datetime_utils.hpp"
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>

namespace datetime_utils {

std::string get_date() {
    auto now = std::chrono::system_clock::now();
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
    std::tm* localTime = std::localtime(&currentTime);

    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %I:%M:%S %p", localTime);

    return std::string(buffer);
}

} // namespace datetime_utils
