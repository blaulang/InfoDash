#include <iostream>
#include <string>

namespace Localization {
    std::string currentLanguage = "en";

    void setLanguage(const std::string& language) {
        currentLanguage = language;
        std::cout << "Language switched to " << language << "." << std::endl;
    }

    void changeLanguage() {
        std::cout << "Available languages: en, zh, jp, de, fr" << std::endl;
        std::string lang;
        std::cout << "Enter language code: ";
        std::cin >> lang;

        if (lang == "en" || lang == "zh" || lang == "jp" || lang == "de" || lang == "fr") {
            setLanguage(lang);
        } else {
            std::cout << "Invalid language code. Try again." << std::endl;
        }
    }
}