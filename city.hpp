#ifndef __CITY_HPP__
#define __CITY_HPP__

#include <string>
#include "route.hpp"

using namespace std;

class City {
  //int nodeNumber?
  //City Name
  public: 
   string destinationName;
   vector <Route*> myRoutes;

  City(string name){
    destinationName=name;
  }

  City (string name, Route whatever[] ){
    destinationName=name;
    myRoutes=cityRoutes;
  }


  ~City(){
    for(int i=0; i < myRoutes.size(); i++)
      myRoutes.clear();
  
  void addRoute(Route * tempRoute){
      myRoutes.push_back(tempRoute);
  }
    
  }


};

#endif //__CITY_HPP__