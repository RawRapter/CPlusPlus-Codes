#include<iostream>

using namespace std;
/*Given an array a[] of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).*/
int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter the array: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int mx = -9999;
    
    cout<<"Max Till i: "<<endl;
    for(int i = 0 ; i < n ; i++){
        mx = max(mx,a[i]);
        cout<<mx<<" ";
    }

 return 0;
}