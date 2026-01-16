/// in this recusive binary search , the function calls it iteslf until it meets the base condtion
/// what is recurstion is the fn is calls itself n number of times until it the meets its its condtions

#include <iostream>;
#include <vector>;
using namespace std;
int recursiveBinarySearch(vector<int> &arr, int left, int right, int target)
{
    if (left > right)
        return -1;
    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return recursiveBinarySearch(arr, right, target, mid + 1);
    }
    else
    {
        return recursiveBinarySearch(arr, left, target, mid - 1);
    }
}