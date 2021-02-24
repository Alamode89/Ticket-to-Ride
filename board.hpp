#ifndef __BOARD_HPP__
#define __BOARD_HPP__

#include "deck.hpp"
#include "trainDeck.hpp"
#include "ticketDeck.hpp"
#include "map.hpp"
#include "us_map.hpp"


using namespace std;

class Board {
  public: 
    TrainDeck theTrainDeck;
    TrainDeck discardDeck;
    TicketDeck theTicketDeck;
    TicketDeck discardTicket;

    Map* myMap;

  void virtual displayBoard(){
        //
      }

  void createMap(int chooseMap){
    //pick map

    //US Map for Now
    myMap = new USMap();


  }


  void clearBoard(){
      //reset board
     // myMap.resetMap();

  }
};

#endif //__BOARD_HPP__