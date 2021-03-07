#ifndef __TRAINDECK_HPP__ //train deck no need _
#define __TRAINDECK_HPP__ //train deck no need _

#include "deck.hpp"
#include "trainCard.hpp"
#include "trainRow.hpp"
#include <vector>

using namespace std;

class TrainDeck : Deck {

    vector<TrainCard> trainDeck;
    
    void createDeck() {


    }
    
    void draw() {


    }

    void shuffle() {


    }

    void addCard() {


    }

    void sort() {


    }

    void addDiscard(Deck &discard) {
        //adds cards from discard deck into the deck and updates old discard deck
        //pop out all discard cards ... push them back into this deck

    }
};

#endif //__TRAINDECK_HPP__
