#ifndef __US_MAP_HPP__
#define __US_MAP_HPP__

#include <vector>
#include "city.hpp"
#include "map.hpp"
#include "route.hpp"

using namespace std;

class USMap : Map{
  public:
    string imagePath="images/us_map.jpeg";
    vector<City *> destinations;
    vector<Route *> allRoutes;


  USMap(){
      addCities();
      makeRoutes();

  }

  ~USMap(){
    //delete cities
    //for loop delete all cities object pointer
    for(int i=0; i < destinations.size(); ++i){
      delete destinations.at(i);
    }

    destinations.clear();
    
    //delete route
    //for loop delete all routes object pointer
    for(int i=0; i < allRoutes.size(); ++i){
      delete allRoutes.at(i);
    }

    allRoutes.clear();
  }

  void addCities(){
    //Add Cities (it's a lot)
    destinations.push_back(new City("Atlanta"));
    destinations.push_back(new City("Boston"));
    destinations.push_back(new City("Calgary"));
    destinations.push_back(new City("Charleston"));
    destinations.push_back(new City("Chicago"));
    destinations.push_back(new City("Dallas"));
    destinations.push_back(new City("Denver"));
    destinations.push_back(new City("Duluth"));
    destinations.push_back(new City("El Paso"));
    destinations.push_back(new City("Helena"));
    destinations.push_back(new City("Houston"));
    destinations.push_back(new City("Kansas City"));
    destinations.push_back(new City("Las Vegas"));
    destinations.push_back(new City("Little Rock"));
    destinations.push_back(new City("Los Angeles"));
    destinations.push_back(new City("Miami"));
    destinations.push_back(new City("Montreal"));
    destinations.push_back(new City("Nashville"));
    destinations.push_back(new City("New Orleans"));
    destinations.push_back(new City("New York"));
    destinations.push_back(new City("Oklahoma City"));
    destinations.push_back(new City("Omaha"));
    destinations.push_back(new City("Phoenix"));
    destinations.push_back(new City("Pittsburgh"));
    destinations.push_back(new City("Portland"));
    destinations.push_back(new City("Raleigh"));
    destinations.push_back(new City("Saint Louis"));
    destinations.push_back(new City("Salt Lake City"));
    destinations.push_back(new City("San Francisco"));
    destinations.push_back(new City("Santa Fe"));
    destinations.push_back(new City("Sault St. Marie"));
    destinations.push_back(new City("Seattle"));
    destinations.push_back(new City("Toronto"));
    destinations.push_back(new City("Vancouver"));
    destinations.push_back(new City("Washington"));
    destinations.push_back(new City("Winnipeg"));
  }

  void makeRoutes(){
    Route *p = nullptr;
    allRoutes.reserve(78);
    
    //Add Routes
    //allRoutes.push_back(new Route(destinations.getCity("Vancouver"), destinations.getCity("Seattle"), 1, "wild", "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Vancouver"), destinations.getCity("Calgary"), 3, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Seattle"), destinations.getCity("Portland"), 1, "wild", "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Seattle"), destinations.getCity("Calgary"), 4, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Seattle"), destinations.getCity("Helena"), 6, "yellow"));
    // allRoutes.push_back(new Route(destinations.getCity("Portland"), destinations.getCity("Salt Lake City"), 6, "blue"));
    // allRoutes.push_back(new Route(destinations.getCity("Portland"), destinations.getCity("San Francisco"), 5, "green", "purple"));
    // allRoutes.push_back(new Route(destinations.getCity("San Francisco"), destinations.getCity("Salt Lake City"), 5, "orange", "white"));
    // allRoutes.push_back(new Route(destinations.getCity("San Francisco"), destinations.getCity("Los Angeles"), 3, "purple", "yellow"));
    // allRoutes.push_back(new Route(destinations.getCity("Los Angeles"), destinations.getCity("Las Vegas"), 2, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Los Angeles"), destinations.getCity("Phoenix"), 3, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Los Angeles"), destinations.getCity("El Paso"), 6, "black"));
    // allRoutes.push_back(new Route(destinations.getCity("Las Vegas"), destinations.getCity("Salt Lake City"), 3, "orange"));
    // allRoutes.push_back(new Route(destinations.getCity("Salt Lake City"), destinations.getCity("Denver"), 3, "yellow", "red"));
    // allRoutes.push_back(new Route(destinations.getCity("Salt Lake City"), destinations.getCity("Helena"), 3, "purple"));
    // allRoutes.push_back(new Route(destinations.getCity("Helena"), destinations.getCity("Calgary"), 4, "grey"));
    // allRoutes.push_back(new Route(destinations.getCity("Helena"), destinations.getCity("Winnipeg"), 4, "blue"));
    // allRoutes.push_back(new Route(destinations.getCity("Helena"), destinations.getCity("Duluth"), 6, "orange"));
    // allRoutes.push_back(new Route(destinations.getCity("Helena"), destinations.getCity("Omaha"), 5, "red"));
    // allRoutes.push_back(new Route(destinations.getCity("Helena"), destinations.getCity("Denver"), 4, "green"));
    // allRoutes.push_back(new Route(destinations.getCity("Denver"), destinations.getCity("Phoenix"), 5, "white"));
    // allRoutes.push_back(new Route(destinations.getCity("Denver"), destinations.getCity("Santa Fe"), 2, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Denver"), destinations.getCity("Omaha"), 4, "purple"));
    // allRoutes.push_back(new Route(destinations.getCity("Denver"), destinations.getCity("Kansas City"), 4, "black", "orange"));
    // allRoutes.push_back(new Route(destinations.getCity("Denver"), destinations.getCity("Oklahoma City"), 4, "reg"));
    // allRoutes.push_back(new Route(destinations.getCity("Santa Fe"), destinations.getCity("Phoenix"), 3, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Phoenix"), destinations.getCity("El Paso"), 3, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("El Paso"), destinations.getCity("Santa Fe"), 2, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("El Paso"), destinations.getCity("Oklahoma City"), 5, "yellow"));
    // allRoutes.push_back(new Route(destinations.getCity("El Paso"), destinations.getCity("Dallas"), 4, "red"));
    // allRoutes.push_back(new Route(destinations.getCity("El Paso"), destinations.getCity("Houston"), 6, "green"));
    // allRoutes.push_back(new Route(destinations.getCity("Santa Fe"), destinations.getCity("Oklahoma City"), 3, "blue"));
    // allRoutes.push_back(new Route(destinations.getCity("Calgary"), destinations.getCity("Winnipeg"), 6, "white"));
    // allRoutes.push_back(new Route(destinations.getCity("Winnipeg"), destinations.getCity("Sault St. Marie"), 6, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Winnipeg"), destinations.getCity("Duluth"), 4, "black"));
    // allRoutes.push_back(new Route(destinations.getCity("Duluth"), destinations.getCity("Sault St. Marie"), 3, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Duluth"), destinations.getCity("Omaha"), 2, "wild", "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Omaha"), destinations.getCity("Kansas City"), 1, "wild", "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Kansas City"), destinations.getCity("Oklahoma City"), 2, "wild", "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Oklahoma City"), destinations.getCity("Dallas"), 2, "wild", "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Dallas"), destinations.getCity("Houston"), 1, "wild", "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Houston"), destinations.getCity("New Orleans"), 1, "wild", ""));
    // allRoutes.push_back(new Route(destinations.getCity("Dallas"), destinations.getCity("Little Rock"), 2, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Oklahoma City"), destinations.getCity("Little Rock"), 2, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Kansas City"), destinations.getCity("Saint Louis"), 2, "purple", "blue"));
    // allRoutes.push_back(new Route(destinations.getCity("Omaha"), destinations.getCity("Chicago"), 4, "blue"));
    // allRoutes.push_back(new Route(destinations.getCity("Duluth"), destinations.getCity("Chicago"), 3, "red"));
    // allRoutes.push_back(new Route(destinations.getCity("Duluth"), destinations.getCity("Toronto"), 6, "purple"));
    // allRoutes.push_back(new Route(destinations.getCity("Sault St. Marie"), destinations.getCity("Toronto"), 2, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Chicago"), destinations.getCity("Toronto"), 4, "white"));
    // allRoutes.push_back(new Route(destinations.getCity("Chicago"), destinations.getCity("Saint Louis"), 2, "white", "green"));
    // allRoutes.push_back(new Route(destinations.getCity("Saint Louis"), destinations.getCity("Little Rock"), 2, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Little Rock"), destinations.getCity("New Orleans"), 3, "green"));
    // allRoutes.push_back(new Route(destinations.getCity("Little Rock"), destinations.getCity("Nashville"), 3, "white"));
    // allRoutes.push_back(new Route(destinations.getCity("Saint Louis"), destinations.getCity("Nashville"), 2, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Chicago"), destinations.getCity("Pittsburg"), 5, "green"));
    // allRoutes.push_back(new Route(destinations.getCity("Nashville"), destinations.getCity("Raleigh"), 3, "black"));
    // allRoutes.push_back(new Route(destinations.getCity("Miami"), destinations.getCity("Charleston"), 4, "purple"));
    // allRoutes.push_back(new Route(destinations.getCity("Charleston"), destinations.getCity("Raleich"), 2, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Raleich"), destinations.getCity("Washington"), 2, "wild", "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Washington"), destinations.getCity("New York"), 2, "orange", "black"));
    // allRoutes.push_back(new Route(destinations.getCity("New York"), destinations.getCity("Boston"), 2, "red", "yellow"));
    // allRoutes.push_back(new Route(destinations.getCity("Boston"), destinations.getCity("Montreal"), 2, "wild", "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Montreal"), destinations.getCity("Sault St. Marie"), 5, "black"));
    // allRoutes.push_back(new Route(destinations.getCity("Montreal"), destinations.getCity("Toronto"), 3, "blue"));
    // allRoutes.push_back(new Route(destinations.getCity("Montreal"), destinations.getCity("New York"), 3, "blue"));
    // allRoutes.push_back(new Route(destinations.getCity("New York"), destinations.getCity("Pitttsburgh"), 2, "white", "green"));
    // allRoutes.push_back(new Route(destinations.getCity("Washington"), destinations.getCity("Pitttsburgh"), 2, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Toronto"), destinations.getCity("Pitttsburgh"), 2, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Pittsburg"), destinations.getCity("Raleich"), 2, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Raleigh"), destinations.getCity("Atlanta"), 2, "wild", "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Atlanta"), destinations.getCity("Charleston"), 2, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Miami"), destinations.getCity("Atlanta"), 5, "blue"));
    // allRoutes.push_back(new Route(destinations.getCity("Miami"), destinations.getCity("New Orleans"), 6, "red"));
    // allRoutes.push_back(new Route(destinations.getCity("New Orleans"), destinations.getCity("Atlanta"), 4, "yellow", "orange"));
    // allRoutes.push_back(new Route(destinations.getCity("Atlanta"), destinations.getCity("Nashville"), 1, "wild"));
    // allRoutes.push_back(new Route(destinations.getCity("Chicago"), destinations.getCity("Pittsburgh"), 3, "orange", "black"));
    // allRoutes.push_back(new Route(destinations.getCity("Nashville"), destinations.getCity("Pittsburgh"), 4, "yellow"));
  }

  City* USMap::getCity(string theCity){
    City * temp;
    for(int i=0; i < destinations.size(); ++i){
        if(destinations.at(i)->destinationName == theCity){
          temp = destinations.at(i);
          return temp;
        }
    }
  }

  bool isOccupied(string startA, string startB, string color){
      //check if a route is occupied

      return 0;
  }

  Route* USMap::getRoute(string startCity, string endCity, string color){
    // bool look=false;
    // for(int i=0; i < allRoutes.size(); ++i){
    //     allRoutes.at(i)->destinationA();
    // }

    // cout << "No Route Found" << endl;
    
    // return allRoutes.at(0);

  }

  void claimRoute(Player *thePlayer, string startA, string startB, string color){
    bool check = isOccupied;

      if(check == 1){
        ///throw error
        cout << "Route Occupied" << endl;

      }else{
        
      }
  
  //claim the route
  }

};

#endif //__US_MAP_HPP__