#include "include/SamochodNaGaz.hpp"
#include "vehicle/include/AbstractVehicle.hpp"
#include <memory>

int main() {
    std::unique_ptr<AbstractVehicle> vehicle 
        = std::make_unique<SamochodNaGaz>("Mitsu");

    vehicle->drive();
}
