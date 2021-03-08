#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <iostream>
#include <string>
#include "trainDeck.hpp"
#include "ticketDeck.hpp"
#include "board.hpp"
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
	    myCars = 0;
	    myScore = 0;
        name = "";
	    myColor = "";
	     //need to implement ticketdeck and traincard
	} //constructor still needs implementation

	Player(std::string myName, std::string color) 
	{
	    //  myCars = 0;
	    myScore = 0;
        name = myName;
	    myColor = color;
	     //need to implement ticketdeck and traincard
	} //constructor still needs implementation

	//possible contructor for GUI - per Liberty
	Player(std::string myName, std::string color, sf::Texture &texture) 
	{
	    //  myCars = 0;
	    //  myScore = 0;
        name = myName;
	    myColor = color;
		myTexture = texture;
	     //need to implement ticketdeck and traincard
	} //constructor still needs implementation

	void populateHand(TrainDeck theTrainDeck, TicketDeck theTicketDeck) {
		for(int i = 0; i < 4; i++) {
			TrainCard temp = theTrainDeck.trainDeck.pop_back();
			myHand.trainDeck.push_back(temp);
		}

		//draw 3, player can choose which ones to keep but must be at least 2
		//the draw 3 tickets, I feel like there needs to be more there like a way 
		//for players to pick which to pick. like print out the options, the use 
		//inputs which to pick then you can push it into my tickets
		for(int j = 0; j < 3; j++) {
			Tickets temp = theTicketDeck.ticketDeck.pop_back();
			myTickets.ticketDeck.push_back(temp);
		}
	}
	void takeTurn(Board &playBoard) 
	{
		bool isPlayerTurn = true;
		string userChoice;
		string cityA;
		string cityB;
		while(isPlayerTurn == true) {
			std::cout << "What would you like to do? (Input 1-4)" << std::endl;
		 	std::cout << "1. Draw a card" << std::endl;
		 	std::cout << "2. Draw a ticket" << std::endl;
         	std::cout << "3. Place a route" << std::endl;
			std::cout << "4. View decks" << std::endl;
		 	std::cout << "5. View the rules" << std::endl;
		 //1. make one of three turns
		 	std::cin >> userChoice;
		 	std::cout << std::endl;
		
		 	if(userChoice == "1") {
		 		myHand.drawTrainCard();
				
		 		isPlayerTurn = false;
		 	}
	
		 	if(userChoice == "2") {
		 		myTickets.drawTicketCard();
		 		isPlayerTurn = false;  
		 	}	

		 	if(userChoice == "3") {
		//claim route (pass in player, from city to city, and the color)
				std::cout << "Choose a city." << std::endl;
				cin >> cityA;
				std::cout << std::endl;
				std::cout << "Choose the destination" << std::endl;
				cin >> cityB;
				claimRoute(this, cityA, cityB, myColor); //not done
		 		isPlayerTurn = false;  
		 	}

			
			if(userChoice == "4") {
				myHand.display(myHand.trainDeck);
				myTickets.display(myTickets.ticketDeck);
			}

		 	if(userChoice == "5") {
		 		std::cout << "You can view the rules using this link: https://www.ultraboardgames.com/ticket-to-ride/game-rules.php" << std::endl;	
		 	}
		 }
			
	}

	void setScore(int addPoint) {
		this->myScore += addPoint;
	}

	int getCars() const
	{
	//gets the amount of cars
	return myCars;
	}

	int getScore() const {
	    //gets the score of the game
	    return myScore;
	}

	string getName() const { return name; }
};
#endif //__PLAYER_HPP__
