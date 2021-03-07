#ifndef __TRAIN_DECK_HPP__
#define __TRAIN_DECK_HPP__

#include "deck.hpp"
#include "trainCard.hpp"
#include "trainRow.hpp"
#include <vector>

using namespace std;

class TrainDeck {

    TrainDeck() {
	maxCards = 96;
	numCards = 0;
	tCards = new vector<TrainCard>(96);
	createDeck();
    }
    
    void createDeck() {

	for(int i = 0; i < 12; ++i) {
	    
	    TrainCard card(TrainCard::Color.[i]);
	    tCards->push_back(card);
	}

    }
    
    void draw() {


    }

    void shuffle() {


    }

    void addCard(TrainCard& addingCard) {
	
	tCards->push_back(addingCard);

    }

    void sort() {


    }

    void addDiscard(Deck discard) {


    }
};

#endif //__TRAIN_DECK_HPP__
