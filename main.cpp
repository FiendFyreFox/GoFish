#include <iostream>
#include <string>
#include <map>
#include <list>

#include "Player.h"

int HandRange = 5;
std::map<int, std::string> PlayerSequence;

bool GameComplete = false;
int Players = 0;

void GameSetup();
void TwoPlayerGame();
void ManyPlayerGame();


int main() {
    GameSetup();

}

void GameSetup() {
    std::cout << "Welcome to Go Fish, a fun game for the whole family. How many players this time?" << "\n";
    Players = std::getchar();

    for (int l = 0; l < Players; ++l) {
            std::map<int, int> PlayerNamingDict;
            PlayerNamingDict[l] = l;
            Player GamePlayer  (l, 0, HandRange);
            PlayerSequence[l] = false;

    }
    std::cout << "Great, how many different cards will there be?" << "\n";
    HandRange = std::getchar();
    std::cout << "Awesome, let's start!";
}



void TwoPlayerGame() {
    do {

        Player HumanPlayer(0, 0, HandRange);
        Player AIPlayer(1, 1, HandRange);

        HumanPlayer.RemoveCards();


    } while (GameComplete = false);
}

void ManyPlayerGame() {

}
