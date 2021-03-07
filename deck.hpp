#ifndef __DECK_HPP__
#define __DECK_HPP__

#include <iostream>

class Deck {
    //private:
			//may add later
    public:
		virtual void createDeck()=0;
		virtual void draw()=0;
		virtual void shuffle()=0;
		virtual void addCard()=0;
		virtual void sort()=0;
		virtual void addDiscard(Deck &discard);
};
#endif //__DECK_HPP__
