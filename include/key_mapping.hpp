#ifndef KEY_MAPPING_HPP
#define KEY_MAPPING_HPP

#include <string>
#include <linux/input.h>

const char* mapKeyCodeAzerty(int code);
const char* mapKeyCodeQwerty(int code);
const char* mapKeyCode(int code, const std::string& layout);

#endif
