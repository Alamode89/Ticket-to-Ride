#ifndef __TRAINCARD_HPP__
#define __TRAINCARD_HPP__

#include <string>

using namespace std;

class TrainCard {

public: 

    std::string colorName="";

    TrainCard(std::string color) {
        std::string colorName = color;
    }
    ~TrainCard() {

    }

    std::string getColorName() {
        return colorName;
    }
    

};

#endif //__TRAINCARD_HPP__
