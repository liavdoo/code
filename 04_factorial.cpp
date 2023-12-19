#include <iostream>
using namespace std;

unsigned long long factorial(int n){
    unsigned long long number = 1;
    for (int i = 2; i <= n; ++i){
        number *= i;
    }
    return number; 
};


int main(void){
    int number;
    cout<< "input integer:" <<endl;
    cin>>number;

    if (cin.get() != (int) '\n'){
        cout<<"not integer number"<<endl;
        system("pause");
    }

    if (number > 50){
        cout<<"too much"<<endl;
        system("pause");
    }

    if (number < 1){
        cout<<"too little"<<endl;
        system("pause");
    }

    cout<<factorial(number)<<endl;
    return 0;
}
