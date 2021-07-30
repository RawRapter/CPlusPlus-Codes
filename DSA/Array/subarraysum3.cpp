#include<iostream>
using namespace std;
/*Sum of sub arrays using Kadane's Algorithm
In this have two variable one current sum and one largest sum whenever current sum goes to -ve make it 0
Time Complexity O(n) linear time
*/
int largestsubarraysum2(int arr[],int n){
    int cs = 0;
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
       cs += arr[i];
       if (cs<0){
           cs = 0;
       }
       largest = max(largest,cs);
    }
    return largest;
    
}
int main()
{
    int arr[]={-2,3,-1,4,2,1,-1,-3,6,2,8 };
    int n = sizeof(arr)/sizeof(int);
    cout<<largestsubarraysum2(arr,n)<<endl;
 return 0;
}