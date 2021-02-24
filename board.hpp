#ifndef __BOARD_HPP__
#define __BOARD_HPP__

#include "deck.hpp"
#include "train_deck.hpp"
#include "ticket_deck.hpp"
#include "map.hpp"


using namespace std;

class Board {
  public: 
    TrainDeck theTrainDeck;
    TrainDeck discardDeck;
    TicketDeck theTicketDeck;
    TicketDeck discardTicket;

    Map myMap;

  void virtual displayBoard(){
        //
      }

  void createMap(int chooseMap){
    //pick map

    //US Map for Now


    
    
    drawMap();


  }

  void drawMap(){
    //cout << "drawMap()" << endl;
    //draw gui
  }

  void clearBoard(){
        //reset board

  }
};

#endif //__BOARD_HPP__