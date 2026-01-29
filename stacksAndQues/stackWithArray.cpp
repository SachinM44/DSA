#include <iostream>
using namespace std;

class Stack
{

    int arr[10];
    int topIndex; //  how to define the top index
public:
    Stack()
    {
        topIndex = -1; // here construct it again with - value , so it wont cantain the garbage value
    }

    void push(int value)
    {
        if (topIndex == 9)
        {
            cout << "the stack is full" << endl;
            return;
        }
        arr[++topIndex] = value;
    }

    void pop()
    {
        if (topIndex == -1)
        { // mesna the stack is alredy empty
            cout << "stack is already empty" << endl;
            return;
        }
        topIndex--;
    }

    int top()
    {
        if (topIndex == -1)
        { // mesna the stack is alredy empty
            throw runtime_error("stack is already empty");
        }

        return arr[topIndex];
    }

    bool isEmpty()
    {
        return topIndex == -1;
    }
};

int main()
{
    Stack s;
    s.push(33);
    s.push(3344);

    while (!s.isEmpty())
    {
        cout << s.top() << " " << endl;
        s.pop();
    }

    return 0;
}