#ifndef MENU_H
#define MENU_H
#include <vector>
#include <string>

class Menu {
    public:
        void displayCarMenu();
        void displayMotorbikeMenu();
        void displayTruckMenu();
        void displayOptions(const std::vector<std::string>& options);
        void displayOptions1(const std::vector<int>& options);
        void displayVehicleTypeMenu();

        int getChoice(int min, int max);
        std::string selectOption(const std::string& prompt, const std::vector<std::string>& options);
        int selectOption1(const std::string& prompt, const std::vector<int>& options);
        float getFloatInput(const std::string& prompt);
        int getIntInput(const std::string& prompt);
        

};
#endif