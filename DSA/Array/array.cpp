#include<iostream>
using namespace std;

void printarray(int *arr, int n){
    cout<<"In Functin, size of array "<<sizeof(arr)<<endl;
    for (int i = 0; i < n; i++)
    {cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout<<"In Main, Size Of Array: "<<sizeof(arr)<<endl;
    for (int i = 0; i < n; i++)
    {cout<<arr[i]<<endl;
    }
    
    printarray(arr,n);

 return 0;
}