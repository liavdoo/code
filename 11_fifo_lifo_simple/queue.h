#ifndef QUEUE_uu
#define QUEUE_uu

class Queue{
    int queue_size = 0;
    std::vector<int>queue_body;
public:
    Queue();
    //Queue(int n, ...);
    //Queue(int first = -1, ...);
    //Queue(std::vector<int> const &vec);
    //Queue(const int&... args);
    void push(int n);
    int pop();
    int size() { return queue_size; };    
    void clean();
    
};

#endif

