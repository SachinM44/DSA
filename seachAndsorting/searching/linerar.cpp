#include <iostream>;
#include <algorithm>;
#include <vector>;
using namespace std;
int linearSearch(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        };
    }

    return 1;
}


/// for this best for unsorted array and best for small dataset ,
//time 0(n) ,space -> 0(1)