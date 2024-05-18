#include <vector>
#include "Motorbike.h"


int main() {
    std::vector<Motorbike> motorbikeList = {
        Motorbike("Yamaha", "MT-07", 7500, "Manual", "Gasoline", 689),
        Motorbike("Honda", "CBR500R", 6500, "Manual", "Gasoline", 471),
        Motorbike("Kawasaki", "Z650", 7200, "Manual", "Gasoline", 649),
        Motorbike("Ducati", "Monster 797", 9000, "Manual", "Gasoline", 803),
        Motorbike("BMW", "G 310 R", 4750, "Manual", "Gasoline", 313),
        Motorbike("Suzuki", "SV650", 7000, "Manual", "Gasoline", 645),
        Motorbike("KTM", "390 Duke", 5500, "Manual", "Gasoline", 373),
        Motorbike("Yamaha", "YZF-R3", 5300, "Manual", "Gasoline", 321),
        Motorbike("Honda", "Rebel 500", 6200, "Manual", "Gasoline", 471),
        Motorbike("Harley-Davidson", "Iron 883", 9000, "Manual", "Gasoline", 883),
        Motorbike("Triumph", "Street Triple", 9500, "Manual", "Gasoline", 765),
        Motorbike("Ducati", "Scrambler Icon", 8500, "Manual", "Gasoline", 803),
        Motorbike("Kawasaki", "Ninja 400", 5000, "Manual", "Gasoline", 399),
        Motorbike("Suzuki", "GSX250R", 4500, "Manual", "Gasoline", 248),
        Motorbike("BMW", "R NineT", 15000, "Manual", "Gasoline", 1170),
        Motorbike("Yamaha", "Tracer 900", 11000, "Manual", "Gasoline", 847),
        Motorbike("Honda", "Africa Twin", 14000, "Manual", "Gasoline", 998),
        Motorbike("KTM", "1290 Super Duke R", 18000, "Manual", "Gasoline", 1301),
        Motorbike("Kawasaki", "Versys 650", 8300, "Manual", "Gasoline", 649),
        Motorbike("Triumph", "Bonneville T120", 11500, "Manual", "Gasoline", 1200)
    };



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
