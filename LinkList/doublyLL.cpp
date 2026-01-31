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
            head=tail=newNode;
        }else{
            head->next=newNode;
            newNode->prev=head;

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
    dd.print_all();
    return 0;
}