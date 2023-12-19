#include <iostream>
#include "Player.h"

using namespace std;

void Player::enterLetter(){
        cout << "Назовите букву: " << endl;
        cin >> letter;
}

void Player::setScore(int n){
    score+=n;
}