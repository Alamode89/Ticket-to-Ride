#ifndef __MAP_HPP__
#define __MAP_HPP__

#include <vector>
#include "city.hpp"
#include "route.hpp"

using namespace std;

class Map {

  void virtual addCities()=0;
  void virtual addRoutes()=0;

  bool virtual isOccupied(string startA, string startB, string color)=0;
  // Route* virtual getRoute(string startCity, string endCity, string color)=null;
  void virtual claimRoute(Player *thePlayer, string myCityA, string myCityB, string color)=0;
  void virtual resetMap()=0;


};

#endif //__MAP_HPP__