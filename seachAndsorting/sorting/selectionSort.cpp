/// here we deal with the min indexed value
/// select the minIndex and sort it out by swapping

#include <iostream>;
#include <algorithm>;
#include <vector>;
using namespace std;

int selctionSort(vector<int> &arr)
{
    int n = arr.size() - 1;
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}