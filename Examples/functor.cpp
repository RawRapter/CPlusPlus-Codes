#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
/*function object*/
int main()
{
    int arr[] = {2,7,4,8,3,5,1};
    //ascending
    sort(arr,arr+6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //descending
    sort(arr,arr+6,greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
 return 0;
}