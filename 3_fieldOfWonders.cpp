#include <iostream>
#include <cstring>
#include <windows.h>
#include <wchar.h>  
#include <array> 

using namespace std;

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    wstring word;
    cout << "Введите слово:" << endl;
    wcin >> word;
    int lengthWord = word.length();
    char cryptWord[lengthWord], copyWord[lengthWord];
    bool control = false, help = false;

    for (int i = 0; i < lengthWord; i++){
        copyWord[i] = word[i];
        cryptWord[i] = '_';
    }

    cout << cryptWord << endl;

    char letter;
 
    while (control == false){
        help = false;
        cout << endl << "Введите букву: ";
        cin >> letter;
        for (int i = 0; i < lengthWord; i++){
            if (copyWord[i] == letter){
                cryptWord[i] = letter;
                help = true;
            }
        }

        if (help == true){
            cout << endl << cryptWord << endl;
        }

        else
        cout << endl << "Нет такой буквы!" << endl ;        
 
        for (int i = 0; i < lengthWord; i++){
            if (cryptWord[i] == '_'){
                control = false;
                break;
            }
            else
                control = true;       
        }
    }

    cout << endl <<"Поздравляем! Вы угадали слово!";

    return 0;
}


