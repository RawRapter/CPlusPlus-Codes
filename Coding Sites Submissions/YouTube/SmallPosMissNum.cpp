#include<iostream>
#include<algorithm>
using namespace std;
/*Problem
Find the smallest positive missing number in the given array.
Example: [0, -10, 1, 3, -20], Ans = 2*/
int main()
{
    int n;
    cout<<"Tell the array size: "<<endl;
    cin>>n;

    int a[n];

    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    const int N = 1e6 + 2;
    bool check[N];

     for(int i = 0; i < N ; i++){
        check[i] = false;
    } 


    for(int i = 0; i < n ; i++){
        if(a[i]>=0)
            check[a[i]] = 1;
    }

    int ans = 0;

    /* for(int i = 0; i < n ; i++){
        cout<<check[i]<<" ";
    } cout<<endl; */ 

    for(int i = 1 ; i < n ; i++){
        if(check[i] == false)
        {
            ans = i;
            break;
        }
    }

    cout<<"Smallest Positive Number is: "<<ans<<endl;

 return 0;
}