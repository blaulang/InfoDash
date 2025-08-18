#include <iostream>
#include <string>

namespace Theme {
    std::string currentTheme = "light";

    void setTheme(const std::string& theme) {
        currentTheme = theme;
        std::cout << "Theme switched to " << theme << " mode." << std::endl;
    }

    void switchTheme() {
        if (currentTheme == "light") {
            setTheme("dark");
        } else if (currentTheme == "dark") {
            setTheme("vaporwave");
        } else {
            setTheme("light");
        }
    }
}