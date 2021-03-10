#ifndef __MAP_TEST_HPP__
#define __MAP_TEST_HPP__

#include "gtest/gtest.h"
#include "board.hpp"
#include "player.hpp"
#include "route.hpp"

TEST(US_MAP, claimRoute) {

    Map *myMap = new USMap();
    Player *bob;
    int points = myMap->claimRoute(bob, "Helena", "Seattle", "yellow");
    
    int index=myMap->findRoute("Helena", "Seattle", "yellow");
		int numCardsToRemove= myMap->allRoutes[index]->requiredTrains;
		cout << "Trains Required/Remove this Number cards from deck: " << numCardsToRemove << endl;
			
    
    cout << "Points: " << points << endl;
     //get cards

    int index = myMap->findRoute("Helena", "Seattle", "yellow");
   cout << "Index: " << index << endl;

    delete myMap;
    delete bob;

    EXPECT_EQ("",""),
     
    //delete a;
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#endif //__MAP_TEST_HPP__