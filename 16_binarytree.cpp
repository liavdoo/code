#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

template <class T>
class CBinaryTree{
private:
    struct Node{
        T key;
        Node* left;
        Node* right;
        int height;
    };
    
    Node* root;

    static void cleanTree(Node* node) {
        if(node == nullptr)
            return;
        cleanTree(node->left);
        cleanTree(node->right);
        delete node;
    }
   
    Node* insert(T x, Node* t) {
        if( t == nullptr ) {
            t = new Node;
            t->key = x;
            t->height = 0;
            t->left = t->right = nullptr;
        }
        else if(x < t->key) {
            t->left = insert(x, t->left);
            if(height(t->left) - height(t->right) == 2)
            {
                if(x < t->left->key)
                    t = singleRightRotate(t);
                else
                    t = doubleRightRotate(t);
            }
        }
        else if(x > t->key) {
            t->right = insert(x, t->right);
            if( height(t->right) - height(t->left) == 2 ) {
                if(x > t->right->key)
                    t = singleLeftRotate(t);
                else
                    t = doubleLeftRotate(t);
            }
        }

        t->height = max(height(t->left), height(t->right))+1;
        return t;
    }

    Node* singleRightRotate(Node* &t) {
        Node* u = t->left;
        t->left = u->right;
        u->right = t;
        t->height = max(height(t->left), height(t->right))+1;
        u->height = max(height(u->left), t->height)+1;
        return u;
    }

    Node* singleLeftRotate(Node* &t) {
        Node* u = t->right;
        t->right = u->left;
        u->left = t;
        t->height = max(height(t->left), height(t->right))+1;
        u->height = max(height(t->right), t->height)+1 ;
        return u;
    }

    Node* doubleLeftRotate(Node* &t) {
        t->right = singleRightRotate(t->right);
        return singleLeftRotate(t);
    }

    Node* doubleRightRotate(Node* &t) {
        t->left = singleLeftRotate(t->left);
        return singleRightRotate(t);
    }

    Node* findMin(Node* t) {
        if(t == nullptr)
            return nullptr;
        else if(t->left == nullptr)
            return t;
        else
            return findMin(t->left);
    }
    
    Node* remove(T x, Node* t) {
        Node* tmp;

        if(t == nullptr)
            return nullptr;

        else if(x < t->key){
            t->left = remove(x, t->left);
        }
        else if(x > t->key){
            t->right = remove(x, t->right);
        }
        else if(t->left && t->right) {
            tmp = findMin(t->right);
            t->key = tmp->key;
            t->right = remove(t->key, t->right);
        }
        
        else {
            tmp = t;
            if(t->left == nullptr)
                t = t->right;
            else if(t->right == nullptr)
                t = t->left;
            delete tmp;
        }
        if(t == nullptr){
            return t;
        }

        t->height = max(height(t->left), height(t->right))+1;

        if(height(t->left) - height(t->right) == 2) {
            if(height(t->left->left) - height(t->left->right) == 1)
                return singleLeftRotate(t);
            else
                return doubleLeftRotate(t);
        }
        
        else if(height(t->right) - height(t->left) == 2) {
            if(height(t->right->right) - height(t->right->left) == 1)
                return singleRightRotate(t);
            else
                return doubleRightRotate(t);
        }
        return t;
    }

    int height(Node* t) {
        return (t == nullptr ? -1 : t->height);
    }

    void inorder(Node* t) {
        if( t == nullptr )
            return;
        inorder(t->left);
        cout << t->key << " ";
        inorder(t->right);
    }

public:
    CBinaryTree(){
        root = nullptr;
    }  
    ~CBinaryTree(){
        cleanTree(root);
    }
    void insert(T x) {
        root = insert(x, root);
    }
    void remove(T x) {
        root = remove(x, root);
    }
    void print() {
        inorder(root);
        cout << endl;
    }
};

int main(){
    CBinaryTree<int> A;
    for (int i = 0; i < 10; i++){
        A.insert(i);
    }
    A.print();
    A.remove(9);
    A.print();
    A.~CBinaryTree();
    return 0;
}