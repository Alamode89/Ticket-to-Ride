#include "trainDeck.hpp"
#include <iostream>
#include <string>


using namespace std;

int main(int argc, char *argv[]) {

    TrainCard myCard;

     
    TrainDeck deck;
     deck.createDeck();

    cout << deck.trainDeck.size() << endl;
    cout << deck.trainDeck[0].getColorName() << endl;
    //cout << deck.trainDeck[0].colorName << endl;
    cout << endl;
    //should output 110, red

    //cout << deck.trainDeck.size() << endl;
    cout << deck.trainDeck[24].getColorName() << endl;
    //cout << deck.trainDeck[24].colorName << endl;
    cout << endl;
    //should output yellow

    deck.shuffle(); //test first shuffle
    cout << deck.trainDeck[0].getColorName() << endl;
    //cout << deck.trainDeck[0].colorName << endl;
    cout << endl;
    //should output different color train card from before shuffling deck at index 0

    deck.shuffle(); //testing second shuffle
    cout << deck.trainDeck[0].getColorName() << endl;
    cout << endl;
    //should output different color train card from before shuffling deck a second time
    //at index 0

    //initial check to see if code compiles
    cout << "compiled" << endl;
    cout << endl;

    return 0;
}