/// here the span mean if we array=[90,60,70,80], so the span of 70 is 60
// the the span is=2 , span=i-lastHigh

#include <vector>
#include <stack>
#include <iostream>
using namespace std;

int main()
{
    // so the stock price is here
    vector<int> price = {40, 50, 28, 10, 48, 22, 10};
    //// so we need the vector and the stack to store those things

    vector<int> ans(price.size(), 0);
    stack<int> s;

    for (int i = 0; i < price.size(); i++)
    {

        while (s.size() > 0 && price[s.top()] <= price[i])
        {
            s.pop();

            if (s.empty())
            {
                ans[i] = 1 + i;
            }
            else
            {
                ans[i] = i - s.top(); /// precHigh
            }

            s.push(i);
        }
    }

    for(int val:ans){
        cout<< val << " " <<endl;
    }

    return 0;
}