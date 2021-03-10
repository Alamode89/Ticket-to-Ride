#include "gtest/gtest.h"
#include "map.hpp"
#include "nordic_map.hpp"
#include "player.hpp"

TEST(NordicMapTest_TEST, ClaimRouteNoRoute) {
    Map *aMap = new NordicMap();
    Player *thePlayer = new Player("bob", "red");

    EXPECT_EQ(aMap->claimRoute(thePlayer, "Helena", "Seattle", "yellow"), 0); //string error?	
    delete aMap;
}

TEST(NordicMapTest_TEST, ClaimRoute) {
    Map *aMap = new NordicMap();
    Player *thePlayer = new Player("bob", "red");

    EXPECT_EQ(aMap->claimRoute(thePlayer, "Umea", "Boden", "white"), 4); //string error?	
    delete aMap;
}

TEST(NordicMapTest_TEST, isOccupied) {
    Map *aMap = new NordicMap();
    Player *thePlayer = new Player("bob", "red");
    aMap->claimRoute(thePlayer, "Umea", "Boden", "white");
    EXPECT_EQ(aMap->isOccupied("Umea", "Boden", "white"), 1); //string error?	
    delete aMap;
}

TEST(NordicMapTest_TEST, isNotOccupied) {
    Map *aMap = new NordicMap();
    Player *thePlayer = new Player("bob", "red");

    EXPECT_EQ(aMap->isOccupied("Umea", "Boden", "white"), 0); //string error?	
    delete aMap;
}

TEST(NordicMapTest_TEST, FindRoute) {
    Map *aMap = new NordicMap();

    EXPECT_EQ(aMap->findRoute("Umea", "Boden", "white"), 42); //string error?	
    delete aMap;
}



int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}