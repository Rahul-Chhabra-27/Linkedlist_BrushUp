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

    // add Node to the LinkedList (Last)
    void addNodeToLast(int val) {
        Node *node = new Node(val);
        if (head == NULL) {
            head = node;
            tail = node;
        }
        else {
            tail->next = node;
            tail = node;       
        }
    }
    void deleteLastNode() {
        if (head == NULL) return;
        else if(head->next == NULL) {
            head = NULL;
            tail = NULL;
        }
        else {
            Node *temp = head;
            while(temp->next != tail) {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
        }
    }
    void addNodeToFront(int val) {
        Node *node = new Node(val);

        if (head == NULL) {
            head = node;
            tail = node;
        }
        else {
            node->next = head;
            head = node;
        }
    }
    void deleteNodeFromFront() {
        
        if (head == NULL) return;
        head = head->next;

    }
    void traverse() {
        Node *temp = head;
        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
    int countNodesInAList() {
        int countNodes = 0;
        Node *temp = head;
        while(temp != NULL) {
            countNodes++;
            temp = temp->next;
        }
        return countNodes;
    }
};


int main(int argc, char const *argv[])
{
    LinkedList *ll = new LinkedList();
    ll->addNodeToLast(1);
    ll->addNodeToLast(2);
    ll->addNodeToLast(3);
    ll->addNodeToLast(4);
    ll->addNodeToLast(5);
    ll->traverse();

    ll->addNodeToFront(6);
    ll->addNodeToFront(7);

    ll->traverse();


    ll->deleteNodeFromFront();
    ll->deleteLastNode();

    ll->traverse();
    // cout << ll->countNodesInAList() << "\n";
    // ll->traverse();
    // ll->deleteLastNode();
    // cout << ll->countNodesInAList();
    // ll->traverse();
    return 0;
}
