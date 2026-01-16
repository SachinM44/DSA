#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector <int>& arr, int target){
 int left=0, right=arr.size();
 int mid=left+(right-left)/2;
 while(left <= right ){
  if(arr[mid]==target) return mid;
  else if(arr[mid] < target){
         left=arr[mid]+1;
  }else{
    right=arr[mid]-1;
  }
 }
}

//tc 0(log n), sc 0(1)