#include <iostream>
#include <vector>
#include <cstring>
#include "Player.h"
#include "Word.h"

using namespace std;

void Word::cryption(){
    for (int i = 0; i < lengthWord; i++){
        cryptWord.push_back('_');
    }
}

Word::Word(){
    cout << "Введите загаданное слово:" << endl << endl;
    string wordi;
    cin >> wordi;
    cout << endl << endl << endl << endl << "****************************" << endl << endl;
    lengthWord = wordi.size();
    for (int i = 0; i < wordi.size(); i++){
        copyWord.push_back(wordi[i]);
    }
    cryption();
}

void Word::Print(){
    for (int i = 0; i < lengthWord; i++){
        cout << cryptWord[i];
    }
    cout << endl << endl;
}

bool Word::letterControl(char c){
    bool controlLetter = false;
    for (int i = 0; i < lengthWord; i++){
        if (copyWord[i] == c){
            cryptWord[i] = c;
            controlLetter = true;
        }
    }
    if (controlLetter == true){
        cout << "Поздравляем, Вы угадали букву!" << endl << endl << "****************************" << endl << endl;
        Print();
        cout << endl << "****************************" << endl << endl;
    }
    else
    cout << endl << "Увы, нет такой буквы!" << endl << endl << "****************************" << endl << endl; 
    return controlLetter;
}

bool Word::wordControl(){
    for (int i = 0; i < lengthWord; i++){
        if (cryptWord[i] == '_'){
            controlWord = false;
            break;
        }
        else
            controlWord = true;       
    }
    return controlWord;
}