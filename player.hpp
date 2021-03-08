#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <iostream>
#include <string>
#include "trainDeck.hpp"
#include "ticketDeck.hpp"

//#include <SFML/Graphics.hpp>

class Player { //does not inherit from the game - please change - Liberty
    private:
				TicketDeck myTickets;
				TrainCard myHand;
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


	void takeTurn() 
	{
		// bool isPlayerTurn = true;
		// string userChoice;
		
		// while(isPlayerTurn == true) {
		// 	std::cout << "What would you like to do? (Input 1-4)" << std::endl;
		// 	std::cout << "1. Draw a card" << std::endl;
		// 	std::cout << "2. Draw a ticket" << std::endl;
    //     		std::cout << "3. Place a car" << std::endl;
		// 	std::cout << "4. View the rules" << std::endl;
		// //1. make one of three turns
		// 	std::cin >> userChoice;
		// 	std::cout << std::endl;
		
		// 	if(userChoice == "1") {
		// 		//myHand.draw();
		// 		isPlayerTurn = false;
		// 	}
	
		// 	if(userChoice == "2") {
		// 		//myTickets.draw()
		// 		isPlayerTurn = false;  
		// 	}	

		// 	if(userChoice == "3") {
		// 		isPlayerTurn = false;  
		// 	}

		// 	if(userChoice == "4") {
		// 		std::cout << "You can view the rules using this link: https://www.ultraboardgames.com/ticket-to-ride/game-rules.php" << std::endl;	
		// 	}
		// }
			
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
