#include <iostream>
#include "Player.h"

using namespace std;

void Player::enterLetter(){
        cout << "�������� �����: " << endl;
        cin >> letter;
}

void Player::setScore(int n){
    score+=n;
}