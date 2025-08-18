#include <iostream>
#include <ctime>

namespace Clocks {
    void showWorldClocks() {
        std::time_t now = std::time(nullptr);
        std::cout << "Current UTC Time: " << std::asctime(std::gmtime(&now));
        // Add logic for other time zones
        std::cout << "More world clocks coming soon!" << std::endl;
    }
}