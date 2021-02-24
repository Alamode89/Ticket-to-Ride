#ifndef __MAP_HPP__
#define __MAP_HPP__

#include <vector>
#include "city.hpp"
#include "route.hpp"

using namespace std;

class Map {

void virtual addCities();
City virtual getCity();

void virtual makeRoutes();
bool virtual isOccupied();
Route virtual getRoute();
void virtual claimRoute();
void virtual resetMap();

};

#endif //__MAP_HPP__