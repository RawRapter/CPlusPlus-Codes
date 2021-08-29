#include<iostream>
#include<vector>
using namespace std;
/*Find the first occurence of an lement in an array*/
int first_occurence(int arr[],int n,int key){
    //base case
    if(n==0)
    return -1;

    //recursive case
    if(arr[0]==key)
    return 0;
    int subIndex = first_occurence(arr+1,n-1,key);
    if(subIndex!=-1){
        return subIndex+1;
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,11,13};
    int n = sizeof(arr)/sizeof(int);
    int key = 7;
    cout<<first_occurence(arr,n,key)<<endl;
 return 0;
}