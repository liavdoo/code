#include "stack.cpp"
#include "queue.cpp"

int main(){
    Queue p;
    Stack t;
    for (int i = 1; i < 10; i++) {
        p.push(i);
        t.push(i);
    }

    for (int k = 9; k > 0; k--){
        cout << "queue " << k << ": " <<p.pop() << " " << " size: " << p.size() << endl;
        cout << "stack " << k << ": " <<t.pop() << " " << " size: " << t.size() << endl;
    }
    return 0;
}
