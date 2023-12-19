#include <iostream>
#include <vector>
#include <math.h>
#include "stack.h"
//элементы вставляются и извлекаются с одного конца
using namespace std;

void Stack::push(int n){
    stack_body.push_back(n);
    stack_size++;
}

int Stack::pop(){
    if ( stack_size > 0 ) {
        int t = stack_body[stack_size-1];
        stack_body.pop_back();
        stack_size--;
        return t;
    }
    else {
        cout << "stack is empty ";
        return 0;
    }
}

void Stack::clean(){
    stack_body.clear();
}
