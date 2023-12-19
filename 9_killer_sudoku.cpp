#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class Assist{
    public:
    int S;
    int n;
    vector<int>zapret;
    Assist(int sum, int num, vector<int>zapr){
        S = sum;
        n = num;
        zapret = zapr;
    }
};

vector<int> GetNums(Assist a){
    vector<int>nums;
    for (int i = 1; i < 10; i++){ //делаем набор разрешенных чисел
        if(a.zapret.size() != 0){
            if (find(a.zapret.begin(), a.zapret.end(), i) == a.zapret.end()){
                nums.push_back(i);
            }
        }
        else{
            nums.push_back(i);
        }
    }    
    return nums;
}

void GetSet(vector<int>&S, vector<int>&out, int i, vector<vector<int>>&subset){
    if (i < 0){
        subset.push_back(out);
        return;
    }
    out.push_back(S[i]);
    GetSet(S, out, i - 1, subset);
    out.pop_back();
    GetSet(S, out, i - 1, subset);
}

void Assistent(Assist a){
    vector<vector<int>>subsets; //будем заполнять всеми возможными подмножествами из набора разрешенных чисел
    vector<int>middle_out;   //пустой вектор для заполнения внутри функции
    vector<vector<int>>final_out; //пустой вектор, который будем заполнять подходящими комбинациями
    vector<int>b = GetNums(a);  
    GetSet(b, middle_out, b.size() - 1, subsets);

    //окончательное добавление    
    for (int i = 0; i<subsets.size(); i++){
        if (subsets[i].size() == a.n){
            int summa = 0;
            vector<int>step = subsets[i];
            for(int k = 0; k < subsets[i].size(); k++){
                summa+= step[k];
            }
            if (summa == a.S){
                final_out.push_back(step);
            }
        }
    }

    for (int j=0; j<final_out.size(); j++){
        for (int k = 0; k<final_out[j].size(); k++){
            cout << (final_out[j])[k] <<" ";
        }
        cout << endl;
    }

}

int main(){
    int summa, chislo, boost;
    vector<int>zapret_chisla;
    cout << "Input sum:" << endl;
    cin >> summa;
    cout << "Input quantity of numbers:" << endl;
    cin >> chislo;
    cout << "Are there any forbidden numbers? If 'yes' input 1, else input 0" << endl;
    cin >> boost;
    if (boost == 1){
        cout << "Input all forbidden numbers without gaps:" << endl;
        string t;
        cin >> t; 
        for (int i = 0; i<t.length();i++){
            zapret_chisla.push_back(int(t[i] - '0'));
        }
    }
    Assist pr(summa, chislo, zapret_chisla);    
    Assistent(pr);   
    return 0;
}
