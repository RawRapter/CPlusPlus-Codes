#include<iostream>
using namespace std;
/*Sum of sub arrays using prefix sum*/
//Time Complexity O(N^2)
int largestsubarraysum2(int arr[],int n){
    //prefix sum
    int prefix[n] = {0};
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }
    //largest sum
    int largest_subarray_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int current_subarray_sum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
            largest_subarray_sum = max(largest_subarray_sum, current_subarray_sum);
        }
    }

    return largest_subarray_sum;
}
int main()
{
    int arr[]={-2,3,-1,4,2,1,-1,-3,6,2,8 };
    int n = sizeof(arr)/sizeof(int);
    cout<<largestsubarraysum2(arr,n);
 return 0;
}