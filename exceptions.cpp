#include <iostream>
#include <string>
#include <sstream>
#include "exceptions.h"

using std::cout;
using std::cin;
using std::string;
using std::stringstream;



const char* NegativeNumber::what() const {
    return "Номер дома отрицательный\n";
}
