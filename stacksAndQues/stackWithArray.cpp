#include <iostream>
using namespace std;

class Stack
{
    int arr[5];
    int topIndex;

public:
    /// @brief this is the constructor 
    Stack()
    {
        topIndex = -1;
    };

    void push(int value)
    {
        if (topIndex == 4)
        {
            cout << "the stack is full" << endl;
            return;
        };

        arr[++topIndex] = value;
    }
    void pop(){
        if(topIndex== -1){
            cout << "the stack is already emty" << endl;
            return;
        }
        topIndex--;
    }

    int top(){
        if(topIndex ==-1){
            throw runtime_error("stack is empty");
        }
        return arr[topIndex];
    }

    bool isEmpt(){
        return topIndex==-1;
    }

};

int main()
{
    return 0;
}