#include <iostream>
#include <string>
#include <map>
#include <list>

#include "Player.h"

int HandRange = 0;
std::map<int, std::string> PlayerSequence;
int Players = 0;





void GameSetup() {
    std::cout << "Welcome to Go Fish, a fun game for the whole family. How many players this time?" << "\n";
    Players = std::getchar();

    if (Players <= 2) {
        Player HumanPlayer (0, 0);
        Player AIPlayer  (1,1);
    } else {
        for (int l = 0; l < Players; ++l) {

            Player GamePlayer(l, 0);
            PlayerSequence[l] = GamePlayer.SetID();

        }
    }
    std::cout << "Great, how many different cards will there be?" << "\n";
    HandRange = std::getchar();
    std::cout << "Awesome, let's start!";
}

int main() {
    GameSetup();
    for (auto elem : PlayerSequence) {
        std::cout << elem.first << " " << elem.first << " " << elem.second << "\n";
    }
}
