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
    cout << "Ââåäèòå ñëîâî:" << endl;
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
        cout << endl << "Ââåäèòå áóêâó: ";
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
        cout << endl << "Íåò òàêîé áóêâû!" << endl ;        
 
        for (int i = 0; i < lengthWord; i++){
            if (cryptWord[i] == '_'){
                control = false;
                break;
            }
            else
                control = true;       
        }
    }

    cout << endl <<"Ïîçäðàâëÿåì! Âû óãàäàëè ñëîâî!";

    return 0;
}


