#ifndef __US_MAP_HPP__
#define __US_MAP_HPP__

#include <vector>
#include "city.hpp"
#include "map.hpp"
#include "route.hpp"
#include "player.hpp"
//#include <SFML/Graphics.hpp>

using namespace std;

class USMap : public Map{
  public:
    string imagePath="images/us_map.jpeg";
    vector<City *> destinations;
    vector<Route *> allRoutes;
    string mapName="US Map";

  USMap(){
      addCities();
      addRoutes();
      drawMap();
  }

  ~USMap(){
      deleteRoutes();
      deleteCities();
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

  void addRoutes(){
    allRoutes.reserve(78);
    
    //Add Routes
    allRoutes.push_back(new Route(getCity("Vancouver"), getCity("Seattle"), 1, "grey", "grey", 96, 131, 121, 130));
    allRoutes.push_back(new Route(getCity("Vancouver"), getCity("Calgary"), 3, "grey", 176, 95));
    allRoutes.push_back(new Route(getCity("Seattle"), getCity("Portland"), 1, "grey", "grey", 88, 181, 110, 188));
    allRoutes.push_back(new Route(getCity("Seattle"), getCity("Calgary"), 4, "grey", 189, 150));
    allRoutes.push_back(new Route(getCity("Seattle"), getCity("Helena"), 6, "yellow", 220, 195));
    allRoutes.push_back(new Route(getCity("Portland"), getCity("Salt Lake City"), 6, "blue", 198, 251));
    allRoutes.push_back(new Route(getCity("Portland"), getCity("San Francisco"), 5, "green", "purple", 50, 321, 73, 297));
    allRoutes.push_back(new Route(getCity("San Francisco"), getCity("Salt Lake City"), 5, "orange", "white", 153, 364, 196, 381));
    allRoutes.push_back(new Route(getCity("San Francisco"), getCity("Los Angeles"), 3, "yellow", "purple", 93, 480, 113, 458));
    allRoutes.push_back(new Route(getCity("Los Angeles"), getCity("Las Vegas"), 2, "grey", 172, 466));
    allRoutes.push_back(new Route(getCity("Los Angeles"), getCity("Phoenix"), 3, "grey", 212, 500));
    allRoutes.push_back(new Route(getCity("Los Angeles"), getCity("El Paso"), 6, "black", 261, 563));
    allRoutes.push_back(new Route(getCity("Las Vegas"), getCity("Salt Lake City"), 3, "orange", 257, 410));
    allRoutes.push_back(new Route(getCity("Salt Lake City"), getCity("Denver"), 3, "yellow", "red", 327, 366, 335, 342));
    allRoutes.push_back(new Route(getCity("Salt Lake City"), getCity("Helena"), 3, "purple", 308, 277));
    allRoutes.push_back(new Route(getCity("Helena"), getCity("Calgary"), 4, "grey", 296, 151));
    allRoutes.push_back(new Route(getCity("Helena"), getCity("Winnipeg"), 4, "blue", 406, 157));
    allRoutes.push_back(new Route(getCity("Helena"), getCity("Duluth"), 6, "orange", 464, 219));
    allRoutes.push_back(new Route(getCity("Helena"), getCity("Omaha"), 5, "red", 453, 269));
    allRoutes.push_back(new Route(getCity("Helena"), getCity("Denver"), 4, "green", 376, 306));
    allRoutes.push_back(new Route(getCity("Denver"), getCity("Phoenix"), 5, "white", 313, 435));
    allRoutes.push_back(new Route(getCity("Denver"), getCity("Santa Fe"), 2, "grey", 394, 422));
    allRoutes.push_back(new Route(getCity("Denver"), getCity("Omaha"), 4, "purple", 467, 327));
    allRoutes.push_back(new Route(getCity("Denver"), getCity("Kansas City"), 4, "black", "orange", 487, 368, 488, 389));
    allRoutes.push_back(new Route(getCity("Denver"), getCity("Oklahoma City"), 4, "red", 467, 429));
    allRoutes.push_back(new Route(getCity("Santa Fe"), getCity("Phoenix"), 3, "grey", 334, 488));
    allRoutes.push_back(new Route(getCity("Phoenix"), getCity("El Paso"), 3, "grey", 327, 538));
    allRoutes.push_back(new Route(getCity("El Paso"), getCity("Santa Fe"), 2, "grey", 389, 512));
    allRoutes.push_back(new Route(getCity("El Paso"), getCity("Oklahoma City"), 5, "yellow", 488, 510));
    allRoutes.push_back(new Route(getCity("El Paso"), getCity("Dallas"), 4, "red", 486, 549));
    allRoutes.push_back(new Route(getCity("El Paso"), getCity("Houston"), 6, "green", 496, 598));
    allRoutes.push_back(new Route(getCity("Santa Fe"), getCity("Oklahoma City"), 3, "blue", 457, 461));
    allRoutes.push_back(new Route(getCity("Calgary"), getCity("Winnipeg"), 6, "white", 354, 62));
    allRoutes.push_back(new Route(getCity("Winnipeg"), getCity("Sault St. Marie"), 6, "grey", 590, 119));
    allRoutes.push_back(new Route(getCity("Winnipeg"), getCity("Duluth"), 4, "black", 528, 160));
    allRoutes.push_back(new Route(getCity("Duluth"), getCity("Sault St. Marie"), 3, "grey", 644, 177));
    allRoutes.push_back(new Route(getCity("Duluth"), getCity("Omaha"), 2, "grey", "grey", 548, 254, 571, 264));
    allRoutes.push_back(new Route(getCity("Omaha"), getCity("Kansas City"), 1, "grey", "grey", 549, 338, 573, 325));
    allRoutes.push_back(new Route(getCity("Kansas City"), getCity("Oklahoma City"), 2, "grey", "grey", 550, 399, 576, 405));
    allRoutes.push_back(new Route(getCity("Oklahoma City"), getCity("Dallas"), 2, "grey", "grey", 551, 487, 574, 486));
    allRoutes.push_back(new Route(getCity("Dallas"), getCity("Houston"), 1, "grey", "grey", 580, 559, 599, 541));
    allRoutes.push_back(new Route(getCity("Houston"), getCity("New Orleans"), 1, "grey", 656, 566));
    allRoutes.push_back(new Route(getCity("Dallas"), getCity("Little Rock"), 2, "grey", 607, 485));
    allRoutes.push_back(new Route(getCity("Oklahoma City"), getCity("Little Rock"), 2, "grey", 596, 446));
    allRoutes.push_back(new Route(getCity("Kansas City"), getCity("Saint Louis"), 2, "purple", "blue", 613, 368, 615, 343));
    allRoutes.push_back(new Route(getCity("Omaha"), getCity("Chicago"), 4, "blue", 620, 269));
    allRoutes.push_back(new Route(getCity("Duluth"), getCity("Chicago"), 3, "red", 632, 447));
    allRoutes.push_back(new Route(getCity("Duluth"), getCity("Toronto"), 6, "purple", 696, 196));
    allRoutes.push_back(new Route(getCity("Sault St. Marie"), getCity("Toronto"), 2, "grey", 756, 157));
    allRoutes.push_back(new Route(getCity("Chicago"), getCity("Toronto"), 4, "white", 750, 213));
    allRoutes.push_back(new Route(getCity("Chicago"), getCity("Saint Louis"), 2, "green", "white", 666, 311, 680, 321));
    allRoutes.push_back(new Route(getCity("Saint Louis"), getCity("Little Rock"), 2, "grey", 648, 404));
    allRoutes.push_back(new Route(getCity("Little Rock"), getCity("New Orleans"), 3, "green", 671, 505));
    allRoutes.push_back(new Route(getCity("Little Rock"), getCity("Nashville"), 3, "white", 706, 433));
    allRoutes.push_back(new Route(getCity("Saint Louis"), getCity("Nashville"), 2, "grey", 698, 386));
    allRoutes.push_back(new Route(getCity("Chicago"), getCity("Pittsburgh"), 5, "orange", "black", 759, 243, 765, 266));
    allRoutes.push_back(new Route(getCity("Nashville"), getCity("Raleigh"), 3, "black", 805, 365));
    allRoutes.push_back(new Route(getCity("Miami"), getCity("Charleston"), 4, "purple", 904, 522));
    allRoutes.push_back(new Route(getCity("Charleston"), getCity("Raleigh"), 2, "grey", 906, 407));
    allRoutes.push_back(new Route(getCity("Raleigh"), getCity("Washington"), 2, "grey", "grey", 887, 328, 904, 348));
    allRoutes.push_back(new Route(getCity("Washington"), getCity("New York"), 2, "orange", "black", 910, 261, 932, 265));
    allRoutes.push_back(new Route(getCity("New York"), getCity("Boston"), 2, "yellow", "red", 937, 175, 953, 187));
    allRoutes.push_back(new Route(getCity("Boston"), getCity("Montreal"), 2, "grey", "grey", 926, 123, 944, 105));
    allRoutes.push_back(new Route(getCity("Montreal"), getCity("Sault St. Marie"), 5, "black", 791, 93));
    allRoutes.push_back(new Route(getCity("Montreal"), getCity("Toronto"), 3, "blue", 844, 113));
    allRoutes.push_back(new Route(getCity("Montreal"), getCity("New York"), 3, "blue", 901, 152));
    allRoutes.push_back(new Route(getCity("New York"), getCity("Pittsburgh"), 2, "white", "green", 866, 223, 878, 245));
    allRoutes.push_back(new Route(getCity("Washington"), getCity("Pittsburgh"), 2, "grey", 877, 286));
    allRoutes.push_back(new Route(getCity("Toronto"), getCity("Pittsburgh"), 2, "grey", 825, 213));
    allRoutes.push_back(new Route(getCity("Pittsburgh"), getCity("Raleigh"), 2, "grey", 849, 316));
    allRoutes.push_back(new Route(getCity("Raleigh"), getCity("Atlanta"), 2, "grey", "grey", 826, 409, 834, 420));
    allRoutes.push_back(new Route(getCity("Atlanta"), getCity("Charleston"), 2, "grey", 850, 446));
    allRoutes.push_back(new Route(getCity("Miami"), getCity("Atlanta"), 5, "blue", 861, 520));
    allRoutes.push_back(new Route(getCity("Miami"), getCity("New Orleans"), 6, "red", 827, 536));
    allRoutes.push_back(new Route(getCity("New Orleans"), getCity("Atlanta"), 4, "yellow", "orange", 735, 477, 748, 500));
    allRoutes.push_back(new Route(getCity("Atlanta"), getCity("Nashville"), 1, "grey", 722, 412));
    allRoutes.push_back(new Route(getCity("Nashville"), getCity("Pittsburgh"), 4, "yellow", 781, 330));
    allRoutes.push_back(new Route(getCity("Pittsburgh"), getCity("Saint Louis"), 5, "green", 749, 312));


  }

  City* getCity(string theCity){
    City * temp;
    for(int i=0; i < destinations.size(); ++i){
        if(destinations.at(i)->destinationName == theCity){
          temp = destinations.at(i);
          return temp;
        }
    }
    return temp;
  }

  bool isOccupied(string startA, string startB, string color){
      //check if a route is occupied

      return 0;
  }

  // Route* getRoute(string startCity, string endCity, string color){
  //   To Do: Interchange Cities or do for both cities
    
  //   bool look=false;
  //   for(int i=0; i < allRoutes.size(); ++i){
  //       allRoutes.at(i)->destinationA();
  //   }

  //   cout << "No Route Found" << endl;
    
  //   return allRoutes.at(0);

  // }


//Add Back Graphics: Liberty
  // sf::Sprite claimRouteGraphic(Player *thePlayer, string myCityA, string myCityB, string myColor){
  //     cout << "Claim Route Graphic" << endl;
  //     claimRoute(thePlayer, myCityA, myCityB, myColor);
  //     sf::Sprite temp;

  //     //set texture
  //     temp.setTexture(thePlayer->myTexture);

  //     //set scale and position

  //        // sf::Vector2f myPosition( findPathX(myCityA, myCityB, myColor)/1.0, findPathY(myCityA, myCityB, myColor)/1.0);
  //     temp.setScale(sf::Vector2f(0.044f, 0.054f)); // absolute scale factory
  //     sf::Vector2f myPosition(findPathX(myCityA, myCityB, myColor)/1.0 - (temp.getTexture()->getSize().x * temp.getScale().x)/2.0, findPathY(myCityA, myCityB, myColor)/1.0 - (temp.getTexture()->getSize().y * temp.getScale().y)/2.0);
  //     temp.setPosition(myPosition);

  //     return temp;
  // }

  void claimRoute(Player *thePlayer, string myCityA, string myCityB, string color){
    bool check = false;
    int index = findRoute(myCityA, myCityB, color);
    //To Do: Check Cards (number and correct color)


    //To Do: Check Route Not Occupied
      if(check == true){
        ///throw error
        cout << "Route Occupied/Failed" << endl;

      }else{

        if( index==-1)
        {
          //throw error - no route
        }else{
          //Check Color
          if(allRoutes[index]->getColor1() != color && allRoutes[index]->getColor2() != color){
              //throw error - wrong color
          }else{
            if(allRoutes[index]->getColor1() == color && allRoutes[index]->pathOne != 0){
              //claim path 1

      // cout << thePlayer->getName();
      cout << "claim route from " << allRoutes[index]->getCity1()->getName() << " to " << allRoutes[index]->getCity2()->getName() << " for " << addScore(allRoutes[index]->requiredTrains) << " points." << endl;

      //add score to player
      //Player->setScore(addScore(allRoutes[index]->requiredTrains));

              allRoutes[index]->claimPath(thePlayer, 1);

            }else if(allRoutes[index]->getColor2() == color){
              //claim path 2

      // cout << thePlayer->nameName() << "has a total of "
      cout << "claim route from " << allRoutes[index]->getCity1()->getName() << " to " << allRoutes[index]->getCity2()->getName() << "for " << addScore(allRoutes[index]->requiredTrains) << "points" << endl;

              allRoutes[index]->claimPath(thePlayer, 2);

      //add score to player
      //Player->setScore(addScore(allRoutes[index]->requiredTrains));
            }
            
          }
        }
    }
  
  //claim the route
  }

  int addScore(int cars){
    if(cars==1){
      return 1;
    }else if(cars==2){
      return 2;
    }else if(cars==3){
      return 4;
    }else if(cars==4){
      return 7;
    }else if(cars==5){
      return 10;
    }
    else if(cars==6){
      return 15;
    }
    else if(cars==9){
      return 27;
    }

    //throw error
    return -1;
  }
  

  int findRoute(string cityA, string cityB, string color){
    cout << "Find Route" << endl;
    for(int i=0; i < allRoutes.size(); ++i){
        if((allRoutes[i]->getCity1()->getName() == cityA && allRoutes[i]->getCity2()->getName() == cityB) || (allRoutes[i]->getCity1()->getName() == cityB && allRoutes[i]->getCity2()->getName() == cityA)){
          return i;
        }
    }
    //To Do: check color

    //no city
    return -1;
  }

  int findPathX(string cityA, string cityB, string color){
  cout << "Find X: ";
  //return X position of a route
    for(int i=0; i < allRoutes.size(); ++i){
        if((allRoutes[i]->getCity1()->getName() == cityA && allRoutes[i]->getCity2()->getName() == cityB) || (allRoutes[i]->getCity1()->getName() == cityB && allRoutes[i]->getCity2()->getName() == cityA)){
          if(allRoutes[i]->color1 == color){
          cout << allRoutes[i]->xPos1 <<endl;
          return allRoutes[i]->xPos1;
        }

        if(allRoutes[i]->color2 == color){
          cout << allRoutes[i]->xPos2 <<endl;
          return allRoutes[i]->xPos2;
        }
        }
    }
        cout << "none - no city error - outside if statement" <<endl;
    //no city
    return -1;
  }

  int findPathY(string cityA, string cityB, string color){
    cout << "Find y- City A: " << cityA <<endl;
    cout << "Find y- City B: " << cityB <<endl;
    cout << "Find y- Color: " << color <<endl;
  //return y position of a route
  cout << "Find Y: ";
    for(int i=0; i < allRoutes.size(); ++i){
        if((allRoutes[i]->getCity1()->getName() == cityA && allRoutes[i]->getCity2()->getName() == cityB) || (allRoutes[i]->getCity1()->getName() == cityB && allRoutes[i]->getCity2()->getName() == cityA)){
          if(allRoutes[i]->color1 == color){
              cout << allRoutes[i]->yPos1 <<endl;
              return allRoutes[i]->yPos1;
          }
          if(allRoutes[i]->color2 == color){
              cout << allRoutes[i]->yPos1 <<endl;
              return allRoutes[i]->yPos2;
          }
        }
    }
        cout << "none - no city error - outside if statement" <<endl;
    //no city
    return -1;
  }


  void resetMap(){
    //resets the map
    deleteRoutes();
    deleteCities();
    addRoutes();
    addCities();
  }

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

  void printMap(){
    cout << "Available Routes: "<< endl;
    int count=0;
    int temp;
    for (Route* obj : allRoutes){
      if(!obj->isOccupiedOne())
          cout << obj->getCity1()->getName() << " to " << obj->getCity2()->getName() << " path " << obj->getColor1() << " | " && count++;
      
      if(count%5==0){
        cout << endl;
      }

      if(!obj->isOccupiedTwo())
          cout << obj->getCity1()->getName() << " to " << obj->getCity2()->getName()  << " path " << obj->getColor2() << " | " && count++;

      if(count%5==0 && !(obj->isOccupiedTwo())){
        cout << endl;
      }
    }
    cout << endl;

  }

  void drawMap(){

  }

};

#endif //__US_MAP_HPP__