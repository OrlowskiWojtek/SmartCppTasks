#ifndef SAMOCHOD_NA_GAZ_HPP
#define SAMOCHOD_NA_GAZ_HPP

#include "include/AbstractVehicle.hpp"

class SamochodNaGaz : public AbstractVehicle {
public:
  using AbstractVehicle::AbstractVehicle;
  void drive() override;
};

#endif
