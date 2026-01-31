#include <iostream>

using namespace std;

class Node
{
    /// add the constructors
    /// and make them pubic
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value){
        data=value;
        prev=next=NULL;
    };
}; // so wee need another class for doubly ll

class doublyLl
{
public:
    Node *head;
    Node *tail;
    /// and wee need the constructor

    doublyLl()
    {
        head = tail = NULL;
    }
};

int main()
{
    return 0;
}