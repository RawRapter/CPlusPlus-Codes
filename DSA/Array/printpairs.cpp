#include<iostream>
using namespace std;
/*Printing Pairs of elements not repeated*/
void printpair(int arr[],int n){
    //using nested loops here
    for (int i = 0; i < n; i++) //first loop for first element of the pair
    {
        int x = arr[i]; //fixing the first element of pair
        for (int j = i+1; j < n; j++) //second loop for getting second element for fixed first element of pair
        {
            int y = arr[j];
            cout<<x<<","<<y<<endl;
        }
        cout<<endl;
    }
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int); //getting size of array
    //printing all elements, using for each
    for(int x:arr){
        cout<<x<<endl;
    }
    cout<<"Going for function";
    printpair(arr,n);
 return 0;
}