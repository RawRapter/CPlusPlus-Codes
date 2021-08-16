#include<iostream>
using namespace std;
/*Dynamic Memory Allocation*/
int main()
{
    int n;
    cin>>n;
    //creating array dynamically
    int *arr = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
        cout<<arr[i]<<" ";
    }
    
    //Deleting after work done
    delete [] arr;
    
 return 0;
}