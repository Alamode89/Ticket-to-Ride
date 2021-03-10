#include <iostream>
#include "ticketDeck.hpp"
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    Tickets myTickets;

    TicketDeck tixUS;
    TicketDeck tixNord;

    tixUS.createDeck();

    cout << tixUS.ticketDeck.size() << endl;
    cout << tixUS.ticketDeck[0].getDestinationA() << endl;
    cout << tixUS.ticketDeck[0].getDestinationB() << endl;
    cout << tixUS.ticketDeck[0].getValue() << endl;
    cout << endl;
    //should output 30, Denver, El Paso, 4

    cout << tixUS.ticketDeck[13].getDestinationA() << endl;
    cout << tixUS.ticketDeck[13].getDestinationB() << endl;
    cout << tixUS.ticketDeck[13].getValue() << endl;
    cout << endl;
    //should output Duluth, El Paso, 10

    tixNord.createDeckNordicCards();

    cout << tixNord.ticketDeck.size() << endl;
    cout << tixNord.ticketDeck[0].getDestinationA() << endl;
    cout << tixNord.ticketDeck[0].getDestinationB() << endl;
    cout << tixNord.ticketDeck[0].getValue() << endl;
    cout << endl;
    //should output 11, Vaasa, Kuopio, 4

    tixUS.shuffle();

    cout << tixUS.ticketDeck[0].getDestinationA() << endl;
    cout << tixUS.ticketDeck[0].getDestinationB() << endl;
    cout << tixUS.ticketDeck[0].getValue() << endl;
    cout << endl;
    //should output different output from before shuffle
    //at ticket deck US index 0

    tixNord.shuffle();

    cout << tixNord.ticketDeck[0].getDestinationA() << endl;
    cout << tixNord.ticketDeck[0].getDestinationB() << endl;
    cout << tixNord.ticketDeck[0].getValue() << endl;
    cout << endl;
    //should output different output from before shuffle
    //at ticket deck Nordic index 0


    return 0;
}