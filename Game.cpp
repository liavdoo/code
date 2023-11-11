#include <iostream>
#include "Player.h"
#include "Master.h"
#include "Word.h"
#include "Game.h"

using namespace std;

Game::Game(){
    bodyGame();
}

void Game::bodyGame(){
    Master Yakubovich;
    Player First, Second, Third;
    Word w;
    int winner;
    while (w.wordControl() == false){
        //First does something
        bool control1 = true;
        while (control1){
            cout << "Очередь хода игрока №1" << endl << endl;
            int num = Yakubovich.Baraban();
            First.enterLetter();
            if (w.letterControl(First.getLetter())){
                First.setScore(num);
                if (w.wordControl()){
                    control1 = false;
                    winner = 1;
                }
            }
            else{
                control1 = false;
            }
        }
        if (w.wordControl()){
            continue;
        }
        //Second does something
        cout << endl <<"Очередь хода игрока №2" << endl << endl;
        bool control2 = true;
        while (control2){
            int num = Yakubovich.Baraban();
            Second.enterLetter();
            if (w.letterControl(Second.getLetter())){
                Second.setScore(num);
                if (w.wordControl()){
                    control2 = false;
                    winner = 2;
                }
            }
            else{
                control2 = false;
            }
        }
        if (w.wordControl()){
            continue;
        }
        //Third does something
        cout << endl <<"Очередь хода игрока №3" << endl << endl;
        bool control3 = true;
        while (control3){
            int num = Yakubovich.Baraban();
            Third.enterLetter();
            if (w.letterControl(Third.getLetter())){
                Third.setScore(num);
                if (w.wordControl()){
                    control3 = false;
                    winner = 3;
                }
            }
            else{
                control3 = false;
            }
        }
        if (w.wordControl()){
            continue;
        }
    }
    cout << endl << "Поздравляем победителя!" << endl << "им стал игрок №" << winner << "!!!" << endl ;
    if (winner == 1){
        cout << "Сумма его очков составила: " << First.getScore() << endl << endl;
    }
    if (winner == 2){
        cout << "Сумма его очков составила: " << Second.getScore() << endl << endl;
    }
    if (winner == 3){
        cout << "Сумма его очков составила: " << Third.getScore() << endl << endl;
    }

    cout << "*****************************";
    cout << endl << endl << "Загаданное слово:  ";
    w.Print();
    cout << "" << endl << "*****************************";
}