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

    Map* myMap = nullptr;

    ~Board(){
      if (myMap != nullptr)
        delete myMap;
    }



  void createBoard(int chooseMap){
    //To Do US Versus Nordic Countries
    if(chooseMap == 1)
      modeUS();
    else if(chooseMap == 2)
       modeNordic();
    else { cout << "That's not a prompt!" << endl;}

  }

  void modeUS(){
    //create US Map
    myMap = new USMap();

    //TrainDeck
    theTrainDeck.createDeck();
    theTrainDeck.shuffle();

    //create US Ticket Deck
    theTicketDeck.createDeck();
    theTicketDeck.shuffle();

 
  }



  void modeNordic(){
    //create Nordic Map
    myMap = new NordicMap();

    //create Nordic Train Deck
    theTrainDeck.createDeck();
    theTrainDeck.shuffle();
    
    //create Nordic Ticket Deck
    theTicketDeck.createDeckNordicCards();
    theTicketDeck.shuffle();

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