

#include <iostream>;
#include <vector>;

using namespace std;

class Stack
{
    vector<int> v;

public:
    void push(int value)
    {
        v.push_back(value);
    }
    /// for  removing back to the value you dont need pass the value to pop back
    void pop()
    {
        v.pop_back();
    };

    /// to get the top of the the stack// check the syntax correctly
    int top()
    {
        return v[v.size() - 1];
    }
    bool isEmpty()
    {
        return v.size() == 0;
    }
};

/// for the stack to check weather is empty or not

int main()
{

    return 0;
}