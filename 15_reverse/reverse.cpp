#include <iostream>
#include <vector>
#include "list.cpp"

using namespace std;

template<typename T>
void reverse(T& a){
    for (int i = 0; i < a.get_data().size() / 2; i++) {
        swap(a.get_data()[i], a.get_data()[a.get_data().size() - i - 1]);
    }
}

void reverse(List& a){
    vector<int> list_body;
    int lenght = a.size();
    for (int i = 0; i < lenght; i++) {
        list_body.push_back(a.pop());
    }
    for (int i = 0; i < lenght; i++) {
        a.push(list_body[i]);
    }
}

int main(){
    List list_primer;
    for (int i = 1; i < 10; i++) {
        list_primer.push(i);
    }
    list_primer.print();
    reverse(list_primer);
    list_primer.print();
    return 0;
}