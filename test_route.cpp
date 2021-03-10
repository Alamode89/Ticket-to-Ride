#include "gtest/gtest.h"
#include "route.hpp"
#include "city.hpp"
#include "player.hpp"


TEST(Route_Test, GetCity) {
  City *cityA =new City("Vancouver");
  City *cityB= new City("Seattle");
  Route *myRoute= new Route(cityA, cityB, 1, "grey");
  EXPECT_EQ(myRoute->getCity1(), cityA); //string error?	
   
}

// TEST(Route_Test, ClaimPath) {
//   Player *myPlayer = new Player("test", "color");
//   City *cityA =new City("Vancouver");
//   City *cityB= new City("Seattle");
//   Route *myRoute= new Route(cityA, cityB, 1, "grey");
//   EXPECT_EQ(myRoute->claimPath(myPlayer, 1), 0); //string error?	
// }

TEST(Route_Test, isOccupied){
  City *cityA =new City("Vancouver");
  City *cityB= new City("Seattle");
  Route *myRoute= new Route(cityA, cityB, 1, "grey");
  EXPECT_EQ(myRoute->isOccupied(), 0); //string error?	
   
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}