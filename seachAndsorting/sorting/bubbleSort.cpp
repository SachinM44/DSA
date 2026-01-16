///
/// without using the temp varible
#include <iostream>;
#include <algorithm>;
#include <vector>;
using namespace std;

int bubbleSor(vector<int> &arr)
{
    int n = arr.size() - 1;
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; i < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

/// now with temp

int bubbleWithTemp(vector<int> &arr)
{
    int temp;
    int n = arr.size() - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return temp;
}
//0(n*2) worst/avg , sc 0(1)