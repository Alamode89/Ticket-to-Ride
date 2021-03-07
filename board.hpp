#ifndef __BOARD_HPP__
#define __BOARD_HPP__

#include "deck.hpp"
#include "trainDeck.hpp"
#include "ticketDeck.hpp"
#include "map.hpp"
#include "us_map.hpp"
#include "nordic_map.hpp"

using namespace std;

class Board {
  public: 
    TrainDeck theTrainDeck;
    TrainDeck discardDeck;
    TicketDeck theTicketDeck;
    TicketDeck discardTicket;

    Map* myMap;

  void virtual displayBoard(){
    // hmm maybe not
  }

  void createBoard(int chooseMap){

    //US Map for Now - stub
    modeUS();


    //To Do US Versus Nordic Countries


  }

  void modeUS(){
    //create US Map
    myMap = new USMap();


    //create US Train Deck



    //create US Ticket Deck
  }



  void modeNordic(){
    //create Nordic Map
      //myMap = new NordicMap();


    //create Nordic Train Deck



    //create Nordic Ticket Deck
  }


  void clearBoard(){
    //reset board
    // myMap.resetMap();

    //theTrainDeck.resetDeck()
    //theTicketDeck.resetDeck();

    //discardDeck.resetDeck();
    //discardTicket.resetDeck();

  }
};

#endif //__BOARD_HPP__