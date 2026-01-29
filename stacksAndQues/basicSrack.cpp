

#include <iostream>
#include <vector>

using namespace std;

class Stack
{
    /// @brief with vector 
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
  Stack s;
  s.push(4);
  s.push(3);
  s.push(2);
  while(!s.isEmpty()){
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
    return 0;
}