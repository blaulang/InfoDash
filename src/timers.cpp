#include <iostream>
#include <thread>
#include <chrono>

namespace Timers {
    void startTimer() {
        int seconds;
        std::cout << "Enter duration in seconds: ";
        std::cin >> seconds;

        std::cout << "Timer started for " << seconds << " seconds..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(seconds));

        std::cout << "Time's up!" << std::endl;
    }
}