#ifndef __DECK_HPP__
#define __DECK_HPP__

#include <iostream>


template<typename CardType>
class Deck {
    //private:
			//may add later
    public:
		virtual void createDeck()=0;
		//virtual void draw()=0;
		virtual CardType drawCard()=0;
		virtual void shuffle(std::vector<CardType> theDeck)=0;
		virtual void addCard(CardType &newCard)=0;
		//virtual bool isThisInMyDeck(std::string color, int num)=0;
		//virtual void sort()=0;
		virtual void mergeDeck(Deck &discard)=0; //add a deck's contents to this deck
};
#endif //__DECK_HPP__