#ifndef __GAME_HPP__
#define __GAME_HPP__

#include "board.hpp"
#include "player.hpp"
#include <vector>

using namespace std;

class Game {
  public:
    Board theBoard;
    vector<Player> thePlayers;

  void newGame(){
      int players;
      string playerName;
      string playerColor;
      int mapChoice;
      //select map
      cout << "How many players?" << endl;
      cin >> players;
      for(int i = 0; i < players - 1; i++) {
          cout << "Name?" << endl;
          cin >> playerName;
          cout << endl;
          cout << "Color>?" << endl;
          cin >> playerColor;
          Player temp(playerName, playerColor);
          thePlayers.push_back(temp);
      }

      //create new board
      cout << "Which board? US Map is 1, Nordic is 2" << endl;
      cin >> mapChoice;

      theBoard.createBoard(mapChoice, thePlayers);
  }

  void playGame() {
    //going to need a way to loop through again until the game obj is done
    //bool gameOver = true;
   // while(gameOver) {
      for(int i = 0; i < thePlayers.size() - 1; i++) {
        thePlayers.at(i).takeTurn(theBoard);
      }
    //}
  }

  int calculateHighScore(){
    int highestScore = 0; // saves the index of the highest scoring player
    for(int i = 0; i < thePlayers.size() - 1; i++) {
      if(thePlayers.at(i).getScore() > highestScore) {
          highestScore = i;
      }
    } 
    return highestScore;
  }

  void declareWinner() {
    int winningPlayer = calculateHighScore();
    cout << thePlayers.at(winningPlayer).getName() << " has won the game! Their score was " << thePlayers.at(winningPlayer).getScore() << endl;
  }
};


#endif //__GAME_HPP__
