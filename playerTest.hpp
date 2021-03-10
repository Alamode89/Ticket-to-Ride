#ifndef __PLAYER_TEST_HPP__
#define __PLAYER_TEST_HPP__

#include <iostream>
#include "gtest/gtest.h"
#include "player.hpp"
#include "board.hpp"
#include "ticketDeck.hpp"
#include "trainDeck.hpp"

TEST(PlayerTest, namePlayer) {
	Player play("Andre", "Blue");
	EXPECT_EQ(play.getName(), "Andre");

}

TEST(PlayerTest, colorPlayer) {
	Player play("Ashley", "Red");
	EXPECT_EQ(play.getColor(), "Red");
}

TEST(PlayerTest, scorePlayer) {
	Player play("Liberty", "Yellow");
	EXPECT_EQ(play.getScore(), 0);
}

TEST(PlayerTest, blankPlayer) {
	Player play;
	EXPECT_EQ(play.getName(), "");
}

#endif //__PLAYER_TEST_HPP__
