#include "gtest/gtest.h"
#include "city.hpp"


TEST(Cities, getName) {
  City myCity("Los Angeles");

  EXPECT_EQ(myCity.getName(), "Los Angeles"); //string error?	
   
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}