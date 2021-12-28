#include <bits/stdc++.h>
using namespace std;
  
  
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binary(vector<int> arr, int l, int r, int x)
{
    // l: left side , r: right side , x: element to be searched
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binary(arr, l, mid - 1, x); // first half
  
        // Else the element can only be present
        // in right subarray
        return binary(arr, mid + 1, r, x); // second half
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}

int binarySearch(vector<int> v, int x)
{
    
    int n = v.size();
    int result = binary(v, 0, n - 1, x);
    return result;
}

int main(){
    vector<int> arr = {4,6,3,1,6,8,7,9};
    cout<<binarySearch(arr,3);
    return 0;
}