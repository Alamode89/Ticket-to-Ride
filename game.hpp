#ifndef __GAME_HPP__
#define __GAME_HPP__

#include "board.hpp"
#include "player.hpp"
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

  void playGame(){

  }

  void resetGame(){
    theBoard.clearBoard(); //To Do: Clear Board
    thePlayers.clear();
    newGame();
  }

  int calculateScorePlayer(Player myPlayer){
    return -1;
  }

  int calculateScore(Player thePlayer){
    return -1;
  }


};


#endif //__GAME_HPP__
