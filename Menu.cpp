#include "Menu.h"
#include <iostream>
#include <vector>


void Menu::displayCarMenu(){
    std::cout << "\n --- Car Filter Menu ---\n";
    std::cout << "| 1. Set Make               |\n";
    std::cout << "| 2. Set Price Range        |\n";
    std::cout << "| 3. Set Body Type          |\n";
    std::cout << "| 4. Set Number of Seats    |\n";
    std::cout << "| 5. Set Transmission Type  |\n";
    std::cout << "| 6. Set Fuel Type          |\n";
    // std::cout << "| 7. Set Engine Capacity    |\n";
    // std::cout << "| 8. Set Load Capacity      |\n";
    std::cout << "| 10. Apply Filter          |\n";
    std::cout << "| 0. Exit                   |\n";
    std::cout << "|___________________________|\n";
}
void Menu::displayMotorbikeMenu(){
    std::cout << "\n --- Motorbike Filter Menu ---\n";
    std::cout << "| 1. Set Make               |\n";
    std::cout << "| 2. Set Price Range        |\n";
    std::cout << "| 3. Set Engine Capacity    |\n";
    // std::cout << "| 3. Set Body Type          |\n";
    // std::cout << "| 4. Set Number of Seats    |\n";
    std::cout << "| 4. Set Transmission Type  |\n";
    std::cout << "| 5. Set Fuel Type          |\n";

    // std::cout << "| 8. Set Load Capacity      |\n";
    std::cout << "| 10. Apply Filter          |\n";
    std::cout << "| 0. Exit                   |\n";
    std::cout << "|___________________________|\n";
}
void Menu::displayTruckMenu(){
    std::cout << "\n --- Truck Filter Menu ---\n";
    std::cout << "| 1. Set Make               |\n";
    std::cout << "| 2. Set Price Range        |\n";
    // std::cout << "| 3. Set Engine Capacity    |\n";
    // std::cout << "| 3. Set Body Type          |\n";
    // std::cout << "| 4. Set Number of Seats    |\n";
    std::cout << "| 4. Set Fuel Type          |\n";
    std::cout << "| 3. Set Transmission Type  |\n";
    std::cout << "| 5. Set Load Capacity      |\n";

    // std::cout << "| 8. Set Load Capacity      |\n";
    std::cout << "| 10. Apply Filter          |\n";
    std::cout << "| 0. Exit                   |\n";
    std::cout << "|___________________________|\n";
}





void Menu::displayOptions(const std::vector<std::string>& options) {
    for (size_t i = 0; i < options.size(); ++i) {
        std::cout << i + 1 << ". " << options[i] << '\n';
    }
}
void Menu::displayOptions1(const std::vector<int>& options) {
    for (size_t i = 0; i < options.size(); ++i) {
        std::cout << i + 1 << ". " << options[i] << '\n';
    }
}


int Menu::getChoice(int min, int max) {
        int choice;
        do {
            std::cout << "\n*******************************\n";
            std::cout << "       Enter your choice: ";
            std::cin >> choice;
            std::cout << "*******************************\n";
            if (choice < min || choice > max) {
                std::cout << "Invalid choice. Please try again.\n";
            }
        } while (choice < min || choice > max);
        return choice;
    }
std::string Menu::selectOption(const std::string& prompt, const std::vector<std::string>& options) {
    std::cout << prompt << ":\n";
    displayOptions(options);
    int choice = getChoice(1, options.size());
    return options[choice - 1];
}
int Menu::selectOption1(const std::string& prompt, const std::vector<int>& options) {
    std::cout << prompt << ":\n";
    displayOptions1(options);
    int choice = getChoice(1, options.size());
    return options[choice - 1];
}
float Menu::getFloatInput(const std::string& prompt) {
    float input;
    std::cout << prompt;
    std::cin >> input;
    return input;
}

int Menu::getIntInput(const std::string& prompt) {
    int input;
    std::cout << prompt;
    std::cin >> input;
    return input;
}


void Menu::displayVehicleTypeMenu() {
    std::cout << "\n --- Choose Vehicle Type ---\n";
    std::cout << "| 1. Car               |\n";
    std::cout << "| 2. Motorcycle        |\n";
    std::cout << "| 3. Truck             |\n";
    std::cout << "| 0. Exit               |\n";
    std::cout << "|___________________________|\n";
}



