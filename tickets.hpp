#ifndef __TICKETS_HPP__
#define __TICKETS_HPP__

#include <string>

using namespace std;

class Tickets {

public:

    string DestinationA;
    string DestinationB;
    int value;

    Tickets(string destA, string destB, int val) {
        DestinationA = destA;
        DestinationB = destB;
        value = val;
    }

    ~Tickets() {}


    string getDestinationA() {
   

    }

    string getDestinationB() {


    }

};

#endif //__TICKETS_HPP__
