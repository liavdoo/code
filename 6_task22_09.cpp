#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <wchar.h>
#include <time.h>


using namespace std;

int getRandom(int min, int max){
    srand(time(NULL));
    int number = min + rand()%(max);
    //cout << "getRandom = "<< number <<endl;
    return number;
}

long long int getRandomNumber(){
    int arr[3] {0,11111111,22222222};
    int number;
    number = arr[getRandom(0,3)];
    //cout << "getRandomNumber = "<< number <<endl;
    return number;
}

long long int summa(string str){
    long long int summ = 0;
    for (int i = 0; i< str.length()+1; i++){
        char c = str[i];
        if (c > '0' && c < '9'){
            c = c - '0';
            summ += c;
        }
    }
    int numer = (str[3]-'0')*10+(str[4]-'0');
    //cout << "summ = " << summ <<endl;
    //cout << "numer = " << numer <<endl;
    //cout << pow(summ,numer) <<endl;
    //cout << pow(summ,numer)+ getRandomNumber() <<endl;
    return pow(summ,numer) + getRandomNumber(); 
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    wstring name;
    string birthdate;
    string music[14] = {"Master of puppets - Metallica", "����� - Pyrokinesis", "Homebody - PH1","������ - ������������","Russian - Ebunny","Enemy - Imagine dragons"," ������� - ���� � ��������","Valentine - Justice","Swimming pools - Kendrick Lamar","Night Call - Kavinsky","Yesterday - The Beatles","��� ���������� ����� - ����������� �������","�� ������ �� - ����������","Bad habits - Ed sheeran"};
    string movies[14] = {"�������� ���������", "������������", "�������", "�� ������������ �������","�����������","��� ��������","�������� �","�����","������� ����","���� � ��������","�� ����� � �����","������� ����","��������","�� �������� ������"};
    string actors[14] = {"����� �������", "�������� ����", "����� ���","����� �������","�������� ��������","�������� ����������","����� ���������","����� ����","������� ��������","����� ����������","��������� ������","������� ������","��� ����","���� ����"};
    string actress[14] = {"������� �����������", "����� ����", "��������� �����","���� �����","���� ������","���� ������","����� �������","����� �����","����� �����","������� ���������","���������� ������","��������� �����","������ �����","��������� ����������"};
    string selebs[14] = {"���� ���������", "���� ����", "������ �������", "��������� ��������", "������ ����������", "������� �����", "�����", "����� �������", "������ �������","����� ����","��������� �������","����� �����","��� ���������","����� ����"};
    
    cout <<"������� ���:"<<endl;
    wcin >> name;
    cout <<"������� ���� ��������:"<<endl;
    cin >> birthdate;
    cout <<"������ ����, ";
    wcout << name << "!"<<endl;
    
    long long int sums = summa(birthdate);
    //cout << "sums = " << sums << endl;
    cout << "���� ����� �������: " << music[(sums)&15] << endl; 
    cout << "��� ����� �������: " << movies[(sums>>4)&15] << endl;    
    cout << "��� ����� �������: " << actors[(sums>>8)&15] << endl;
    cout << "���� ������� �������: " << actress[(sums>>12)&15] << endl;
    cout << "���� ������ �������: " << selebs[(sums>>16)&15] << endl;
    return 0;
}
