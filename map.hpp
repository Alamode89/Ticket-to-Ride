#ifndef __MAP_HPP__
#define __MAP_HPP__

class Player;
#include <vector>
#include "city.hpp"
#include "route.hpp"

using namespace std;

class Map {

  public:

  vector<City *> destinations;
  vector<Route *> allRoutes;

  ~Map(){
      deleteRoutes();
      deleteCities();
  }

  //void virtual addCities();
  // void virtual addRoutes();
  bool virtual isOccupied(string startA, string startB, string color)=0;
  //Route virtual getRoute();
  //void virtual claimRoute(Player *thePlayer, string myCityA, string myCityB, string color)=0;
  int virtual claimRoute(Player *thePlayer, string myCityA, string myCityB, string color)=0;
  void virtual resetMap()=0;
  int virtual findRoute(string cityA, string cityB, string color)=0;
  vector<Route *> virtual getAllRoutes()=0;
  void virtual printMap()=0;

  void deleteRoutes(){
    for (Route* obj : allRoutes)
        delete obj;

    allRoutes.clear();
  }

  void deleteCities(){
    //for loop delete all cities object pointer
    for(int i=0; i < destinations.size(); ++i){
      delete destinations.at(i);
    }

  }
};

#endif //__MAP_HPP__