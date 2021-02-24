#ifndef __GAME_HPP__
#define __GAME_HPP__

#include "board.hpp"
#include "player.hpp"
#include "board.hpp"
#include <vector>

using namespace std;

class Game {
  public:
    Board theBoard;
    vector <Player> thePlayers;

  void newGame(){
      //select map
      
      //select number of player

      //set up players

      //create new board

  }

  int calculateScoreGame(Board theBoard){
    return -1;
  }

  int calculateScorePlayer(Player myPlayer){
    return -1;
  }

  int calculateScore(Player thePlayer){
    return -1;
  }


};


#endif //__GAME_HPP__
