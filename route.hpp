#ifndef __ROUTE_HPP__
#define __ROUTE_HPP__

#include <vector>
#include "city.hpp"
#include "player.hpp"

using namespace std;

class Route {
  public:
    City* destinationA;
    City* destinationB;
  
    string color1="";
    string color2=""; 

    int requiredTrains=0;
    int pathOne=0;
    int pathTwo=0;

    Player *playerPath1 = nullptr;
    Player *playerPath2 = nullptr;

  Route(City* startCity, City* endCity, int trainCards, string color){
    destinationA=startCity;
    destinationB=endCity;
    color1=color;
    pathOne=1;
  }

  Route(City* startCity, City* endCity, int trainCards, string colorA, string colorB){
    destinationA=startCity;
    destinationB=endCity;

    color1=colorA;
    color2=colorB;

    pathOne=1;
    pathTwo=2;
  }

  // void setClaim(Player aPlayer){
  //   if(path <= 0){
  //      //throw error - occupied
  //   }else{

  //     //check trains
  //     if(aPlayer.getCar() < requiredTrains){
  //       //throw error - not enough trains
  //     }

  //     aPlayer.getTrainCards().size();
  //     path-=1;
      
  //     int checkTrainCards=requireTrains;
  //     //check cards
  //     for(int i=0; i < aPlayer.getTrainCards().size(); i++){
  //       if (aPlayer.getTrainCards().at(i).name == color){
  //         --checkTrainCards;
  //       }
  //     }

  //     //check if enough cards
  //     if(checkTrainCards<=requiredTrains){
  //       paths-=1;
  //     }else{
  //       cout << "Not enought Trains"
  //       ///throw error - not enough trains
  //     }


  //   }
  // }

  bool isOccupiedOne(){
    return pathOne==0;
  }

  bool isOccupiedTwo(){
    return pathTwo==0;
  }

  bool isOccupied(){
    return ( isOccupiedOne() && isOccupiedTwo());
  }

};

#endif //__ROUTE_HPP__