#include<iostream>
using namespace std;
/*Binary Search, time complexity O(logn)*/
int BinarySearch(int arr[], int n, int key)
{
    int s=0,e=n-1;
    while (s<e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else{
            e = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter Key to search ";
    cin>>key;
    int index = BinarySearch(arr,n,key);
    if(index != -1){
        cout<<key<<" is present at index "<<index<<endl;
    }
    else{
        cout<<key<<" is not found"<<endl;
    }
 return 0;
}