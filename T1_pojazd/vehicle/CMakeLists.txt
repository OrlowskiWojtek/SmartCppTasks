add_library(Vehicles 
            src/AbstractVehicle.cpp
            src/SamochodNaGaz.cpp)


target_include_directories(Vehicles PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
