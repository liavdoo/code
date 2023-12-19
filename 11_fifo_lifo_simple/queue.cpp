#include <iostream>
#include <vector>
#include <math.h>
#include <stdarg.h>
#include <varargs.h>
#include <cstdarg>
#include "queue.h"
//элементы вставляются с одного конца и извлекаются с другого 

using namespace std;
/*
Queue::Queue(int n, ...){
    va_list args;
    va_start(args,n);
    for (int i=0; i<n ;i++){
        queue_body.push_back(va_arg(args, int));
    }
    va_end(args);
}
*/

/*
Queue::Queue(int first = -1, ...){
    if(first != -1){
        queue_body.push_back(first);
    }
    va_list factor;
    va_start(factor, first);
    while(*factor){
        queue_body.push_back(va_arg(factor, int));
    }
    va_end(factor);
}
*/

/*
Queue::Queue(const int&... args){
    for (auto&& p : std::initializer_list<int>{args...}){
        queue_body.push_back(p);
    }
}
*/

/*
Queue::Queue(vector<int>const &vec){
    for (int i = 0; i < vec.size(); i++){
        queue_body.push_back(vec[i]);
        cout << queue_body[i] << endl;
    }
}
*/

void Queue::push(int n){
    queue_body.push_back(n);
    queue_size++;
}

int Queue::pop(){
    if (queue_size > 0){
        int t = queue_body[0];
        queue_body.erase(queue_body.begin());
        queue_size--;
        return t;
    }
    else {
        cout << "queue is empty ";
        return 0;
    }
}

void Queue::clean(){
    queue_body.clear();
}