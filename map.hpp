#ifndef __MAP_HPP__
#define __MAP_HPP__

#include <vector>
#include "city.hpp"
#include "route.hpp"

using namespace std;

class Map {

  public:

  vector<City *> destinations;
  vector<Route *> allRoutes;
  //void virtual addCities();
  // void virtual addRoutes();
  bool virtual isOccupied(string startA, string startB, string color)=0;
  //Route virtual getRoute();
  void virtual claimRoute(Player *thePlayer, string myCityA, string myCityB, string color)=0;
  void virtual resetMap()=0;
  int virtual findRoute(string cityA, string cityB, string color)=0;
  vector<Route *> virtual getAllRoutes()=0;
  void virtual printMap()=0;
};

#endif //__MAP_HPP__