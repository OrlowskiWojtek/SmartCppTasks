#include "include/AbstractVehicle.hpp"

std::string AbstractVehicle::get_brand() { return brand; }

AbstractVehicle::AbstractVehicle(std::string brand) { this->brand = brand; }
