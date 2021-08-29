#include<iostream>
#include<vector>
using namespace std;
/*Find the last occurence of an lement in an array*/
int last_occurence(int arr[],int n,int key){
    //base case
    if(n==0)
    return -1;

    //recursive case
    int subIndex = last_occurence(arr+1,n-1,key);
    if(subIndex==-1){
        if(arr[0]==key)
        return 0;
        else
        return -1;
    }
    else
    return subIndex+1;

    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,11,7,13};
    int n = sizeof(arr)/sizeof(int);
    int key = 7;
    cout<<last_occurence(arr,n,key)<<endl;
 return 0;
}