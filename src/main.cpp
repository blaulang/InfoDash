#include <iostream>
#include "clocks.h"
#include "timers.h"
#include "stopwatches.h"
#include "calendar.h"
#include "github.h"
#include "theme.h"
#include "localization.h"

void displayMenu() {
    std::cout << "Welcome to InfoDash!" << std::endl;
    std::cout << "1. World Clocks" << std::endl;
    std::cout << "2. Timers" << std::endl;
    std::cout << "3. Stopwatches" << std::endl;
    std::cout << "4. Calendar" << std::endl;
    std::cout << "5. GitHub Dashboard" << std::endl;
    std::cout << "6. Switch Theme" << std::endl;
    std::cout << "7. Change Language" << std::endl;
    std::cout << "0. Exit" << std::endl;
}

int main() {
    int choice;
    bool running = true;

    // Initialize modules
    Localization localization;
    Theme theme;

    // Set default language and theme
    localization.setLanguage("en");
    theme.setTheme("light");

    while (running) {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                Clocks::showWorldClocks();
                break;
            case 2:
                Timers::startTimer();
                break;
            case 3:
                Stopwatches::startStopwatch();
                break;
            case 4:
                Calendar::showCalendar();
                break;
            case 5:
                GitHub::fetchUserDashboard();
                break;
            case 6:
                theme.switchTheme();
                break;
            case 7:
                localization.changeLanguage();
                break;
            case 0:
                running = false;
                std::cout << "Exiting InfoDash. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
