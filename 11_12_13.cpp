#include <iostream>
#include <vector>

using namespace std;

//ONLY QUEUE
class Queue{
    int queue_size = 0;
    std::vector<int>queue_body;
public:
    Queue();
    void push(int n);
    int pop();
    int size() { return queue_size; };    
    void clean();  
    void print();  
};
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
void Queue::print(){
    for (int i = 0; i < queue_size; i++){
        cout << queue_body[i] << " ";
    }
    cout << endl;
}

//ONLY STACK
class Stack{ 
    int stack_size = 0;
    std::vector<int>stack_body;
public:
    void push(int n);
    int pop();
    void clean();
    int size() { return stack_size; };   
    void print();    
};
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
void Stack::print(){
    for (int i = 0; i < stack_size; i++){
        cout << stack_body[i] << " ";
    }
    cout << endl;
}

//PARENT QUEUE
class QueueParent{    
protected:
    int some_size = 0;
    vector<int>some_body;
public:
    virtual void push(int n);
    virtual int pop();
    virtual void clean();
    virtual void print();
    int size() { return some_size; };   
};
void QueueParent::push(int n){
    some_body.push_back(n);
    some_size++;
}
int QueueParent::pop(){
    if (some_size > 0){
        int t = some_body[0];
        some_body.erase(some_body.begin());
        some_size--;
        return t;
    }
    else {
        cout << "queue is empty ";
        return 0;
    }
}
void QueueParent::clean(){
    some_body.clear();
}
void QueueParent::print(){
    for (int i = 0; i < some_size; i++){
        cout << some_body[i] << " ";
    }
    cout << endl;
}

//FROM PARENT
class Stack_from_Queue:public QueueParent{
public:
    int pop() override;
};
int Stack_from_Queue::pop(){
    if ( some_size > 0 ) {
        int t = some_body[some_size-1];
        some_body.pop_back();
        some_size--;
        return t;
    }
    else {
        cout << "stack is empty ";
        return 0;
    }
}

//INTERFACE
class Basic_Structure{
protected:    
    virtual int size() = 0;
    virtual void push( int n ) = 0; 
    virtual int pop() = 0;
    virtual void print() = 0;
};

//LIST FROM INTERFACE
struct Node {
  int val;
  Node* next;
  Node(int _val) : val(_val), next(nullptr){}
};
class List:public Basic_Structure{
private:
    Node* first;
    Node* last;
    int list_size = 0;
public:
    List();
    bool is_empty();
    void push(int n) override;
    int pop() override;
    int size() override;
    void print() override;
};
List::List(){
    first = nullptr;
    last = nullptr;
}
bool List::is_empty(){
    return first == nullptr;
}
void List::push(int n){
    Node* p = new Node(n);
    list_size++;
    if (is_empty()) {
      first = p;
      last = p;
      return;
    }
    last->next = p;
    last = p;
}
int List::pop(){ 
    if (is_empty()) 
        return;
    if (first == last) {
        if (is_empty()) 
            return;
        Node* p = first;
        first = p->next;
        delete p;
        return;
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

//BASIC
class Basic_Data:public Basic_Structure{
protected:
    int body_size = 0;
    std::vector<int>body; 
public:
    void push(int n) override;
    void clean(); 
    void print() override;
    int size() override { return body_size; }; 
};
void Basic_Data::push(int n){
    body.push_back(n);
    body_size++;
}
void Basic_Data::clean(){
    body.clear();
} 
void Basic_Data::print(){
    for (int i = 0; i < body_size; i++){
        cout << body[i] << " ";
    }
    cout << endl;
}

//BASIC QUEUE
class QueueBasic:public Basic_Data{
public:
    int pop()  override;
};
int QueueBasic::pop(){
    if (body_size > 0){
        int t = body[0];
        body.erase(body.begin());
        body_size--;
        return t;
    }
    else {
        cout << "queue is empty ";
        return 0;
    }
}

//BASIC STACK
class StackBasic:public Basic_Data{
public:
    int pop() override;
};
int StackBasic::pop(){
    if ( body_size > 0 ) {
        int t = body[body_size-1];
        body.pop_back();
        body_size--;
        return t;
    }
    else {
        cout << "stack is empty ";
        return 0;
    }
}

int main(){
    Stack_from_Queue p3;
    for (int k = 4; k > 0; k--){
        p3.push(k);
    }    
    cout << p3.size() << endl;
    for (int k = p3.size(); k > 0; k--){
        cout << p3.pop();
    }    
    return 0;
}

