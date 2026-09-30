#include <iostream>
#include "time.h"

int main() {
    std::cout << "Enter your name: ";
    std::string name;
    getline(std::cin, name);
    std::cout << "Choose your gender (male/female): ";
    std::string gender;
    getline(std::cin, gender);
    std::string greeting = "";
    if (gender == "male") {
        greeting = "Mr ";
    }
    else if (gender == "female") {
        greeting = "Ms ";
    }
    std::cout << helloDepOnTime() << ", " << greeting << name << std::endl;
    return 0;
}
