#ifndef WORD_H
#define WORD_H

class Word{
private:
    int lengthWord;
    std::vector<char>copyWord; // ����� ����� - �� ���� ������ �������� 
    std::vector<char>cryptWord; //����������� ����� �����
    bool controlWord = false;
    void cryption();
public:
    Word();
    void Print(); //����� �������������� �����
    bool letterControl(char c); //�������� ��������� �����
    bool wordControl(); //��������, ������� �� �����
};

#endif 