#ifndef __TICKETDECK_HPP__ //no _ inbetween Ticket and Deck - Liberty
#define __TICKETDECK_HPP__

#include "deck.hpp"
#include "tickets.hpp"
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>

using namespace std;

class TicketDeck : public Deck<Tickets> {
    public:
		
    vector<Tickets> ticketDeck;
    
    TicketDeck(){};

    ~TicketDeck(){};

    void createDeck() {

      //hardcode each card with their individual point values and 2 destinations (A and B)
			//use for loops to populate vector of ticket cards

			ticketDeck.push_back(Tickets("Denver", "El Paso", 4));
			ticketDeck.push_back(Tickets("Kansas City", "Houston", 5));
			ticketDeck.push_back(Tickets("New York", "Atlanta", 6));
			ticketDeck.push_back(Tickets("Calgary", "Salt Lake City", 7));
			ticketDeck.push_back(Tickets("Chicago", "New Orleans", 7));
			ticketDeck.push_back(Tickets("Duluth", "Houston", 8));
			ticketDeck.push_back(Tickets("Helena", "Los Angeles", 8));
			ticketDeck.push_back(Tickets("Sault St. Marie", "Nashville", 8));
			ticketDeck.push_back(Tickets("Seattle", "Los Angeles", 9));
			ticketDeck.push_back(Tickets("Montreal", "Atlanta", 9));
			ticketDeck.push_back(Tickets("Sault St. Marie", "Oklahoma City", 9));
			ticketDeck.push_back(Tickets("Chicago", "Santa Fe", 9));
			ticketDeck.push_back(Tickets("Toronto", "Miami", 10));
			ticketDeck.push_back(Tickets("Duluth", "El Paso", 10));
			ticketDeck.push_back(Tickets("Portland", "Phoenix", 11));
			ticketDeck.push_back(Tickets("Winnipeg", "Little Rock", 11));
			ticketDeck.push_back(Tickets("Denver", "Pittsburgh", 11));
			ticketDeck.push_back(Tickets("Dallas", "New York", 11));
			ticketDeck.push_back(Tickets("Winnipeg", "Houston", 12));
			ticketDeck.push_back(Tickets("Boston", "Miami", 12));
			ticketDeck.push_back(Tickets("Vancouver", "Santa Fe", 13));
			ticketDeck.push_back(Tickets("Montreal", "New Orleans", 13));
			ticketDeck.push_back(Tickets("Calgary", "Phoenix", 13));
			ticketDeck.push_back(Tickets("Los Angeles", "Chicago", 16));
			ticketDeck.push_back(Tickets("San Francisco", "Atlanta", 17));
			ticketDeck.push_back(Tickets("Portland", "Nashville", 17));
			ticketDeck.push_back(Tickets("Los Angeles", "Miami", 20));
			ticketDeck.push_back(Tickets("Vancouver", "Montreal", 20));
			ticketDeck.push_back(Tickets("Los Angeles", "New York", 21));
			ticketDeck.push_back(Tickets("Seattle", "New York", 22));

    }

		void createDeckNordicCards(){
			ticketDeck.push_back(Tickets("Vaasa", "Kuopio", 4));
			ticketDeck.push_back(Tickets("Mo I Rana", "Narvik", 4));
			ticketDeck.push_back(Tickets("Trondheim", "Mo I Rana", 6));
			ticketDeck.push_back(Tickets("Lieska", "Murmansk", 9));
			ticketDeck.push_back(Tickets("Karlskrona", "Umea", 11));
			ticketDeck.push_back(Tickets("Alborg", "Andalsnes", 12));
			ticketDeck.push_back(Tickets("Arhus", "Sundsvall", 12));
			ticketDeck.push_back(Tickets("Gotebourg", "Oulu", 16));
			ticketDeck.push_back(Tickets("Kristiansand", "Tornio", 18));
			ticketDeck.push_back(Tickets("Kobenhavn", "Boden", 20));
			ticketDeck.push_back(Tickets("Stockholm", "Murmansk", 21));
		}

    void display(vector<Tickets> displayTicketDeck) const {
	    for(int i = 0; i < displayTicketDeck.size(); i++) {
            cout << "Ticket " << i + 1 << endl;
		    cout << displayTicketDeck.at(i).getDestinationA() << " to " << displayTicketDeck.at(i).getDestinationB() << " | Value: " << displayTicketDeck.at(i).getValue() << endl;
	    }
    }

    Tickets drawCard(){
        Tickets temp = ticketDeck.back();
        ticketDeck.pop_back();
        return temp;
    }

	void shuffle() {
		for(int i = 0; i < ticketDeck.size(); i++) {
            int j = i + rand() % (ticketDeck.size() - i);
            swap(ticketDeck.at(i), ticketDeck.at(j));
        }
  	}
		
    virtual void addCard(Tickets &newCard) {
			ticketDeck.push_back(newCard);
    }


		//To Do: Ashely
		//bool isThisInMyDeck(string color, int num){ //other classes need to know if certain things are in the player hand
			//check if this these cards are in my deck
			//return true if they are
			//return false if they are no
		
		//}


    // void sort() {


    // }

		//To Do: Ashley
	//bool isThisInMyDeck(string color, int num){
		//check if this these cards are in my deck
		//return true if they are
		//return false if they are no
	// 	if (color){

			

	// 	return true;
	// 	}

	// 	else() {
	// 	return false;
	// 	}
	//}



		//To Do: Ashley
    void mergeDeck(Deck &discard){
        //adds cards from discard deck into the deck and updates old discard deck
        //pop out all discard cards ... push them back into this deck

		

    }

		//To Do: Ashley
		void resetDeck(){
		//delete all objects in vector
		//call create deck function

		ticketDeck.clear();

		createDeck();
    }


};

#endif //__TICKETDECK_HPP__
