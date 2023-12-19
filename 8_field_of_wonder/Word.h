#ifndef WORD_H
#define WORD_H

class Word{
private:
    int lengthWord;
    std::vector<char>copyWord; // копия слова - по нему пойдет проверка 
    std::vector<char>cryptWord; //шифрованная копия слова
    bool controlWord = false;
    void cryption();
public:
    Word();
    void Print(); //вывод зашифрованного слова
    bool letterControl(char c); //проверка введенной буквы
    bool wordControl(); //проверка, названо ли слово
};

#endif 