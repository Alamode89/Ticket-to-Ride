#ifndef __NORDIC_MAP_HPP__
#define __NORDIC_MAP_HPP__

class Player;
#include <vector>
#include "city.hpp"
#include "map.hpp"
#include "route.hpp"
//#include <SFML/Graphics.hpp>

using namespace std;

class NordicMap : public Map{
  public:
    // string imagePath="images/nordic_map.jpeg";
    // string mapName="Nordic Map";

  NordicMap(){
    addCities();
    addRoutes();

  }

  ~NordicMap(){

  }

  void addCities(){
    //Add Cities (it's a lot)
    destinations.push_back(new City("Alborg"));
    destinations.push_back(new City("Andalsnes"));
    destinations.push_back(new City("Arhus"));
    destinations.push_back(new City("Bergen"));
    destinations.push_back(new City("Boden"));
    destinations.push_back(new City("Bregen"));
    destinations.push_back(new City("Coteborg"));
    destinations.push_back(new City("Helsinki"));
    destinations.push_back(new City("Honningsvag"));
    destinations.push_back(new City("Imatra"));
    destinations.push_back(new City("Kajaani"));
    destinations.push_back(new City("Karlskrona"));
    destinations.push_back(new City("Kirkenes"));
    destinations.push_back(new City("Kiruna"));
    destinations.push_back(new City("Kobenhavn"));
    destinations.push_back(new City("Kristiandstand"));
    destinations.push_back(new City("Kristiansand"));
    destinations.push_back(new City("Kuopio"));
    destinations.push_back(new City("Lahti"));
    destinations.push_back(new City("Lieksa"));
    destinations.push_back(new City("Lillehammer"));
    destinations.push_back(new City("Moirana"));
    destinations.push_back(new City("Murmansk"));
    destinations.push_back(new City("Narvik"));
    destinations.push_back(new City("Norrkoping"));
    destinations.push_back(new City("Orebro"));
    destinations.push_back(new City("Oslo"));
    destinations.push_back(new City("Ostersund"));
    destinations.push_back(new City("Oulu"));
    destinations.push_back(new City("Rovaniemi"));
    destinations.push_back(new City("Stavanger"));
    destinations.push_back(new City("Stockholm"));
    destinations.push_back(new City("Sundsvall"));
    destinations.push_back(new City("Tallinn"));
    destinations.push_back(new City("Tampere"));
    destinations.push_back(new City("Tornio"));
    destinations.push_back(new City("Tromso"));
    destinations.push_back(new City("Trondheim"));
    destinations.push_back(new City("Turku"));
    destinations.push_back(new City("Umea"));
    destinations.push_back(new City("Vaasa"));

  }

  vector<Route *> getAllRoutes(){
    return allRoutes;
  }

  void addRoutes(){
    allRoutes.reserve(78);
    
    //Add Routes
    allRoutes.push_back(new Route(getCity("Murmansk"), getCity("Lieksa"), 9, "grey"));
    allRoutes.push_back(new Route(getCity("Lieksa"), getCity("Kajaani"), 1, "blue"));
    allRoutes.push_back(new Route(getCity("Lieksa"), getCity("Kuopio"), 1, "black"));
    allRoutes.push_back(new Route(getCity("Kajaani"), getCity("Oulu"), 2, "yellow"));
    allRoutes.push_back(new Route(getCity("Kuopio"), getCity("Imatra"), 2, "purple"));
    allRoutes.push_back(new Route(getCity("Kuopio"), getCity("Lahti"), 3, "white"));
    allRoutes.push_back(new Route(getCity("Kuopio"), getCity("Oulu"), 4, "grey"));
    allRoutes.push_back(new Route(getCity("Kuopio"), getCity("Vaasa"), 4, "grey"));
    allRoutes.push_back(new Route(getCity("Imatra"), getCity("Lahti"), 2, "yellow"));
    allRoutes.push_back(new Route(getCity("Imatra"), getCity("Helsinki"), 3, "red"));
    allRoutes.push_back(new Route(getCity("Lahti"), getCity("Helsinki"), 1, "black"));
    allRoutes.push_back(new Route(getCity("Lahti"), getCity("Tampere"), 1, "blue"));
    allRoutes.push_back(new Route(getCity("Helsinki"), getCity("Tallinn"), 2, "purple"));
    allRoutes.push_back(new Route(getCity("Helsinki"), getCity("Stockholm"), 2, "yellow", "grey"));
    allRoutes.push_back(new Route(getCity("Helsinki"), getCity("Turku"), 1, "white"));
    allRoutes.push_back(new Route(getCity("Turku"), getCity("Tampere"), 1, "red"));
    allRoutes.push_back(new Route(getCity("Tampere"), getCity("Vaasa"), 2, "purple"));
    allRoutes.push_back(new Route(getCity("Turku"), getCity("Stockholm"), 3, "blue"));
    allRoutes.push_back(new Route(getCity("Stockholm"), getCity("Tallinn"), 4, "green"));
    allRoutes.push_back(new Route(getCity("Stockholm"), getCity("Norrkoping"), 1, "red", "orange"));
    allRoutes.push_back(new Route(getCity("Stockholm"), getCity("Orebro"), 2, "purple", "black"));
    allRoutes.push_back(new Route(getCity("Stockholm"), getCity("Sundsvall"), 4, "grey", "grey"));
    allRoutes.push_back(new Route(getCity("Norrkoping"), getCity("Karlskrona"), 3, "yellow", "white"));
    allRoutes.push_back(new Route(getCity("Kobenhavn"), getCity("Karlskrona"), 2, "green", "blue"));
    allRoutes.push_back(new Route(getCity("Norrkoping"), getCity("Orebro"), 2, "grey"));
    allRoutes.push_back(new Route(getCity("Norrkoping"), getCity("Coteborg"), 3, "grey"));
    allRoutes.push_back(new Route(getCity("Coteborg"), getCity("Orebro"), 2, "blue"));
    allRoutes.push_back(new Route(getCity("Coteborg"), getCity("Kobenhavn"), 2, "black"));
    allRoutes.push_back(new Route(getCity("Orebro"), getCity("Sundsvall"), 4, "orange"));
    allRoutes.push_back(new Route(getCity("Sundsvall"), getCity("Umea"), 3, "purple", "yellow"));
    allRoutes.push_back(new Route(getCity("Sundsvall"), getCity("Vaasa"), 3, "blue"));
    allRoutes.push_back(new Route(getCity("Vaasa"), getCity("Oulu"), 3, "black"));
    allRoutes.push_back(new Route(getCity("Oulu"), getCity("Tornio"), 1, "white"));
    allRoutes.push_back(new Route(getCity("Tornio"), getCity("Boden"), 1, "green"));
    allRoutes.push_back(new Route(getCity("Tornio"), getCity("Rovaniemi"), 1, "red"));
    allRoutes.push_back(new Route(getCity("Oulu"), getCity("Rovaniemi"), 2, "orange"));
    allRoutes.push_back(new Route(getCity("Rovaniemi"), getCity("Kirkenes"), 5, "blue"));
    allRoutes.push_back(new Route(getCity("Kirkenes"), getCity("Murmansk"), 3, "white"));
    allRoutes.push_back(new Route(getCity("Kirkenes"), getCity("Honningsvag"), 4, "purple"));
    allRoutes.push_back(new Route(getCity("Tromso"), getCity("Narvik"), 3, "yellow"));
    allRoutes.push_back(new Route(getCity("Vaasa"), getCity("Umea"), 1, "grey"));
    allRoutes.push_back(new Route(getCity("Sundsvall"), getCity("Umea"), 3, "purple", "yellow"));
    allRoutes.push_back(new Route(getCity("Umea"), getCity("Boden"), 3, "white", "red"));
    allRoutes.push_back(new Route(getCity("Boden"), getCity("Kiruna"), 3, "orange", "black"));
    allRoutes.push_back(new Route(getCity("Kiruna"), getCity("Narvik"), 1, "purple", "white"));
    allRoutes.push_back(new Route(getCity("Narvik"), getCity("Moirana"), 4, "orange"));
    allRoutes.push_back(new Route(getCity("Moirana"), getCity("Trondheim"), 6, "red"));
    allRoutes.push_back(new Route(getCity("Moirana"), getCity("Trondheim"), 5, "green"));
    allRoutes.push_back(new Route(getCity("Trondheim"), getCity("Lillehammer"), 3, "orange"));
    allRoutes.push_back(new Route(getCity("Trondheim"), getCity("Ostersund"), 2, "black"));
    allRoutes.push_back(new Route(getCity("Ostersund"), getCity("Sundsvall"), 2, "green"));
    allRoutes.push_back(new Route(getCity("Lillehammer"), getCity("Oslo"), 2, "purple"));
    allRoutes.push_back(new Route(getCity("Oslo"), getCity("Coteborg"), 2, "orange"));
    allRoutes.push_back(new Route(getCity("Oslo"), getCity("Orebro"), 2, "yellow", "green"));
    allRoutes.push_back(new Route(getCity("Oslo"), getCity("Alborg"), 3, "white"));
    allRoutes.push_back(new Route(getCity("Alborg"), getCity("Kristiansand"), 2, "red"));
    allRoutes.push_back(new Route(getCity("Alborg"), getCity("Coteborg"), 2, "grey"));
    allRoutes.push_back(new Route(getCity("Alborg"), getCity("Arhus"), 1, "purple"));
    allRoutes.push_back(new Route(getCity("Arhus"), getCity("Kobenhavn"), 1, "grey"));
    allRoutes.push_back(new Route(getCity("Kristiandstand"), getCity("Stavanger"), 3, "orange"));
    allRoutes.push_back(new Route(getCity("Kristiandstand"), getCity("Oslo"), 2, "black"));
    allRoutes.push_back(new Route(getCity("Kristiandstand"), getCity("Stavanger"), 2, "green"));
    allRoutes.push_back(new Route(getCity("Stavanger"), getCity("Bergen"), 2, "purple"));
    allRoutes.push_back(new Route(getCity("Bergen"), getCity("Andalsnes"), 5, "black"));
    allRoutes.push_back(new Route(getCity("Andalsnes"), getCity("Lillehammer"), 2, "yellow"));
    allRoutes.push_back(new Route(getCity("Bregen"), getCity("Oslo"), 4, "blue", "red"));
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
      int index=findRoute(startA, startB,color);
      if (index >= 0){
        if(allRoutes[index]->color1==color){
          return allRoutes[index]->isOccupiedOne();
        }else if (allRoutes[index]->color1==color){
          return allRoutes[index]->isOccupiedTwo();
        }
      }
      return true;
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

 int claimRoute(Player *thePlayer, string myCityA, string myCityB, string color){
    bool check = false;
    int index = findRoute(myCityA, myCityB, color);

      if(check == true){
        ///throw error
        cout << "Route Occupied/Failed" << endl;

      }else{

        if( index==-1)
        {
          return -1;
        }else{
          //Check Color
          if(allRoutes[index]->getColor1() != color && allRoutes[index]->getColor2() != color){
              //throw error - wrong color
          }else{
            if(allRoutes[index]->getColor1() == color && allRoutes[index]->pathOne != 0){
              //Claim path 1


      cout << "Claim route from " << allRoutes[index]->getCity1()->getName() << " to " << allRoutes[index]->getCity2()->getName() << " for " << addScore(allRoutes[index]->requiredTrains) << " points." << endl;



              allRoutes[index]->claimPath(thePlayer, 1);

            }else if(allRoutes[index]->getColor2() == color){
              //Claim path 2

      // cout << thePlayer->nameName() << "has a total of "
      cout << "Claim route from " << allRoutes[index]->getCity1()->getName() << " to " << allRoutes[index]->getCity2()->getName() << "for " << addScore(allRoutes[index]->requiredTrains) << "points" << endl;

              allRoutes[index]->claimPath(thePlayer, 2);


            }
            
          }
        }
        
    }
  
  //claimed the route return 
  addScore(allRoutes[index]->requiredTrains);
 }

  int addScore(int cars){
    cout << "Cars in addScore()"<< cars << endl;
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

};

#endif //__NORDIC_MAP_HPP__