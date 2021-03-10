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
      int players;
      string playerName;
      string playerColor;
      int mapChoice;
      //select map
      cout << "How many players?" << endl;
      cin >> players;
      for(int i = 0; i < players; i++) {
          cout << "Name? ";
          cin >> playerName;
          cout << "Color? ";
          cin >> playerColor;
          Player temp(playerName, playerColor);
          thePlayers.push_back(temp);
      }

      //create new board
      cout << "Which board? US Map is 1, Nordic is 2. ";
      cin >> mapChoice;
      cout << endl;
      theBoard.createBoard(mapChoice);

    for(int i = 0; i < thePlayers.size(); i++) {
      thePlayers.at(i).populateHand(theBoard.theTrainDeck, theBoard.theTicketDeck);
    }

  }

  void playGame() {
    //going to need a way to loop through again until the game obj is done
    bool gameOver = false;
    while(!gameOver) {
      for(int i = 0; i < thePlayers.size(); i++) {
        cout << "It's " << thePlayers.at(i).getName() << "'s turn!" << endl;
        thePlayers.at(i).takeTurn(theBoard);
        if(thePlayers.at(i).getScore() >= 5) {
          gameOver = true;
          cout << "The Game is ending! All remaining players will take their final turn!" << endl;
        }
      }
    }
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

  void theWinner() {
    int winningPlayer;
    winningPlayer = calculateHighScore();
    cout << thePlayers.at(winningPlayer).getName() << " has won the game!" << endl;
  }


};


#endif //__GAME_HPP__
