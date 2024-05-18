#include <vector>
#include "Truck.h" 



int main() {
    std::vector<Truck> truckList = {
        Truck("Volvo", "FH16", 120000, "Automatic", "Diesel", 25.0),
        Truck("Mercedes-Benz", "Actros", 110000, "Automatic", "Diesel", 24.0),
        Truck("Scania", "R500", 115000, "Automatic", "Diesel", 22.0),
        Truck("MAN", "TGX", 105000, "Automatic", "Diesel", 24.5),
        Truck("DAF", "XF", 95000, "Automatic", "Diesel", 23.0),
        Truck("Iveco", "Stralis", 98000, "Automatic", "Diesel", 21.5),
        Truck("Freightliner", "Cascadia", 125000, "Automatic", "Diesel", 26.0),
        Truck("Kenworth", "W900", 130000, "Manual", "Diesel", 24.0),
        Truck("Peterbilt", "579", 119000, "Automatic", "Diesel", 25.5),
        Truck("Mack", "Anthem", 108000, "Automatic", "Diesel", 23.5)
    };





int main() {
    std::vector<Truck> truckList = {
        Truck("Ford", "F-150", 15000, "Automatic", "Gasoline", 5, "Pickup Truck"),
        Truck("Chevrolet", "Silverado", 20000, "Automatic", "Diesel", 5, "Pickup Truck"),
        Truck("Toyota", "Tundra", 25000, "Manual", "Gasoline", 5, "Pickup Truck"),
        Truck("Ford", "Ranger", 18000, "Automatic", "Diesel", 4, "Pickup Truck"),
        Truck("RAM", "1500", 22000, "Automatic", "Gasoline", 6, "Pickup Truck"),
        Truck("Chevrolet", "Colorado", 16000, "Manual", "Gasoline", 4, "Pickup Truck"),
        Truck("Toyota", "Tacoma", 12000, "Automatic", "Diesile", 5, "Pickup Truck"),
        Truck("Ford", "Transit", 8000, "Automatic", "Diesel", 2, "Van"),
        Truck("Nissan", "NV200", 6000, "Manual", "Gasoline", 2, "Van"),
        Truck("Mercedes", "Sprinter", 30000, "Automatic", "Diesel", 3, "Van"),
        Truck("Chevrolet", "Express", 20000, "Automatic", "Gasoline", 8, "Van"),
        Truck("RAM", "ProMaster", 15000, "Manual", "Diesile", 3, "Van"),
        Truck("Ford", "F-250", 18000, "Automatic", "Gasoline", 5, "Pickup Truck"),
        Truck("RAM", "2500", 26000, "Manual", "Diesel", 6, "Pickup Truck"),
        Truck("Chevrolet", "Silverado HD", 24000, "Automatic", "Diesel", 6, "Pickup Truck")
    };


    // Display information about each truck
    for (const Truck& truck : truckList) {
        truck.display_information();
    }


    return 0;
}
