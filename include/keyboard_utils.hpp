//keyboard_utils.hpp
#pragma once
#ifndef KEYBOARD_LAYOUT_HPP
#define KEYBOARD_LAYOUT_HPP

#include <string>

std::string getKeyboardLayout();

bool isKeyboard(const std::string& device);

std::string get_device_name();

#endif
