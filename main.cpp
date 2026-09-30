#include <iostream>
#include "time.h"

int main() {
    std::cout << "Enter your name: ";
    std::string name;
    getline(std::cin, name);
    std::cout << helloDepOnTime() << ", " << name << std::endl;
    return 0;
}
