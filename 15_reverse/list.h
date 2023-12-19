#ifndef LISTIK
#define LISTIK

struct Node {
  int val;
  Node* next;
  Node(int _val) : val(_val), next(nullptr){}
};
class List{
private:
    Node* first;
    Node* last;
    int list_size = 0;
public:
    List();
    bool is_empty();
    void push(int n);
    int pop();
    int size() { return list_size; }
    void print();
};
#endif