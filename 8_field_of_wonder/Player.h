#ifndef PLAYER_H
#define PLAYER_H

class Player{
private:
    int score = 0;
    char letter;
public:
    void enterLetter(); //���� �����
    char getLetter(){ return letter; } //������ �����
    int getScore(){ return score; } //������� �����
    void setScore(int n); //+ ���� � ��������
    void doubleScore(){ score*=2; }
    void bancrotScore(){ score = 0; }
};
#endif