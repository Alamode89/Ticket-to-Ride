#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <iostream>

#include "game.hpp"

class Player : Game {
    private:
	int myCars;
	int myScore;
	string myColor;
	string name;	
    public:
	void takeTurn() 
	{
	//let's player take turn
	}
	int getCars() 
	{
	//gets the amount of cars
	}
	int getScore() {
	    //gets the score of the game
	}
};
#endif //__PLAYER_HPP__
