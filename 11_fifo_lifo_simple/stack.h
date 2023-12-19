#ifndef STACK_uu
#define STACK_uu

class Stack{ 
    int stack_size = 0;
    std::vector<int>stack_body;
public:
    void push(int n);
    int pop();
    void clean();
    int size() { return stack_size; };       
};

#endif