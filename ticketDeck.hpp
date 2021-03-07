#ifndef __TICKET_DECK_HPP__
#define __TICKET_DECK_HPP__

#include "deck.hpp"
#include "tickets.hpp"
#include <vector>

using namespace std;

class TicketDeck : Deck {

    vector<Tickets> ticketDeck;

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

    void addDiscard(Deck discard) {


    }
};

#endif //__TICKET_DECK_HPP__
