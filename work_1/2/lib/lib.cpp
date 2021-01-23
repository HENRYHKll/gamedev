#include "lib.h"
#include "config.h"

#include <iostream>

namespace lib {

    int fromLib() {
        std::cout << "Hello from lib!" << std::endl;
        return 42;
    }

    int getVersion() {
        return (PROJECT_VERSION);
    }

}