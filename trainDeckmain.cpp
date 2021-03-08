#include "trainDeck.hpp"
#include <iostream>
#include <string>


using namespace std;

int main(int argc, char *argv[]) {

    TrainCard myCard;

     TrainDeck deck;
     deck.createDeck();

    //no pointers - ?
    //  //deck => vector <card> => look at top (card) => getName()
    // cout << deck.trainDeck.size() << endl;

    // TrainCard temp = deck.trainDeck.at(0);
    
    // string whatever = temp.colorName;
    // string whatever2 = temp.getColorName();
    
    // cout << whatever << endl;
    // cout << whatever2 << endl;

    //pointers
    cout << deck.trainDeck.size() << endl;
    cout << deck.trainDeck[0].getColorName() << endl;
    cout << deck.trainDeck[0].colorName << endl;
    cout << deck.trainDeck.size() << endl;
    cout << deck.trainDeck[24].getColorName() << endl;
    cout << deck.trainDeck[24].colorName << endl;


    cout << "compiled" << endl;
    return 0;
}