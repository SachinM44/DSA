

#include <iostream>

using namespace std;
// this class is the individual node=> next we need the another class which can connect all those node -> u can call it as the link list class
class Node
{
public:
    int data;
    Node *next;

    /// this is the constructor
    Node(int val)
    {
        data = val;
        next = NULL;
    };
};

class List
{
    /// by default they will be privet if we dont declare anything
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }
    // another method to push the node to the front of the ll
    void push_front(int value)
    {
        Node *newNode = new Node(value); // it will create the new node to to push and it will creat the dynamic object wich never going to washout , so that we use new keywork or the method
        /// this is th 1th case where there is no nude, the node count is 0 now
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            ////what that arrow does it it : (*newNode).next=head; so the above one is the shortfrom
            head = newNode;
        }
    };

    void push_back(int value)
    {
        Node *newNode = new Node(value);
        if (tail == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printAll()
    {
        // to print the or traverse the all those nodes we need the extra temp variable which goes there , and copy the address and the get the result for that each node
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void pop_front()
    {
        if (head == NULL) /// if there is not a single node exist
        {
            return;
        }
        if (head == tail)
        { /// if there is only one node
            delete head;
            head = tail = NULL;
            return;
        }
        else
        {
            Node *temp = head; // first creat the temp variable and point it out to that head node
            head = head->next; // second move the first head to its next node, so that it will become the next node and that will be the head node , and previouse head node got saparete
            temp->next = NULL; // like this we disconnected the next node connection with our linkin list
            delete temp;
        }
    }

    void pop_back()
    {
        if (tail == NULL)
        {
            return;
        }
        if (tail == head)
        {
            delete tail;
            tail = head = NULL;
            return;
        }
        else
        {
            Node *temp = tail;
            tail = tail->next;
            temp->next = NULL;
            delete temp;
        }
    }
};

int main()
{

    List ll; /// just created the list;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(34);
    // now how will you print this ? for that lets use temp variablw which can goes to each nodes and print those value;
    ll.printAll();
    ll.pop_front();
    ll.pop_back();
    ll.printAll();
    return 0;
}