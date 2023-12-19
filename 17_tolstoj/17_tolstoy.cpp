#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>
#include <windows.h>
#include <vector>

using namespace std;

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

// ��� 1
    map<char, int> alphabet1{};
    char c1;

    for (int i = 0, c1 = '�'; i < 32; ++i,++c1){
        alphabet1.insert( pair<char,int>(c1,0) );
    }  

    string s1;
    ifstream file1("D:\\code\\17_tolstoj\\tom1.txt");

    while(getline(file1, s1)){ 
        for(const auto& i : s1) {
            if ('�' <= i and i <= '�'){
                alphabet1[i]++;
            }
            else if ('�' <= i and i <= '�'){
                alphabet1[char(toupper(i))]++;
            }
        }

    }
    file1.close();

    vector<int> num1;
    for (auto it = alphabet1.begin(); it != alphabet1.end(); ++it){
        //cout << (*it).first << " : " << (*it).second << endl;
        num1.push_back((*it).second);
    }
    sort(num1.begin(), num1.end(), greater<>());

    cout << "��� 1:" << endl;
    for (int i = 0; i < 10; i++){
        for (auto it = alphabet1.begin(); it != alphabet1.end(); ++it){
            if ((*it).second == num1[i]){
                cout << (*it).first << " ";
                break;
            }
        }
    }
    cout << endl;

//��� 2
    map<char, int> alphabet2{};
    char c2;

    for (int i = 0, c2 = '�'; i < 32; ++i,++c2){
        alphabet2.insert( pair<char,int>(c2,0) );
    }  

    string s2;
    ifstream file2("D:\\code\\17_tolstoj\\tom2.txt");

    while(getline(file2, s2)){ 
        for(const auto& i : s2) {
            if ('�' <= i and i <= '�'){
                alphabet2[i]++;
            }
            else if ('�' <= i and i <= '�'){
                alphabet2[char(toupper(i))]++;
            }
        }

    }
    vector<int> num2;
    for (auto it = alphabet2.begin(); it != alphabet2.end(); ++it){
        //cout << (*it).first << " : " << (*it).second << endl;
        num2.push_back((*it).second);
    }
    sort(num2.begin(), num2.end(), greater<>());

    cout << "��� 2:" << endl;
    for (int i = 0; i < 10; i++){
        for (auto it = alphabet2.begin(); it != alphabet2.end(); ++it){
            if ((*it).second == num2[i]){
                cout << (*it).first << " ";
                break;
            }
        }
    }
    cout << endl;

//TOM 3
    map<char, int> alphabet3{};
    char c3;

    for (int i = 0, c3 = '�'; i < 32; ++i,++c3){
        alphabet3.insert( pair<char,int>(c3,0) );
    }  

    string s3;
    ifstream file3("D:\\code\\17_tolstoj\\tom3.txt");

    while(getline(file3, s3)){ 
        for(const auto& i : s3) {
            if ('�' <= i and i <= '�'){
                alphabet3[i]++;
            }
            else if ('�' <= i and i <= '�'){
                alphabet3[char(toupper(i))]++;
            }
        }

    }
    file3.close();

    vector<int> num3;
    for (auto it = alphabet3.begin(); it != alphabet3.end(); ++it){
        //cout << (*it).first << " : " << (*it).second << endl;
        num3.push_back((*it).second);
    }
    sort(num3.begin(), num3.end(), greater<>());

    cout << "��� 3:" << endl;
    for (int i = 0; i < 10; i++){
        for (auto it = alphabet3.begin(); it != alphabet3.end(); ++it){
            if ((*it).second == num3[i]){
                cout << (*it).first << " ";
                break;
            }
        }
    }
    cout << endl;

    
//TOM 4
    map<char, int> alphabet4{};
    char c4;

    for (int i = 0, c4 = '�'; i < 32; ++i,++c4){
        alphabet4.insert( pair<char,int>(c4,0) );
    }  

    string s4;
    ifstream file4("D:\\code\\17_tolstoj\\tom4.txt");

    while(getline(file4, s4)){ 
        for(const auto& i : s4) {
            if ('�' <= i and i <= '�'){
                alphabet4[i]++;
            }
            else if ('�' <= i and i <= '�'){
                alphabet4[char(toupper(i))]++;
            }
        }

    }
    file4.close();
    vector<int> num4;
    for (auto it = alphabet4.begin(); it != alphabet4.end(); ++it){
        //cout << (*it).first << " : " << (*it).second << endl;
        num4.push_back((*it).second);
    }
    sort(num4.begin(), num4.end(), greater<>());
    cout << "��� 4:" << endl;
    for (int i = 0; i < 10; i++){
        for (auto it = alphabet4.begin(); it != alphabet4.end(); ++it){
            if ((*it).second == num4[i]){
                cout << (*it).first << " ";
                break;
            }
        }
    }

    return 0;
}