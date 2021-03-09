#ifndef __TRAINDECK_HPP__ //train deck no need _
#define __TRAINDECK_HPP__ //train deck no need _

#include "deck.hpp"
#include "trainCard.hpp"
#include "trainRow.hpp"
#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

class TrainDeck : public Deck {
	
    public:
    vector<TrainCard> trainDeck;

    TrainDeck() {};

    //To Do: Disconstructor
    ~TrainDeck() {};
    
    void createDeck() {
    //wild cards = grey
    //colors all lowercase
    //TrainCard temp("purple");

    //trainDeck.push_back(TrainCard("purple"));


	for(int i = 0; i < 12; ++i) {
        trainDeck.push_back(TrainCard("red"));   
	}

    for(int j = 0; j < 12; ++j) {
        trainDeck.push_back(TrainCard("orange"));   
	}

    for(int k = 0; k < 12; ++k) {
        trainDeck.push_back(TrainCard("yellow"));   
	}

    for(int a = 0; a < 12; ++a) {
        trainDeck.push_back(TrainCard("green"));   
	}

    for(int b = 0; b < 12; ++b) {
        trainDeck.push_back(TrainCard("blue"));   
	}

    for(int c = 0; c < 12; ++c) {
        trainDeck.push_back(TrainCard("purple"));   
	}

    for(int d = 0; d < 12; ++d) {
        trainDeck.push_back(TrainCard("black"));   
	}

    for(int e = 0; e < 12; ++e) {
        trainDeck.push_back(TrainCard("white"));   
	}

    for(int f = 0; f < 14; ++f) {
        trainDeck.push_back(TrainCard("grey"));   
	}

    }

    TrainCard drawTrainCard(){
        TrainCard temp;
        temp = trainDeck.back();
        trainDeck.pop_back();
        return temp;
    }

    
    void shuffle() {// <--outside
            //shuffle myself and not an outside
        random_shuffle(trainDeck.begin(), trainDeck.end());

    }
    

    void addCard(TrainCard& addingCard) {
	
	//tCards->push_back(addingCard);

    }

    // void sort() {


    // }

    //To Do: Ashley
	bool isThisInMyDeck(string color, int num){
		//check if this these cards are in my deck
		//return true if they are
		//return false if they are no

        string playerColor = color;
        int numCards = num;

        if (playerColor == ){

			

		return true;
		}

		else() {
		return false;
		}
	}
    

    //To Do: Ashley
    void mergeDeck(Deck &discard){ // take outside 
        //adds cards from discard deck into the deck and updates old discard deck
        //pop out all discard cards ... push them back into this deck

        

    }

};

#endif //__TRAINDECK_HPP__
