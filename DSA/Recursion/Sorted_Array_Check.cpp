#include<iostream>
using namespace std;
/*Check if array is sorted using recursion*/
bool isSorted(int arr[],int n){
    //Base Case
    if(n==1 or n==0)
    return true;

    //recursive case
    if(arr[0]<arr[1] and isSorted(arr+1,n-1))
    return true;

    return false;
}

//another way
bool isSOrted2(int arr[], int i, int n){ //i is index
    //base case
    if(i == n-1)
    return true;

    //recursive case
    if(arr[i]<arr[i+1] and isSOrted2(arr,i+1,n))
    return true;

    return false;
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    cout<<isSorted(arr,n);
 return 0;
}