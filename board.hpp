#ifndef __BOARD_HPP__
#define __BOARD_HPP__

#include "deck.hpp"
#include "trainDeck.hpp"
#include "ticketDeck.hpp"
#include "map.hpp"
//#include "us_map.hpp"
//#include "nordic_map.hpp"

using namespace std;

class Board {
  public: 
    TrainDeck theTrainDeck;
    TrainDeck discardDeck;
    TicketDeck theTicketDeck;
    TicketDeck discardTicket;

    Map* myMap;


  void createBoard(int chooseMap, vector<Player> &playerList){
    //To Do US Versus Nordic Countries
    if(chooseMap == 1)
      modeUS(playerList);
    // if(chooseMap == 2)
    //   modeNordic();




  }

  void modeUS(vector<Player> &playerList){
    //create US Map
    myMap = new USMap();

    //TrainDeck deckA;
    theTrainDeck.createDeck();
    theTrainDeck.shuffle();
    theTicketDeck.createDeck();
    theTicketDeck.shuffle();

    for(int i = 0; i < playerList.size() - 1; i++) {
      playerList.at(i).populateHand(theTrainDeck, theTicketDeck);
    }
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