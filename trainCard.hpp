#ifndef __TRAIN_CARD_HPP__
#define __TRAIN_CARD_HPP__

#include <string>

using namespace std;

class TrainCard {

private:

    Color us_cardColor;

public: 
    
    enum class Color{ RED, ORANGE, YELLOW, GREEN, BLUE, PURPLE, BLACK, WHITE };

    TrainCard::TrainCard(Color color) {

	this->us_cardColor = color;
    }

    TrainCard::~Card(){}

    TrainCard::Color TrainCard::GetColor() {

	return us_cardColor;
    }

    void TrainCard::SetColor(Color color) {

	this->us_cardColor = color;
    }

};

#endif //__TRAIN_CARD_HPP__
