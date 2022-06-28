#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
/*Problem
Given an array arr [] of size N . The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 10 6
0 <= Ai <= 10 6
Example
Input :
7
1 5 3 4 3 5 6
Output :
2

Explanation :
5 is appearing twice and its first appearance is at index 2 which is less than 3
whose first occurring index is 3.
Solution
Base idea : To check if an element is repeating, we maintain an array idx[], which
stores the first occurrence (index) of a particular element a[i].
*/
int main()
{
    int n;
    cin>>n;

    int a[n];
    cout<<"Enter the array: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int max_ele = *max_element(a,a+n);

    int idx[max_ele+1];
    for (int i = 0; i <= max_ele; i++)
    {
        idx[i] = -1;
    }
    /* for (int i = 0; i <= max_ele; i++)
    {
        cout<<idx[i]<<" ";
    } */
    int minidx = INT_MAX;
    for (int i = 0; i < max_ele; i++)
    {
        /* if(idx[a[i]] == -1)
            idx[a[i]] = i; */

        if (idx[a[i]] != -1)
        {
            minidx = min(minidx,idx[a[i]]);
        }
        else
            idx[a[i]] = i;
    }
    
    if(minidx == INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }
    
 return 0;
}