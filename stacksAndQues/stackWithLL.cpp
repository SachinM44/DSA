#include <iostream>
#include <list>
using namespace std;

class Stack
{
    list<int> ll;

public:
    void push(int value)
    {
        ll.push_front(value);
    };

    void pop()
    {
        ll.pop_front();
    }
    int top()
    {
        return ll.front();
    }

    bool isEmpty()
    {
        return ll.size() == 0;
    }
};

int main()
{

    Stack s;
    s.push(10);
    s.push(13);
    s.push(14);

    while (!s.isEmpty())
    {
        cout<< s.top() << " " <<endl;
        s.pop();
    }
    return 0;
}