//
// Created by fiend on 9/26/2018.
//

#include "Player.h"
#include <iostream>
#include <algorithm>
#include <map>


void Player::GenerateHand(int HandRange) {
    for (int i = 0; i < HandRange; ++i) {

        Hand[i] = rand() % HandRange + 1;

    }
}

int Player::SetID() {

    for (int j = 0; j < 5; ++j) {

        PlayerID = rand() % 100000; // TODO Make not create one random character

    }
    return PlayerID;
}

int Player::CardsLeft()  {

    // std::sort(Hand.begin(), Hand.end());

    std::map<int, int> counts;
    for (int k = 0; k < 5; ++k) {
        ++counts[Hand[k]];
    };

    return counts.rbegin()->first;
};

void Player::RemoveCards() {

    std::map<int, int> counts;
    for (int k = 0; k < 5; ++k) {
        ++counts[Hand[k]];
        if (counts[k] > 1) {

        }
    }
}


