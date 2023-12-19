#ifndef PLAYER_H
#define PLAYER_H

class Player{
private:
    int score = 0;
    char letter;
public:
    void enterLetter(); //ввод буквы
    char getLetter(){ return letter; } //отдача буквы
    int getScore(){ return score; } //возврат очков
    void setScore(int n); //+ очки с барабана
    void doubleScore(){ score*=2; }
    void bancrotScore(){ score = 0; }
};
#endif