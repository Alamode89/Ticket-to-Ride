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

/*
void doClassesRun(){
  //Testing Classes
  City* myCityA = new City("Vancouver");
  City* myCityB = new City("Seattle");
  
  delete myCityA;
  delete myCityB;
  Tickets myTicket; 
  TicketDeck ticketDeck;
  Board myBoard;
  Game theGame;
  Player bob;
}*/

int main(){
  //doClassesRun();
  //cout << "Start Program" << endl;
  //Testing Classes
  // City* myCityA = new City("Vancouver");
  // City* myCityB = new City("Seattle");
  

  //TrainCard myTrainCard; 
  // Route *myRoute = new Route(myCityA, myCityB, 1, "grey", "grey", 96, 131, 121, 130);

  
  Board myBoard;
  Game theGame;
  int winningPlayer = 0;
  cout << "Welcome to Ticket to Ride!" << endl;
  theGame.newGame();
  theGame.playGame();
  theGame.theWinner();

  //cout << "End Program" << endl;

  return 0;
}