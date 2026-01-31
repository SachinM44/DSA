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


    void push_front(int value){
   Node* newNode=new Node(value);
      if(head==NULL){
        head=tail=newNode;
      }else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;//at final make that new node to head 
      }
    }
};


int main()
{
    return 0;
}