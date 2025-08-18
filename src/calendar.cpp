#include <iostream>
#include <iomanip>
#include <ctime>

namespace Calendar {
    void showCalendar() {
        std::time_t now = std::time(nullptr);
        std::tm* localTime = std::localtime(&now);

        std::cout << "Today: " 
                  << std::put_time(localTime, "%A, %B %d, %Y") 
                  << std::endl;

        std::cout << "Calendar functionality coming soon!" << std::endl;
    }
}