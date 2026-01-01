

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

int main()
{

    std::cout << 'hello word';
    int variable;
    std::cin >> variable;
}