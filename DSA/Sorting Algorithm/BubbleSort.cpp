#include<iostream>
#include<vector>
using namespace std;
/*Bubble Sort O(n^2)*/
bool compare(int a , int b){
    return a>b;
}
//1 way
void Bubble_sort(int arr[],int n){
    for (int times=0; times<n-1; times++)
    {
        for(int j=0; j<=n-times-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
}
//2 way
void Bubble_sort(int arr[],int n){
    for (int times=0; times<n-1; times++)
    {
        for(int j=0; j<=n-times-1; j++){
            if(compare(arr[j],arr[j+1])){
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
    for(auto x : arr){
        cout<<x<<", ";
    }
 return 0;
}