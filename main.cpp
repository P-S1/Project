#include <vector>
#include "Car.h"

int main() {
    std::vector<Car> carList = {
        Car("Toyota", "Camry", 12000, "Automatic", "Gasoline", 5, "Sedan"),
        Car("Honda", "Civic", 23000, "Manual", "Gasoline", 5, "Sedan"),
        Car("Volvo", "XC90", 15000, "Automatic", "Diesel", 7, "SUV"),
        Car("Mercedes", "C-Class", 22000, "Automatic", "Gasoline", 5, "Sedan"),
        Car("BMW", "3 Series", 18000, "Manual", "Diesel", 5, "Sedan"),
        Car("Audi", "A4", 16000, "Automatic", "Gasoline", 5, "Sedan"),
        Car("Toyota", "Prius", 9000, "Automatic", "Electric", 5, "Hatchback"),
        Car("Honda", "Accord", 27000, "Manual", "Gasoline", 5, "Sedan"),
        Car("Volvo", "S60", 20000, "Automatic", "Diesel", 5, "Sedan"),
        Car("Mercedes", "GLA", 32000, "Automatic", "Gasoline", 5, "SUV"),
        Car("BMW", "X5", 28000, "Automatic", "Diesel", 5, "SUV"),
        Car("Audi", "Q5", 10000, "Automatic", "Diesel", 5, "SUV"),
        Car("Toyota", "Corolla", 4000, "Manual", "Gasoline", 5, "Sedan"),
        Car("Honda", "Fit", 1000, "Automatic", "Gasoline", 5, "Hatchback"),
        Car("Volvo", "V40", 12000, "Automatic", "Gasoline", 5, "Hatchback"),
        Car("Mercedes", "E-Class", 25000, "Automatic", "Diesel", 5, "Sedan"),
        Car("BMW", "5 Series", 15000, "Manual", "Gasoline", 5, "Sedan"),
        Car("Audi", "A3", 17000, "Automatic", "Gasoline", 5, "Sedan"),
        Car("Toyota", "RAV4", 22000, "Automatic", "Diesel", 5, "SUV"),
        Car("Honda", "CR-V", 14000, "Manual", "Gasoline", 5, "SUV"),
        Car("Volvo", "XC60", 5000, "Automatic", "Gasoline", 5, "SUV"),
        Car("Mercedes", "S-Class", 31000, "Automatic", "Diesile", 5, "Sedan"),
        Car("BMW", "M3", 2500, "Manual", "Gasoline", 4, "Sedan"),
        Car("Audi", "TT", 7000, "Automatic", "Gasoline", 4, "Coupe"),
        Car("Toyota", "86", 16000, "Manual", "Gasoline", 4, "Coupe"),
        Car("Honda", "Pilot", 30000, "Automatic", "Gasoline", 7, "SUV")
    };

    // Display information about each car
    for (const Car& car : carList) {
        car.display_information();
    }

    return 0;
}

