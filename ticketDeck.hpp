#ifndef __TICKETDECK_HPP__ //no _ inbetween Ticket and Deck - Liberty
#define __TICKETDECK_HPP__

#include "deck.hpp"
#include "tickets.hpp"
#include <vector>

using namespace std;

class TicketDeck : public Deck {
    public:
        vector<Tickets> ticketDeck;
    
    TicketDeck(){

    };

    ~TicketDeck(){

    };

    void createDeck() {

        //hardcode each card with their individual point values and 2 destinations (A and B)
	//use for loops to populate vector of ticket cards
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
        
        //HIGHLY unlikely to happen in the ticket deck
    }

};

#endif //__TICKETDECK_HPP__
