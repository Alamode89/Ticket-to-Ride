#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <iostream>

#include "game.hpp"

class Player : Game {
    private:
	TicketDeck myTickets;
	TrainCard myHand;
	int myCars;
	int myScore;
	string myColor;
	string name;	
    public:
	Player() 
	{
	     myCars = 0;
	     myScore = 0;
             name = "";
	     myColor = "";
	     //need to implement ticketdeck and traincard
	} //constructor still needs implementation


	void takeTurn() 
	{
		bool isPlayerTurn = true;
		string userChoice;
		
		while(isPlayerTurn == true) {
			std::cout << "What would you like to do? (Input 1-4)" << std::endl;
			std::cout << "1. Draw a card" << std::endl;
			std::cout << "2. Draw a ticket" << std::endl;
        		std::cout << "3. Place a car" << std::endl;
			std::cout << "4. View the rules" << std::endl;
		//1. make one of three turns
			std::cin >> userChoice;
			std::cout << std::endl;
		
			if(userChoice == '1') {
				myHand.draw();
				isPlayerTurn = false;
			}
	
			if(userChoice == '2') {
				myTickets.draw()
				isPlayerTurn = false;  
			}	

			if(userChoice == '3') {
				isPlayerTurn = false;  
			}

			if(userChoice == '4') {
				std::cout << "You can view the rules using this link: https://www.ultraboardgames.com/ticket-to-ride/game-rules.php" << std::endl;	
			}
		}
			
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
};
#endif //__PLAYER_HPP__
