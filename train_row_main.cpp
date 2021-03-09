#include <iostream>
//#include <SFML/Graphics.hpp>

#include "player.hpp" //- tried to make it slightly stable
#include "tickets.hpp" 
#include "trainCard.hpp" 
#include "trainDeck.hpp" 
#include "ticketDeck.hpp" 
#include "trainRow.hpp" 
#include "us_map.hpp"
#include "map.hpp"
#include "route.hpp" 
#include "city.hpp" 
#include "board.hpp"


#include "game.hpp"

using namespace std;

int main(){

  //How the Train Row Works

  //make deck - still needs a shuffle function
  TrainDeck boardDeck;
  TrainDeck myHand;
  TrainCard someCard;

  TrainRow aTestRow(boardDeck);
  
  //some card before copy constructor - has not name
  cout << "Some Card Name: " << someCard.getColorName() << endl;
 
  //display Train Row
  aTestRow.showTrainRow();

  //user picks a card (let's say 3) from the Train Row
  someCard=aTestRow.drawCard(boardDeck, 3);

  //some card after drawing from the deck
  cout << "Some Card Name: " << someCard.getColorName() << endl;


  //display Train Row
  aTestRow.showTrainRow();

 
  City* myCityA = new City("Vancouver");
  City* myCityB = new City("Seattle");
  
  Tickets myTicket; //- ok
  TrainCard myCard; //- ok
  Route *myRoute = new Route(myCityA, myCityB, 1, "grey", "grey", 96, 131, 121, 130);
  
  Board myBoard;
  Game theGame;
  theGame.newGame();
  Player bob;



  return 0;
}