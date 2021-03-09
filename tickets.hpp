#ifndef __TICKETS_HPP__
#define __TICKETS_HPP__

#include <string>

using namespace std;

class Tickets {

    private:
        string DestinationA;
        string DestinationB;
        int value;

    public:
        Tickets() {

        }

        Tickets(string destA, string destB, int val) {
            DestinationA = destA;
            DestinationB = destB;
            value = val;
        }

        ~Tickets() {}


    string getDestinationA() {
        return DestinationA;
    }

    string getDestinationB() {
        return DestinationB ;
    }

    int getValue(){
        value;
    }

};

#endif //__TICKETS_HPP__
