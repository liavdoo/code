#include <iostream>
using namespace std;

void fibonacci(int n){
    unsigned long long fib_array[n] {0,1};
    int i = 2;
    cout << fib_array[0] << ' ' << fib_array[1];
    for (i; i < n; i++){
        fib_array[i] = fib_array[i-1] + fib_array[i-2];
        cout << ' ' << fib_array[i];
    }
};

unsigned long long fib_recursive(int n){
    if (n>1){
        return fib_recursive(n - 1) + fib_recursive(n-2);
    }
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }

};

int main(){
    int number;
    cout<<"input integer:"<<endl;
    cin>>number;
    if (cin.get() != (int) '\n'){
        cout<<"not integer number"<<endl;
        system("pause");
    }
    if (number > 100){
        cout<<"too much"<<endl;
        system("pause");
    }
    if (number < 1){
        cout<<"too little"<<endl;
        system("pause");
    }
    if (number == 2){
        cout << "0 1" << endl;
        system("pause");
    }
    fibonacci(number);

    cout << endl << "recursive: "<< endl;

    for (int i = 0; i < number; i++){
        cout << fib_recursive(i)<< ' ';
    }
    

    return 0;

}

