#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node *next;
    // constructor..
    Node(int _val) {
        this->val = _val;
        this->next = NULL;
    }
};

class LinkedList {
    private:
    Node *head;
    Node *tail;

    public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }
};


int main(int argc, char const *argv[])
{
    
    return 0;
}
