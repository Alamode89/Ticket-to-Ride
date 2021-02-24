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
    allRoutes.push_back(new Route(getCity("Vancouver"), getCity("Seattle"), 1, "wild", "wild"));
    allRoutes.push_back(new Route(getCity("Vancouver"), getCity("Calgary"), 3, "wild"));
    allRoutes.push_back(new Route(getCity("Seattle"), getCity("Portland"), 1, "wild", "wild"));
    allRoutes.push_back(new Route(getCity("Seattle"), getCity("Calgary"), 4, "wild"));
    allRoutes.push_back(new Route(getCity("Seattle"), getCity("Helena"), 6, "yellow"));
    allRoutes.push_back(new Route(getCity("Portland"), getCity("Salt Lake City"), 6, "blue"));
    allRoutes.push_back(new Route(getCity("Portland"), getCity("San Francisco"), 5, "green", "purple"));
    allRoutes.push_back(new Route(getCity("San Francisco"), getCity("Salt Lake City"), 5, "orange", "white"));
    allRoutes.push_back(new Route(getCity("San Francisco"), getCity("Los Angeles"), 3, "purple", "yellow"));
    allRoutes.push_back(new Route(getCity("Los Angeles"), getCity("Las Vegas"), 2, "wild"));
    allRoutes.push_back(new Route(getCity("Los Angeles"), getCity("Phoenix"), 3, "wild"));
    allRoutes.push_back(new Route(getCity("Los Angeles"), getCity("El Paso"), 6, "black"));
    allRoutes.push_back(new Route(getCity("Las Vegas"), getCity("Salt Lake City"), 3, "orange"));
    allRoutes.push_back(new Route(getCity("Salt Lake City"), getCity("Denver"), 3, "yellow", "red"));
    allRoutes.push_back(new Route(getCity("Salt Lake City"), getCity("Helena"), 3, "purple"));
    allRoutes.push_back(new Route(getCity("Helena"), getCity("Calgary"), 4, "grey"));
    allRoutes.push_back(new Route(getCity("Helena"), getCity("Winnipeg"), 4, "blue"));
    allRoutes.push_back(new Route(getCity("Helena"), getCity("Duluth"), 6, "orange"));
    allRoutes.push_back(new Route(getCity("Helena"), getCity("Omaha"), 5, "red"));
    allRoutes.push_back(new Route(getCity("Helena"), getCity("Denver"), 4, "green"));
    allRoutes.push_back(new Route(getCity("Denver"), getCity("Phoenix"), 5, "white"));
    allRoutes.push_back(new Route(getCity("Denver"), getCity("Santa Fe"), 2, "wild"));
    allRoutes.push_back(new Route(getCity("Denver"), getCity("Omaha"), 4, "purple"));
    allRoutes.push_back(new Route(getCity("Denver"), getCity("Kansas City"), 4, "black", "orange"));
    allRoutes.push_back(new Route(getCity("Denver"), getCity("Oklahoma City"), 4, "reg"));
    allRoutes.push_back(new Route(getCity("Santa Fe"), getCity("Phoenix"), 3, "wild"));
    allRoutes.push_back(new Route(getCity("Phoenix"), getCity("El Paso"), 3, "wild"));
    allRoutes.push_back(new Route(getCity("El Paso"), getCity("Santa Fe"), 2, "wild"));
    allRoutes.push_back(new Route(getCity("El Paso"), getCity("Oklahoma City"), 5, "yellow"));
    allRoutes.push_back(new Route(getCity("El Paso"), getCity("Dallas"), 4, "red"));
    allRoutes.push_back(new Route(getCity("El Paso"), getCity("Houston"), 6, "green"));
    allRoutes.push_back(new Route(getCity("Santa Fe"), getCity("Oklahoma City"), 3, "blue"));
    allRoutes.push_back(new Route(getCity("Calgary"), getCity("Winnipeg"), 6, "white"));
    allRoutes.push_back(new Route(getCity("Winnipeg"), getCity("Sault St. Marie"), 6, "wild"));
    allRoutes.push_back(new Route(getCity("Winnipeg"), getCity("Duluth"), 4, "black"));
    allRoutes.push_back(new Route(getCity("Duluth"), getCity("Sault St. Marie"), 3, "wild"));
    allRoutes.push_back(new Route(getCity("Duluth"), getCity("Omaha"), 2, "wild", "wild"));
    allRoutes.push_back(new Route(getCity("Omaha"), getCity("Kansas City"), 1, "wild", "wild"));
    allRoutes.push_back(new Route(getCity("Kansas City"), getCity("Oklahoma City"), 2, "wild", "wild"));
    allRoutes.push_back(new Route(getCity("Oklahoma City"), getCity("Dallas"), 2, "wild", "wild"));
    allRoutes.push_back(new Route(getCity("Dallas"), getCity("Houston"), 1, "wild", "wild"));
    allRoutes.push_back(new Route(getCity("Houston"), getCity("New Orleans"), 1, "wild", ""));
    allRoutes.push_back(new Route(getCity("Dallas"), getCity("Little Rock"), 2, "wild"));
    allRoutes.push_back(new Route(getCity("Oklahoma City"), getCity("Little Rock"), 2, "wild"));
    allRoutes.push_back(new Route(getCity("Kansas City"), getCity("Saint Louis"), 2, "purple", "blue"));
    allRoutes.push_back(new Route(getCity("Omaha"), getCity("Chicago"), 4, "blue"));
    allRoutes.push_back(new Route(getCity("Duluth"), getCity("Chicago"), 3, "red"));
    allRoutes.push_back(new Route(getCity("Duluth"), getCity("Toronto"), 6, "purple"));
    allRoutes.push_back(new Route(getCity("Sault St. Marie"), getCity("Toronto"), 2, "wild"));
    allRoutes.push_back(new Route(getCity("Chicago"), getCity("Toronto"), 4, "white"));
    allRoutes.push_back(new Route(getCity("Chicago"), getCity("Saint Louis"), 2, "white", "green"));
    allRoutes.push_back(new Route(getCity("Saint Louis"), getCity("Little Rock"), 2, "wild"));
    allRoutes.push_back(new Route(getCity("Little Rock"), getCity("New Orleans"), 3, "green"));
    allRoutes.push_back(new Route(getCity("Little Rock"), getCity("Nashville"), 3, "white"));
    allRoutes.push_back(new Route(getCity("Saint Louis"), getCity("Nashville"), 2, "wild"));
    allRoutes.push_back(new Route(getCity("Chicago"), getCity("Pittsburg"), 5, "green"));
    allRoutes.push_back(new Route(getCity("Nashville"), getCity("Raleigh"), 3, "black"));
    allRoutes.push_back(new Route(getCity("Miami"), getCity("Charleston"), 4, "purple"));
    allRoutes.push_back(new Route(getCity("Charleston"), getCity("Raleich"), 2, "wild"));
    allRoutes.push_back(new Route(getCity("Raleich"), getCity("Washington"), 2, "wild", "wild"));
    allRoutes.push_back(new Route(getCity("Washington"), getCity("New York"), 2, "orange", "black"));
    allRoutes.push_back(new Route(getCity("New York"), getCity("Boston"), 2, "red", "yellow"));
    allRoutes.push_back(new Route(getCity("Boston"), getCity("Montreal"), 2, "wild", "wild"));
    allRoutes.push_back(new Route(getCity("Montreal"), getCity("Sault St. Marie"), 5, "black"));
    allRoutes.push_back(new Route(getCity("Montreal"), getCity("Toronto"), 3, "blue"));
    allRoutes.push_back(new Route(getCity("Montreal"), getCity("New York"), 3, "blue"));
    allRoutes.push_back(new Route(getCity("New York"), getCity("Pitttsburgh"), 2, "white", "green"));
    allRoutes.push_back(new Route(getCity("Washington"), getCity("Pitttsburgh"), 2, "wild"));
    allRoutes.push_back(new Route(getCity("Toronto"), getCity("Pitttsburgh"), 2, "wild"));
    allRoutes.push_back(new Route(getCity("Pittsburg"), getCity("Raleich"), 2, "wild"));
    allRoutes.push_back(new Route(getCity("Raleigh"), getCity("Atlanta"), 2, "wild", "wild"));
    allRoutes.push_back(new Route(getCity("Atlanta"), getCity("Charleston"), 2, "wild"));
    allRoutes.push_back(new Route(getCity("Miami"), getCity("Atlanta"), 5, "blue"));
    allRoutes.push_back(new Route(getCity("Miami"), getCity("New Orleans"), 6, "red"));
    allRoutes.push_back(new Route(getCity("New Orleans"), getCity("Atlanta"), 4, "yellow", "orange"));
    allRoutes.push_back(new Route(getCity("Atlanta"), getCity("Nashville"), 1, "wild"));
    allRoutes.push_back(new Route(getCity("Chicago"), getCity("Pittsburgh"), 3, "orange", "black"));
    allRoutes.push_back(new Route(getCity("Nashville"), getCity("Pittsburgh"), 4, "yellow"));


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
    //To Do: Interchange Cities or do for both cities
    
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

  void resetMap(){
    //resets the map
  }

};

#endif //__US_MAP_HPP__