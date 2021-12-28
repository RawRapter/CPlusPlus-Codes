#include<iostream>
using namespace std;
/*Linear Search Using Array, tiime complexity O(n)*/
int LinearSearch(int arr[], int n, int k){
    //iterating through all elements and comparing with each of them.
    for(int i = 0;i<n;i++){
        if(arr[i]==k){
            return i; //returning index
        }
    }
    return -1;
}
int main()
{
    int arr[] = {3,5,2,6,8,7,1,9}; //Array Intialized
    int n = sizeof(arr)/sizeof(int); //Getting size of array
    int key;

    cout<<"enter Key to search "; //asking for key(element) to be searched
    cin>>key;

    int index = LinearSearch(arr,n,key); //calling function
    if(index != -1){
        cout<<key<<" is present at index "<<index<<endl;
    }
    else{
        cout<<key<<" is not found"<<endl;
    }
 return 0;
}