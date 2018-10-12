//
// Created by Tao Groves on 9/26/2018.
//


#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H


class Player {
public:
    Player(int, int, int);

    void RemoveCards(); // TODO Implement Function
    void AddCard(int); // TODO Implement Function
    void Guess();
    void GenerateHand(int);

    int CardsLeft();
    int SetID();
    int GamePosition;

    int PlayerType;
    int PlayerID;

    void Reset(); //TODO Make more rich return value
private:
    int Hand [8];

};


#endif
