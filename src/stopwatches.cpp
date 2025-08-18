#include <iostream>
#include <chrono>

namespace Stopwatches {
    void startStopwatch() {
        auto start = std::chrono::high_resolution_clock::now();
        std::cout << "Stopwatch started. Press Enter to stop." << std::endl;
        std::cin.ignore();
        std::cin.get();

        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::seconds>(end - start).count();

        std::cout << "Elapsed time: " << duration << " seconds" << std::endl;
    }
}
