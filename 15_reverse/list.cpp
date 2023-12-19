#include <iostream>
#include <vector>
#include "list.h"

using namespace std;

List::List(){
    first = nullptr;
    last = nullptr;
}
bool List::is_empty(){
    return first == nullptr;
}
void List::push(int n){
    Node* p = new Node(n);
    if (is_empty()) {
      first = p;
      last = p;
      list_size++;
      return;
    }
    last->next = p;
    last = p;
    list_size++;
}
int List::pop(){ 
    if (is_empty()) {
        cout << "List is empty" << endl;
        return -1;
    }
    if (first == last) {
        if (is_empty()){
            cout << "List is empty" << endl;
            return -1;
        } 
        Node* p = first;
        int t = first->val;
        first = p->next;
        delete p;
        return t;
    }
    Node* p = first;
    while (p->next != last) 
        p = p->next;
    p->next = nullptr;
    int t = last->val;
    delete last;
    last = p;
    list_size--;
    return t;
}
void List::print() {
    if (is_empty()) 
        return;
    Node* p = first;
    while ( p != nullptr ) {
      cout << p->val << " ";
      p = p->next;
    }
    cout << endl;
}