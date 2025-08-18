#include <iostream>
#include <string>

namespace GitHub {
    void fetchUserDashboard() {
        std::string username;
        std::cout << "Enter your GitHub username: ";
        std::cin >> username;

        // Placeholder for GitHub API integration
        std::cout << "Fetching data for " << username << "..." << std::endl;
        std::cout << "Top repositories and contribution graphs coming soon!" << std::endl;
    }
}