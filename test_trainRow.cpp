#include "gtest/gtest.h"
#include "map.hpp"
#include "nordic_map.hpp"
#include "player.hpp"
#include "board.hpp"
#include "trainRow.hpp"


TEST(TestTrainRow, draw) {
  TrainDeck boardDeck;
  TrainDeck myHand;
  TrainRow aTestRow(boardDeck);
  TrainCard someCard("yellow");

  EXPECT_EQ(aTestRow.drawCard(boardDeck, 3), someCard); //string error?	
   
}

// TEST(TestTrainRow, showTrainRow) {
//   TrainDeck boardDeck;
//   TrainDeck myHand;
//   TrainCard someCard;

//   TrainRow aTestRow(boardDeck);
//   aTestRow.showTrainRow();

//   EXPECT_EQ(aTestRow.showTrainRow(), "Yellow");	
   
// }



int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}