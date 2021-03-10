#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <iostream>
#include <string>
#include "trainDeck.hpp"
#include "ticketDeck.hpp"
#include "board.hpp"
#include "route.hpp"
#include <vector>

//#include <SFML/Graphics.hpp>

class Player { //does not inherit from the game - please change - Liberty
    private:
				TicketDeck myTickets;
				TrainDeck myHand;
				int myCars;
				int myScore;
				std::string myColor;
				std::string name;
		

    public:
			//sf::Texture myTexture; //please add this for now - Liberty
	Player() 
	{
	    //  myCars = 0;
	    //  myScore = 0;
      //  name = "";
	    //  myColor = "";
	     //need to implement ticketdeck and traincard
	} //constructor still needs implementation
	
	Player(std::string myName, std::string color) 
	{
	    myCars = 0;
	    myScore = 0;
        name = myName;
	    myColor = color;
	     //need to implement ticketdeck and traincard
	} //constructor still needs implementation

	//possible contructor for GUI - per Liberty
	// Player(std::string myName, std::string color, sf::Texture &texture) 
	// {
	//     //  myCars = 0;
	//     //  myScore = 0;
  //       name = myName;
	//       myColor = color;
	// 			myTexture = texture;
	//      //need to implement ticketdeck and traincard
	// } //constructor still needs implementation

	void populateHand(TrainDeck &theTrainDeck, TicketDeck &theTicketDeck) {
		for(int i = 0; i < 4; i++) {
			TrainCard temp = theTrainDeck.trainDeck.back();// you forgot this line
			theTrainDeck.trainDeck.pop_back();
			myHand.trainDeck.push_back(temp);
			
		}

		//draw 3, player can choose which ones to keep but must be at least 2
		//the draw 3 tickets, I feel like there needs to be more there like a way 
		//for players to pick which to pick. like print out the options, the use 
		//inputs which to pick then you can push it into my tickets
		for(int j = 0; j < 3; j++) {
			Tickets temp = theTicketDeck.ticketDeck.back();// you forgot this line
			theTicketDeck.ticketDeck.pop_back();
			myTickets.ticketDeck.push_back(temp);
		}
	}

	void takeTurn(Board &aBoard) 
	{
		bool isPlayerTurn = true;
		string userChoice;
		
		while(isPlayerTurn == true) {
			std::cout << "What would you like to do? (Input 1-4)" << std::endl;
			std::cout << "1. Draw a card" << std::endl;
			std::cout << "2. Draw a ticket" << std::endl;
        	std::cout << "3. Claim route" << std::endl;
			std::cout << "4. View the rules" << std::endl;
		//1. make one of three turns
			std::cin >> userChoice;
			std::cout << std::endl;
		
			if(userChoice == "1") {
				//train row -
				std::cout << "Your hand right now: " << std::endl;
				myHand.display(myHand.trainDeck);
				TrainCard newCard = aBoard.theTrainDeck.drawCard();
				myHand.trainDeck.push_back(newCard);
				std::cout << std::endl;
				std::cout << "Your new hand of Train Cards: " << std::endl;
				myHand.display(myHand.trainDeck);
				std::cout << std::endl;
				isPlayerTurn = false;
				//train deck
			}
	
			if(userChoice == "2") {
				//myTickets.draw()
				std::cout << "Your Tickets right now: " << std::endl;
				myTickets.display(myTickets.ticketDeck);
				Tickets newTicket = aBoard.theTicketDeck.drawCard();
				myTickets.ticketDeck.push_back(newTicket);
				std::cout << std::endl;
				std::cout << "Your new hand of Tickets: " << std::endl;
				myTickets.display(myTickets.ticketDeck);
				std::cout << std::endl;
				isPlayerTurn = false;  
			}	

			if(userChoice == "3") {
				isPlayerTurn = false;  
				string cityOne;
				string cityTwo;
				string inputColor;
				aBoard.myMap->printMap();
				cout << "Claim a route! Enter the first city, then the second, then the color!" << endl;
				cin >> cityOne;
				cin >> cityTwo;
				cin >> inputColor;
				aBoard.myMap->claimRoute(this, cityOne, cityTwo, inputColor);
				//get cards

				int numCardsToRemove=aBoard.myMap->allRoutes[aBoard.myMap->findRoute(cityOne, cityTwo, inputColor)]->requiredTrains;
				cout << "Trains Required/Remove this Number cards from deck: " << numCardsToRemove << endl;
				myHand.display(myHand.trainDeck);
				for(int i = 0; i < myHand.trainDeck.size(); i++) {
					if(myHand.trainDeck.at(i).getColorName() == inputColor) {
						myHand.trainDeck.erase(myHand.trainDeck.begin() + i);
						--numCardsToRemove;
					}
					if(numCardsToRemove == 0) {
						break;
					}
				}
				cout << "Your new hand of Train Cards" << endl;
				myHand.display(myHand.trainDeck);
			}

			if(userChoice == "4") {
				std::cout << "You can view the rules using this link: https://www.ultraboardgames.com/ticket-to-ride/game-rules.php" << std::endl;	
			}
		}
			
	}

	int getCars() const
	{
	//gets the amount of cars
	return myCars;
	}

	int addScore(int points){
		return myScore + points;
	}

	int getScore() const {
	    //gets the score of the game
	    return myScore;
	}

	string getName() const { return name; }
};
#endif //__PLAYER_HPP__
