#ifndef __TICKETS_HPP__
#define __TICKETS_HPP__

#include <string>

using namespace std;

class Tickets {

    public:
        string DestinationA;
        string DestinationB;
        int value;
        
    Tickets(){
 
    }
    ~Tickets(){
        
    }


    string getDestinationA() {
        //stub
        string temp = "Vancouver";
        return temp;
    }

    string getDestinationB() {
        //stub
        string temp = "Seattle";
        return temp;
    }

    int getValue(){

        //stub
        return 10;
    }

};

#endif //__TICKETS_HPP__
