#ifndef DATETIME_UTILS_HPP
#define DATETIME_UTILS_HPP

#include <string>

namespace datetime_utils {

/**
 * @brief Returns the current date and time as a formatted string.
 *
 * @return std::string Current date and time in the format "YYYY-MM-DD HH:MM:SS AM/PM".
 */
std::string get_date();

} // namespace datetime_utils

#endif // DATETIME_UTILS_HPP
