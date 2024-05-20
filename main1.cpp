#include <iostream>
#include "Interface.h"

int main() {

     std::vector<Vehicle*> vehicles;

    vehicles.push_back(new Car("Toyota", "Camry", 30000, "Automatic", "Gasoline", 5, "Sedan"));
    vehicles.push_back(new Car("Honda", "Civic", 25000, "Manual", "Gasoline", 5, "Sedan"));
    vehicles.push_back(new Motorbike("Yamaha", "MT-07", 7500, "Manual", "Gasoline", 689));
    vehicles.push_back(new Truck("Volvo", "FH16", 120000, "Automatic", "Diesel", 25.0));
    vehicles.push_back(new Car("Honda", "Civic", 23000, "Manual", "Gasoline", 5, "Sedan"));
    vehicles.push_back(new Car("Volvo", "XC90", 15000, "Automatic", "Diesel", 7, "SUV"));
    vehicles.push_back(new Car("Mercedes", "C-Class", 22000, "Automatic", "Gasoline", 5, "Sedan"));
    vehicles.push_back(new Car("BMW", "3 Series", 18000, "Manual", "Diesel", 5, "Sedan"));
    vehicles.push_back(new Car("Audi", "A4", 16000, "Automatic", "Gasoline", 5, "Sedan"));
    vehicles.push_back(new Car("Toyota", "Prius", 9000, "Automatic", "Electric", 5, "Hatchback"));
    vehicles.push_back(new Car("Honda", "Accord", 27000, "Manual", "Gasoline", 5, "Sedan"));
    vehicles.push_back(new Car("Volvo", "S60", 20000, "Automatic", "Diesel", 5, "Sedan"));
    vehicles.push_back(new Car("Mercedes", "GLA", 32000, "Automatic", "Gasoline", 5, "SUV"));
    vehicles.push_back(new Car("BMW", "X5", 28000, "Automatic", "Diesel", 5, "SUV"));
    vehicles.push_back(new Car("Audi", "Q5", 10000, "Automatic", "Diesel", 5, "SUV"));
    vehicles.push_back(new Car("Toyota", "Corolla", 4000, "Manual", "Gasoline", 5, "Sedan"));
    vehicles.push_back(new Car("Honda", "Fit", 1000, "Automatic", "Gasoline", 5, "Hatchback"));
    vehicles.push_back(new Car("Volvo", "V40", 12000, "Automatic", "Gasoline", 5, "Hatchback"));
    vehicles.push_back(new Car("Mercedes", "E-Class", 25000, "Automatic", "Diesel", 5, "Sedan"));
    vehicles.push_back(new Car("BMW", "5 Series", 15000, "Manual", "Gasoline", 5, "Sedan"));
    vehicles.push_back(new Car("Audi", "A3", 17000, "Automatic", "Gasoline", 5, "Sedan"));
    vehicles.push_back(new Car("Toyota", "RAV4", 22000, "Automatic", "Diesel", 5, "SUV"));
    vehicles.push_back(new Car("Honda", "CR-V", 14000, "Manual", "Gasoline", 5, "SUV"));
    vehicles.push_back(new Car("Volvo", "XC60", 5000, "Automatic", "Gasoline", 5, "SUV"));
    vehicles.push_back(new Car("Mercedes", "S-Class", 31000, "Automatic", "Diesile", 5, "Sedan"));
    vehicles.push_back(new Car("BMW", "M3", 2500, "Manual", "Gasoline", 4, "Sedan"));
    vehicles.push_back(new Car("Audi", "TT", 7000, "Automatic", "Gasoline", 4, "Coupe"));
    vehicles.push_back(new Car("Toyota", "86", 16000, "Manual", "Gasoline", 4, "Coupe"));
    vehicles.push_back(new Car("Honda", "Pilot", 30000, "Automatic", "Gasoline", 7, "SUV"));
    
    vehicles.push_back(new Truck("Volvo", "FH16", 120000, "Automatic", "Diesel", 25.0));
    vehicles.push_back(new Truck("Mercedes-Benz", "Actros", 110000, "Automatic", "Diesel", 24.0));
    vehicles.push_back(new Truck("Scania", "R500", 115000, "Automatic", "Diesel", 22.0));
    vehicles.push_back(new Truck("MAN", "TGX", 105000, "Automatic", "Diesel", 24.5));
    vehicles.push_back(new Truck("DAF", "XF", 95000, "Automatic", "Diesel", 23.0));
    vehicles.push_back(new Truck("Iveco", "Stralis", 98000, "Automatic", "Diesel", 21.5));
    vehicles.push_back(new Truck("Freightliner", "Cascadia", 125000, "Automatic", "Diesel", 26.0));
    vehicles.push_back(new Truck("Kenworth", "W900", 130000, "Manual", "Diesel", 24.0));
    vehicles.push_back(new Truck("Peterbilt", "579", 119000, "Automatic", "Diesel", 25.5));
    vehicles.push_back(new Truck("Mack", "Anthem", 108000, "Automatic", "Diesel", 23.5));

    vehicles.push_back(new Motorbike("Yamaha", "MT-07", 7500, "Manual", "Gasoline", 689));
    vehicles.push_back(new Motorbike("Honda", "CBR500R", 6500, "Manual", "Gasoline", 471));
    vehicles.push_back(new Motorbike("Kawasaki", "Z650", 7200, "Manual", "Gasoline", 649));
    vehicles.push_back(new Motorbike("Ducati", "Monster 797", 9000, "Manual", "Gasoline", 803));
    vehicles.push_back(new Motorbike("BMW", "G 310 R", 4750, "Manual", "Gasoline", 313));
    vehicles.push_back(new Motorbike("Suzuki", "SV650", 7000, "Manual", "Gasoline", 645));
    vehicles.push_back(new Motorbike("KTM", "390 Duke", 5500, "Manual", "Gasoline", 373));
    vehicles.push_back(new Motorbike("Yamaha", "YZF-R3", 5300, "Manual", "Gasoline", 321));
    vehicles.push_back(new Motorbike("Honda", "Rebel 500", 6200, "Manual", "Gasoline", 471));
    vehicles.push_back(new Motorbike("Harley-Davidson", "Iron 883", 9000, "Manual", "Gasoline", 883));
    vehicles.push_back(new Motorbike("Triumph", "Street Triple", 9500, "Manual", "Gasoline", 765));
    vehicles.push_back(new Motorbike("Ducati", "Scrambler Icon", 8500, "Manual", "Gasoline", 803));
    vehicles.push_back(new Motorbike("Kawasaki", "Ninja 400", 5000, "Manual", "Gasoline", 399));
    vehicles.push_back(new Motorbike("Suzuki", "GSX250R", 4500, "Manual", "Gasoline", 248));
    vehicles.push_back(new Motorbike("BMW", "R NineT", 15000, "Manual", "Gasoline", 1170));
    vehicles.push_back(new Motorbike("Yamaha", "Tracer 900", 11000, "Manual", "Gasoline", 847));
    vehicles.push_back(new Motorbike("Honda", "Africa Twin", 14000, "Manual", "Gasoline", 998));
    vehicles.push_back(new Motorbike("KTM", "1290 Super Duke R", 18000, "Manual", "Gasoline", 1301));
    vehicles.push_back(new Motorbike("Kawasaki", "Versys 650", 8300, "Manual", "Gasoline", 649));
    vehicles.push_back(new Motorbike("Triumph", "Bonneville T120", 11500, "Manual", "Gasoline", 1200));


    Interface interface;
    interface.set_vehicles(vehicles); // Set the vehicles in the interface
    interface.run();

    return 0;
}