

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
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
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
        if (head == NULL)
        {
            return;
        }
        /// this is for the condition where the there is only one node , and that i genarally considerd as the single node , which always has the head only not the tail;
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert_node(int value, int postion)
    {
        /// if the position is invalid
        if (postion < 0)
        {
            cout << "invalide position\n";
            return;
        }
        // if the position is 0th means head one -> then call the push_front which calls the head
        if (postion == 0)
        {
            push_front(value);
            return;
        }

        Node *temp = head;
        for (int i = 0; i < postion - 1; i++)
        {
            /// also check the temp is null-> means there is no nodes
            if (temp == NULL)
                return;
            /// so now it will move towords to desired position that we wanted
            temp = temp->next;
        }
        /// now here we have establish the connection between that head->newNode-> next node
        Node *newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    };

    void search(int value)
    {
        Node *temp = head;
        while (temp != NULL) // means the head is not equal to empty , means empty linkedin list
        {
            if (temp->data == value)
            {
                cout << "this is th result" << " " << value << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "the given value is not exist\n";
    }
};

int main()
{
    List MM;
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
    ll.pop_back();
    ll.printAll();
    MM.push_front(1);
    MM.push_back(0);
    MM.push_front(2);
    MM.push_front(3);
    MM.printAll();
    MM.insert_node(77, 2);
    MM.insert_node(11, 0);
    MM.printAll();
    MM.search(47473);

    return 0;
}