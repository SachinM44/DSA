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

    Node(int value)
    {
        data = value;
        prev = next = NULL;
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

    void push_front(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode; // at final make that new node to head
        }
    }

    void push_back(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        Node *temp = head;

        if (head == NULL)
        {
            return;
        }
        else
        {
            head = head->next;
            if (head != NULL)
            {
                head->prev = NULL;
            };
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back()
    {
       Node * temp=tail;
       if(tail==NULL){
        return;
       }
       else{
        tail=tail->prev;
        if(tail !=NULL){
            tail->next=NULL;
            temp->next=NULL;

        }
        delete tail;
       }
    }

    void print_all()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{

    doublyLl dd;
    dd.push_front(4);
    dd.push_front(37);
    dd.push_back(44);
    dd.push_back(44);
    dd.pop_back();
    dd.print_all();
    dd.pop_front();
    dd.print_all();

    return 0;
}