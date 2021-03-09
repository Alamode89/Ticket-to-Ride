#ifndef __TRAINDECK_HPP__ 
#define __TRAINDECK_HPP__ 

#include "deck.hpp"
#include "trainCard.hpp"
#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <random>
#include <chrono>
#include <time.h>
using namespace std;

class TrainDeck : public Deck<TrainCard> {

public:

    vector<TrainCard> trainDeck;
    //unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    //srand(time(NULL));

    TrainDeck() {}

    ~TrainDeck() {}

    void createDeck() {
    //wild cards = grey
    //colors all lowercase


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
    
    void display(vector<TrainCard> &displayTrainDeck) const {
	    for(int i = 0; i < displayTrainDeck.size(); i++) {
		    TrainCard temp = displayTrainDeck.at(i);
            cout << "Train Card " << i + 1 << ": " << temp.getColorName() << endl;
	    }
    }

    TrainCard drawCard(){
        TrainCard temp;
        temp = trainDeck.back();
        trainDeck.pop_back();
        return temp;
    }

    
    void shuffle() {// does not shuffle randomly every game, same way of shuffle
    //        shuffle myself and not an outside
        for(int i = 0; i < trainDeck.size(); i++) {
            int j = i + rand() % (trainDeck.size() - i);
            swap(trainDeck.at(i), trainDeck.at(j));
        }
    }
    

    void addCard(TrainCard &addingCard) {
        trainDeck.push_back(addingCard);
    }

    // void sort() {


    // }

    //To Do: Ashley
	// isThisInMyDeck(string color, int num){
		//check if this these cards are in my deck
		//return true if they are
		//return false if they are no

        //string playerColor = color;
        //int numCards = num;

        //if (playerColor == ){

			

	//	return true;
		//}

		//else {
		//return false;
		//}
	//}
    

    //To Do: Ashley
    void mergeDeck(Deck &discard){ // take outside 
        //adds cards from discard deck into the deck and updates old discard deck
        //pop out all discard cards ... push them back into this deck

        

    }

};

#endif //__TRAINDECK_HPP__
