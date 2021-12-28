#include<iostream>
#include<vector>
using namespace std;
/*Bubble Sort O(n^2)*/

// Creating a simple function that returns bool value by comparing two elements
bool compare(int a , int b){
    return a>b;
}
// 1st way
void Bubble_sort(int arr[],int n){
    // First loop till second last element
    for (int times=0; times<n-1; times++)
    {
        // Shifting index to left one time from right side at every iteration
        for(int j=0; j<=n-times-1; j++){
            if(arr[j]>arr[j+1]){ // if current element is larger than next element
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
}
//2 way
void Bubble_sort(int arr[],int n){
    // First loop till second last element
    for (int times=0; times<n-1; times++)
    {
        // Shifting index to left one time from right side at every iteration
        for(int j=0; j<=n-times-1; j++){
            if(compare(arr[j],arr[j+1])){ // Using compare function here
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
}

int main()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    Bubble_sort(arr,n);
    for(auto x : arr){ // printing array
        cout<<x<<", ";
    }
 return 0;
}