#include<iostream>
using namespace std;
/*Printing Pairs of elements not repeated*/
void printpair(int arr[],int n){
    //using nested loops here
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        for (int j = i+1; j < n; j++)
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
    int n = sizeof(arr)/sizeof(int);
    //printing all elements, using for each
    for(int x:arr){
        cout<<x<<endl;
    }
    cout<<"Going for function";
    printpair(arr,n);
 return 0;
}