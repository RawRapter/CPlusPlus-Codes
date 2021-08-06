#include<iostream>
#include<vector>
using namespace std;
/*Insertion Sort O(n^2)*/
void Insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int prev = i-1;
        // Loop to find right indexes
        while(prev>=0 and arr[prev]>key){
            arr[prev+1] = arr[prev];
            prev -= 1;
        }
        arr[prev+1] = key;
    }
    
}
int main()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    Insertion_sort(arr,n);
    for(auto x : arr){
        cout<<x<<", ";
    }
 return 0;
}