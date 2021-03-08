#ifndef __TRAINCARD_HPP__
#define __TRAINCARD_HPP__

#include <string>

using namespace std;

class TrainCard {    

    public: 
    string colorName;

    TrainCard() {

    }

    TrainCard(string color) {
        colorName = color;

    }

    ~TrainCard() {}

    std::string getColorName() {
        return colorName;
    }
        
};

#endif //__TRAINCARD_HPP__
