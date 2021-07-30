#include<iostream>
using namespace std;
/*Sum of sub arrays using brute force*/
//Time Complexity O(N^3)
int largestsubarraysum1(int arr[],int n){
    int largest_subarray_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int current_subarray_sum = 0;
            for(int k = i ; k <= j; k++){
                current_subarray_sum += arr[k];
            }
            largest_subarray_sum = max(largest_subarray_sum, current_subarray_sum);
        }
    }

    return largest_subarray_sum;
}
int main()
{
    int arr[]={-2,3,-1,4,2,1,-1,-3,6,2,8 };
    int n = sizeof(arr)/sizeof(int);
    cout<<largestsubarraysum1(arr,n);
 return 0;
}