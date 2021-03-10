#include "gtest/gtest.h"
#include "map.hpp"
#include "us_map.hpp"
#include "player.hpp"

TEST(USMapTest_TEST, ClaimRouteWithoutSpace) {
    Map *aMap = new USMap;
    Player *thePlayer = new Player("bob", "red");

    EXPECT_EQ(aMap->claimRoute(thePlayer, "Helena", "Seattle", "yellow"), 15); //string error?	
    delete aMap;
    delete thePlayer;
}

TEST(USMapTest_TEST, ClaimRouteWithSpace) {
    Map *aMap = new USMap();
    Player *thePlayer = new Player("bob", "red");

    EXPECT_EQ(aMap->claimRoute(thePlayer, "New Orleans", "Atlanta", "yellow"), 7); //string error?	
    delete aMap;
    delete thePlayer;
}


TEST(USMapTest_TEST, ClaimRouteNoRoute) {
    Map *aMap = new USMap();
    Player *thePlayer = new Player("bob", "red");

    EXPECT_EQ(aMap->claimRoute(thePlayer, "Umea", "Boden", "white"), 0); //string error?	
    delete aMap;
    delete thePlayer;
}

TEST(USMapTest_TEST, isOccupied) {
    Map *aMap = new USMap();
    Player *thePlayer = new Player("bob", "red");
    aMap->claimRoute(thePlayer, "New Orleans", "Atlanta", "yellow");
    EXPECT_EQ(aMap->isOccupied("New Orleans", "Atlanta", "yellow"), 1); //string error?	
    delete aMap;
}

TEST(USMapTest_TEST, isNotOccupied) {
    Map *aMap = new USMap();
    Player *thePlayer = new Player("bob", "red");

    EXPECT_EQ(aMap->isOccupied("New Orleans", "Atlanta", "yellow"), 0); //string error?	
    delete aMap;
}

TEST(USMapTest_TEST, FindRoute) {
    Map *aMap = new USMap();

    EXPECT_EQ(aMap->findRoute("New Orleans", "Atlanta", "yellow"), 74); //string error?	
    delete aMap;
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}