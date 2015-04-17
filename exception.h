#pragma once
#include <iostream>
#include <exception>
#include <string>

using std::cout;
using std::cin;
using std::exception;
using std::string;

class NegativeNumber : public exception {
 public:
    const char* what() const;
};
