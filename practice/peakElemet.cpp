//// here given the array // 1,2,3,4,5,4,3,2,1
/// so here the peak is 5 , wo what i can thing of is , first we can do binary search o(n) along with we can use unorider set where we can store the value and check if is already exist and if its and and its greater that of it or not
/// ex: 1,2,3,4,5,5,5,4,3,1,2

#include <iostream>
#include <vector>
using namespace std;

int peakElmt(vector<int> &arr)
{

    int n = arr.size();
     if (n == 1) return 0;
    if (arr[0] > arr[1]) return 0;          
    if (arr[n-1] > arr[n-2]) return n-1;
    int left = 1, right = n - 2;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid - 1] > arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
};

int main()
{

    vector<int> arr = {1, 2, 4, 5, 3, 2, 1};

    int index = peakElmt(arr);
    cout << arr[index];
    return 0;
}