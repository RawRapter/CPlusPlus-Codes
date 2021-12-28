#include<iostream>
using namespace std;
/*Binary Search, time complexity O(logn)*/
int BinarySearch(int arr[], int n, int key)
{
    int s=0,e=n-1; // s: start , e:end
    while (s<e)
    {
        int mid = (s+e)/2; // mid: centre element
        if(arr[mid]==key){
            return mid; //if key matches returning the index
        }
        else if(arr[mid]>key){
            e = mid - 1; // Going for first half
        }
        else{
            e = mid + 1; //going for second half
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9}; //Array Intialized
    int n = sizeof(arr)/sizeof(int); //Getting size of array

    int key;
    cout<<"enter Key to search "; //asking for key(element) to be searched
    cin>>key;
    int index = BinarySearch(arr,n,key); //calling function
    if(index != -1){
        cout<<key<<" is present at index "<<index<<endl;
    }
    else{
        cout<<key<<" is not found"<<endl;
    }
 return 0;
}