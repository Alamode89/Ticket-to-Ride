#ifndef __TRAINDECK_HPP__ //train deck no need _
#define __TRAINDECK_HPP__ //train deck no need _

#include "deck.hpp"
#include "trainCard.hpp"
#include <vector>

using namespace std;

class TrainDeck {

public:
    vector<TrainCard> trainDeck;
    
    TrainDeck() {
        createDeck();
    }

    ~TrainDeck() {}

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

    for(int f = 0; f < 12; ++f) {
        trainDeck.push_back(TrainCard("grey"));   
	}

    }
    
    void draw() {


    }

    TrainCard drawTrainCard(){
        TrainCard temp;
        temp = trainDeck.back();
        trainDeck.pop_back();
        return temp;
    }

    void shuffle() {


    }

    void addCard(TrainCard& addingCard) {
	
	//tCards->push_back(addingCard);
    trainDeck.push_back(addingCard);

    }

    void sort() {


    }

    void addDiscard(Deck &discard) {
        //adds cards from discard deck into the deck and updates old discard deck
        //pop out all discard cards ... push them back into this deck

    }
};

#endif //__TRAINDECK_HPP__
