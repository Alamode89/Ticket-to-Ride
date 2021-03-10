#ifndef __CITY_HPP__
#define __CITY_HPP__

#include <string>
#include "route.hpp"

using namespace std;

class City {
    public: 
      string destinationName;
      //vector <Route*> myRoutes;

    City(string name){
      destinationName=name;
    };

    ~City(){
      // for(int i=0; i < myRoutes.size(); i++){
      //   myRoutes
      // }
      // myRoutes.clear();
    };

    // void addRoute(Route * tempRoute){
    //   myRoutes.push_back(tempRoute);
    // }

    std::string getName(){
      return destinationName;
    }


};

#endif //__CITY_HPP__