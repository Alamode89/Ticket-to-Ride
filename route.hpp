#ifndef __ROUTE_HPP__
#define __ROUTE_HPP__

class City;
class Player;
#include <vector>


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

    int xPos1=0;
    int yPos1=0;

    int xPos2=0;
    int yPos2=0;

    Player *playerPath1 = nullptr;
    Player *playerPath2 = nullptr;

//Coordinate Constructors
  Route(City* startCity, City* endCity, int trainCards, string color, int xCoord, int yCoord){
    destinationA=startCity;
    destinationB=endCity;
    
    color1=color;

    pathOne=1;

    xPos1=xCoord;
    yPos1=yCoord;

    requiredTrains=trainCards;
  }

  Route(City* startCity, City* endCity, int trainCards, string colorA, string colorB, int xCoord1, int yCoord1, int xCoord2, int yCoord2){
    destinationA=startCity;
    destinationB=endCity;

    color1=colorA;
    color2=colorB;

    pathOne=1;
    pathTwo=1;

    xPos1=xCoord1;
    yPos1=yCoord1;

    xPos2=xCoord2;
    yPos2=yCoord2;

    requiredTrains=trainCards;
  }

//

  Route(City* startCity, City* endCity, int trainCards, string color){
    destinationA=startCity;
    destinationB=endCity;
    
    color1=color;

    pathOne=1;

    requiredTrains=trainCards;
  }

  Route(City* startCity, City* endCity, int trainCards, string colorA, string colorB){
    destinationA=startCity;
    destinationB=endCity;

    color1=colorA;
    color2=colorB;

    pathOne=1;
    pathTwo=1;

    requiredTrains=trainCards;
  }


//To Do: Delete?
  void setClaim(Player* aPlayer){

   }
  bool checkRoute(string A, string B){
    bool isThisMyRoute=0;
      

    return isThisMyRoute;
  }

  bool isOccupiedOne(){
    if(pathOne==0)
      return true;

    return false;
  }

  bool isOccupiedTwo(){
    if(pathTwo==0)
      return true;

    return false;
  }

  bool isOccupied(){
    if( isOccupiedOne() && isOccupiedTwo())
      return true;
    
    return false;
  }

  City* getCity1(){
    return destinationA;
  }

  City* getCity2(){
    return destinationB;
  }

  string getColor1(){
    return color1;
  }

  string getColor2(){
    return color2;
  }

  void claimPath(Player *thePlayer, int pathNumber){
    if(pathNumber==1){
      playerPath1=thePlayer;
      pathOne=0;
    }else if (pathNumber==1){
      playerPath2=thePlayer;
      pathTwo=0;
    }

  }

};

#endif //__ROUTE_HPP__