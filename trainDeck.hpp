#ifndef __TRAINDECK_HPP__ //train deck no need _
#define __TRAINDECK_HPP__ //train deck no need _

#include "deck.hpp"
#include "trainCard.hpp"
#include "trainRow.hpp"
#include <vector>

using namespace std;

class TrainDeck {
	
    public:
	vector<TrainCard>ticketDeck;

    TrainDeck() {
	maxCards = 96;
	numCards = 0;
	tCards = new vector<TrainCard>(96);
	createDeck();
    }
    
    void createDeck() {
	ticketDeck.push_back(new Tickets("Denver", "El Paso", 4));
	ticketDeck.push_back(new Tickets("Kansas City", "Houston", 5));
	ticketDeck.push_back(new Tickets("New York", "Atlanta", 6));
	ticketDeck.push_back(new Tickets("Calgary", "Salt Lake City", 7));
	ticketDeck.push_back(new Tickets("Chicago", "New Orleans", 7));
	ticketDeck.push_back(new Tickets("Duluth", "Houston", 8));
	ticketDeck.push_back(new Tickets("Helena", "Los Angeles", 8));
	ticketDeck.push_back(new Tickets("Sault St. Marie", "Nashville", 8));
	ticketDeck.push_back(new Tickets("Seattle", "Los Angeles", 9));
	ticketDeck.push_back(new Tickets("Montreal", "Atlanta", 9));
	ticketDeck.push_back(new Tickets("Sault St. Marie", "Oklahoma City", 9));
	ticketDeck.push_back(new Tickets("Chicago", "Santa Fe", 9));
	ticketDeck.push_back(new Tickets("Toronto", "Miami", 10));
	ticketDeck.push_back(new Tickets("Duluth", "El Paso", 10));
	ticketDeck.push_back(new Tickets("Portland", "Phoenix", 11));
	ticketDeck.push_back(new Tickets("Winnipeg", "Little Rock", 11));
	ticketDeck.push_back(new Tickets("Denver", "Pittsburgh", 11));
	ticketDeck.push_back(new Tickets("Dallas", "New York", 11));
	ticketDeck.push_back(new Tickets("Winnipeg", "Houston", 12));
	ticketDeck.push_back(new Tickets("Boston", "Miami", 12));
	ticketDeck.push_back(new Tickets("Vancouver", "Santa Fe", 13));
	ticketDeck.push_back(new Tickets("Montreal", "New Orleans", 13));
	ticketDeck.push_back(new Tickets("Calgary", "Phoenix", 13));
	ticketDeck.push_back(new Tickets("Los Angeles", "Chicago", 16));
	ticketDeck.push_back(new Tickets("San Francisco", "Atlanta", 17));
	ticketDeck.push_back(new Tickets("Portland", "Nashville", 17));
	ticketDeck.push_back(new Tickets("Los Angeles", "Miami", 20));
	ticketDeck.push_back(new Tickets("Vancouver", "Montreal", 20));
	ticketDeck.push_back(new Tickets("Los Angeles", "New York", 21));
	ticketDeck.push_back(new Tickets("Seattle", "New York", 22));
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

    void addDiscard(Deck &discard) {
        //adds cards from discard deck into the deck and updates old discard deck
        //pop out all discard cards ... push them back into this deck

    }
};

#endif //__TRAINDECK_HPP__
