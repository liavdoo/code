#include <iostream>
#include <cstring>
#include <windows.h>
#include <time.h>
#include <vector>
#include <string>

using namespace std;

class Master{
private: 
    int Randomizer(int num){ //для вращения барабана
        srand(time(NULL));
        int number = rand()%(num); 
        return number;
    }

public:
    int Baraban(){ // 14 секторов - количество очков, ПРИЗ, БАНКРОТ, УДВОЕНИЕ
        int n = 350 + Randomizer(17) * 50;
        if (n == 1050){
            cout << "На барабане сектор ПРИЗ" << endl << endl;
        }
        if (n == 1100){
            cout << "На барабане сектор БАНКРОТ" << endl << endl;
        }
        if (n == 1150){
            cout << "На барабане сектор УДВОЕНИЕ" << endl << endl ;
        }
        else{
            cout << "На барабане сектор" << n << endl << endl;
        }
        return n;
    }
};

class Player{ //что делает игрок: называет букву. что есть у игрока: очки и буква.
private:
    int score;
    char letter;

public:
    void enterLetter(){
        cout << "Назовите букву: " << endl;
        cin >> letter;
    }
    char getLetter(){
        return letter;
    }
    int getScore(){
        return score;
    }
    void setScore(int n){
        score+=n;
    }
    void doubleScore(){
        score*=2;
    }
    void bancrotScore(){
        score = 0;
    }

};

class Word{
private:
    int lengthWord;
    vector<char>copyWord; // копия слова - по нему пойдет проверка 
    vector<char>cryptWord; 
    bool controlWord = false;
    void cryption(){
        for (int i = 0; i < lengthWord; i++){
            cryptWord.push_back('_');
        }
    }

public:
    Word(){
        cout << "Введите загаданное слово:" << endl << endl;
        string wordi;
        cin >> wordi;
        lengthWord = wordi.size();
        for (int i = 0; i < wordi.size(); i++){
            copyWord.push_back(wordi[i]);
        }
        cryption();
    }

    void Print(){
        for (int i = 0; i < lengthWord; i++){
            cout << cryptWord[i];
        }
        cout << endl << endl;
    }

    void letterControl(Player one){ //проверяет введенную игроком букву
        bool controlLetter = false;
        for (int i = 0; i < lengthWord; i++){
            if (copyWord[i] == one.getLetter()){
                cryptWord[i] = one.getLetter();
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

    }

    bool wordControl(){
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

};

class Game{
public:
    Game(){
        cout << endl << endl << "****************************" << endl;
        cout << endl << "Здравствуйте, друзья!" << endl << endl << "Сегодня мы сыграем в игру ПОЛЕ ЧУДЕС!!!" << endl ;
        cout << endl << endl << "****************************" << endl << endl;
        }        
    
    void bodyGame(){
        Word w;
        int players[3]{1,2,3};
        Master Yakubovich;
        Player First, Second, Third;
        while (w.wordControl() == false){
            //First does something
            int num = Yakubovich.Baraban();
            First.enterLetter();
            //Second does something
            //Third does something
        }
    }


}; //отдельный запуск игры, где совместить все методы и классы??

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Game game;
    Word word;
    word.Print();

    return 0;
}