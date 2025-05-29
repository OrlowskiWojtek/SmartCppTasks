#ifndef ABSTRACT_VEHICLE_HPP
#define ABSTRACT_VEHICLE_HPP

#include <string>

// robi wrum wrum
class AbstractVehicle {
public:
  virtual void drive() = 0;
  std::string get_brand();

  AbstractVehicle() = default;
  AbstractVehicle(std::string brand);

protected:
  std::string brand;
};

#endif
