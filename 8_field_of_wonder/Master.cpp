#include <iostream>
#include <time.h>
#include "Master.h"

using namespace std;

Master::Master(){
    cout << endl << endl << "****************************" << endl;
    cout << endl << "������������, ������!" << endl << endl << "������� �� ������� � ���� ���� �����!!!" << endl ;
    cout << endl << endl << "****************************" << endl << endl;
}

int Master::Randomizer(int num){
    srand(time(NULL));
    int number = rand()%(num); 
    return number;
}

int Master::Baraban(){ // 14 �������� - ���������� �����
    int n = 350 + Randomizer(14) * 50;
    cout << "�� �������� ������ " << n << endl << endl;
    return n;
}