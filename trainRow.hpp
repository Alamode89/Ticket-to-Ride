#ifndef __TRAINROW_HPP__
#define __TRAINROW_HPP__

#include <vector>
#include <iostream>
#include "trainDeck.hpp"

using namespace std;

class TrainRow {

public:
    vector<TrainCard> displayCards;

    TrainRow(TrainDeck& takeFromTheTrainDeck) {
        //takeFromTheTrainDeck.drawCard();
        //draw deck
        for(int i=0; i < 5; ++i){
            displayCards.push_back(takeFromTheTrainDeck.drawCard());
        }
    }

    ~TrainRow(){

    }

    TrainCard drawCard(TrainDeck& takeFromTheTrainDeck, int choice){
        //take from my display cards
        TrainCard temp;
        
        //draw card location player chooses
        temp = displayCards.at((int)(choice-1));
 
        //erase from the location the player choose
        displayCards.erase(displayCards.begin()+choice-1);
        
        //1 card draw from board game deck - to keep me at 5 cards at all times
        displayCards.push_back(takeFromTheTrainDeck.drawCard());

        return temp;
    }

    void showTrainRow() {
     cout << "Train Row" << endl;
        for(int i=0; i < 5; ++i){
    
           cout << i+1 << ": " << displayCards[i].colorName;
           if(i != 4)
            cout << " || ";
        }
        cout << endl;
    }

};

#endif //__TRAINROW_HPP__
