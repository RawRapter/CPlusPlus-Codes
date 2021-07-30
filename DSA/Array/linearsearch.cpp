#include<iostream>
using namespace std;
/*Linear Search Using Array, tiime complexity O(n)*/
int LinearSearch(int arr[], int n, int k){
    for(int i = 0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {3,5,2,6,8,7,1,9};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter Key to search ";
    cin>>key;
    int index = LinearSearch(arr,n,key);
    if(index != -1){
        cout<<key<<" is present at index "<<index<<endl;
    }
    else{
        cout<<key<<" is not found"<<endl;
    }
 return 0;
}