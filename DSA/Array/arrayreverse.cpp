#include<iostream>
using namespace std;
/*Reversing array using swap*/
void reverseArray(int arr[],int n){
    int s=0,e=n-1;
    while (s<e){
        swap(arr[s],arr[e]);
        s += 1;
        e -= 1;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);

    //before
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    reverseArray(arr,n);
    //after
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
 return 0;
}