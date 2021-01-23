#include "config.h"
#include "lib.h"

#include <iostream>

int main(int, char**) {
    std::cout << "Hello from main!" << std::endl;
    lib::fromLib();
    std::cout << "Lib verion:" << lib::getVersion() << std::endl;

    std::cout << "Main version: " << (PROJECT_VERSION) << std::endl;

    return std::cout.good() ? 0 : 1;
}