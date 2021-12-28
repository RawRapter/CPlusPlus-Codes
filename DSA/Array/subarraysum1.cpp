#include<iostream>
using namespace std;
/*Sum of sub arrays using brute force*/
//Time Complexity O(N^3)
int largestsubarraysum1(int arr[],int n){
    int largest_subarray_sum = 0; //Intializing largest sum variable
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int current_subarray_sum = 0; //Initializing variable to get current sum
            for(int k = i ; k <= j; k++){
                current_subarray_sum += arr[k]; // Getting current sum in inner most loop
            }
            // Taking max of current and previous known largest sum
            largest_subarray_sum = max(largest_subarray_sum, current_subarray_sum);
        }
    }

    return largest_subarray_sum; // returning the largest sum
}
int main()
{
    int arr[]={-2,3,-1,4,2,1,-1,-3,6,2,8 };
    int n = sizeof(arr)/sizeof(int); // size of array
    cout<<largestsubarraysum1(arr,n);
 return 0;
}