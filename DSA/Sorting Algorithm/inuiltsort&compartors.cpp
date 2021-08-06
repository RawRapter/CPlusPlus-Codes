#include<iostream>
#include<algorithm>
using namespace std;
/*Inuilt Sort O(nlogn)*/
bool compare(int a, int b){
    return a<b;
}
int main()
{
    int arr[] = {5,4,3,9,4,8,7,1,2,1};
    int n = sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
    for(auto x : arr){
        cout<<x<<", ";
    }
    cout<<endl;
    reverse(arr,arr+n);
    for(auto x : arr){
        cout<<x<<", ";
    }
    cout<<endl;

    //passing function as a parameter in another function
    sort(arr,arr+n,compare);
    for(auto x : arr){
        cout<<x<<", ";
    }
    cout<<endl;

    sort(arr,arr+n,greater<int>());
    for(auto x : arr){
        cout<<x<<", ";
    }
    cout<<endl;

 return 0;
}