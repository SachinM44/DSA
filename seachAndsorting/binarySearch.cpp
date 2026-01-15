#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;
    int mid = left + (right - left) / 2;

    while (left <= right)
    {
        if (arr[mid] == target)
            return mid;
    }
    if (arr[mid] < target)
    {
        return left = mid + 1;
    }
    else
    {
        return right = mid - 1;
    }

    return -1;
}

//tc 0(log n), sc 0(1)