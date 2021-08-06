#include<iostream>
#include<vector>
using namespace std;
/*Selection Sort)*/
void selection_sort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int current = arr[i];
        int min = i;
        for(int j = i; j<n ;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        //swapping
        swap(arr[min],arr[i]);
    }
}
int main()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr,n);
    for(auto x : arr){
        cout<<x<<", ";
    }
 return 0;
}