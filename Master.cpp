#include <iostream>
#include <time.h>
#include "Master.h"

using namespace std;

Master::Master(){
    cout << endl << endl << "****************************" << endl;
    cout << endl << "Здравствуйте, друзья!" << endl << endl << "Сегодня мы сыграем в игру ПОЛЕ ЧУДЕС!!!" << endl ;
    cout << endl << endl << "****************************" << endl << endl;
}

int Master::Randomizer(int num){
    srand(time(NULL));
    int number = rand()%(num); 
    return number;
}

int Master::Baraban(){ // 14 секторов - количество очков
    int n = 350 + Randomizer(14) * 50;
    cout << "На барабане сектор " << n << endl << endl;
    return n;
}