#include <vector>
#include "Motorbike.h"


int main() {
    std::vector<Motorbike> motorbikeList = {
        Motorbike("Yamaha", "YFZ", 5000, "Automatic", "Electric", 2, "Scooter"),
        Motorbike("Yamaha", "YZF-R1", 1100, "Manual", "Gasoline", 2, "Motorcycle"),
        Motorbike("Yamaha", "MT-09", 200, "Manual", "Gasoline", 2, "Motorcycle"),
        Motorbike("Yamaha", "VMAX", 600, "Manual", "Gasoline", 2, "Motorcycle"),
        Motorbike("Yamaha", "YZF-R1", 15000, "Manual", "Gasoline", 2, "Motorbike"),
        Motorbike("Honda", "CBR600RR", 12000, "Manual", "Gasoline", 2, "Motorbike"),
        Motorbike("Kawasaki", "Ninja ZX-6R", 11000, "Manual", "Gasoline", 2, "Motorbike"),
        Motorbike("Ducati", "Panigale V4", 25000, "Manual", "Gasoline", 2, "Motorbike"),
        Motorbike("BMW", "S1000RR", 20000, "Manual", "Gasoline", 2, "Motorbike"),
        Motorbike("Suzuki", "GSX-R750", 14000, "Manual", "Gasoline", 2, "Motorbike"),
        Motorbike("KTM", "RC 390", 5500, "Manual", "Gasoline", 2, "Motorbike"),
        Motorbike("Yamaha", "MT-09", 9000, "Manual", "Gasoline", 2, "Motorbike"),
        Motorbike("Honda", "Africa Twin", 14000, "Automatic", "Gasoline", 2, "Motorbike"),
        Motorbike("Harley-Davidson", "Street 750", 7500, "Manual", "Gasoline", 2, "Motorbike"),
        Motorbike("Yamaha", "TMAX", 11000, "Automatic", "Gasoline", 2, "Scooter"),
        Motorbike("Piaggio", "Beverly", 3500, "Automatic", "Gasoline", 2, "Scooter"),
        Motorbike("Honda", "PCX150", 3600, "Automatic", "Gasoline", 2, "Scooter"),
        Motorbike("Suzuki", "Burgman 200", 4800, "Automatic", "Gasoline", 2, "Scooter"),
        Motorbike("Vespa", "GTS Super 300", 6500, "Automatic", "Gasoline", 2, "Scooter"),
        Motorbike("BMW", "C 400 X", 8500, "Automatic", "Gasoline", 2, "Scooter"),
        Motorbike("Yamaha", "Zuma 125", 3400, "Automatic", "Gasoline", 2, "Scooter"),
        Motorbike("KTM", "125 Duke", 5000, "Manual", "Gasoline", 2, "Motorbike"),
        Motorbike("Kawasaki", "Z400", 6000, "Manual", "Gasoline", 2, "Motorbike"),
        Motorbike("Triumph", "Street Triple", 9500, "Manual", "Gasoline", 2, "Motorbike")

    };

    // Display information about each motorbike
    for (const Motorbike& motorbike : motorbikeList) {
        motorbike.display_information();
    }

    return 0;
}
