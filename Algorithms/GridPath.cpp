/*
Given a MxN grid , find the number of ways to reach bottom right corner
starting from top left . At each cell you can move right or down.

Input:
2D Matrix

Output:
Integer denoting the number of ways.

Time Complexiy O(2**(m+n))
*/
#include<iostream>
using namespace std;

int grid_ways(int i, int j, int m, int n){
    //base case, when reached at last box
    if(i == m-1 and j == n-1)
    return 1;

    //solving corner issues
    if(j>=n or i>=m)
    return 0;

    //rec case calling function
    int ans = grid_ways(i+1,j,m,n) + grid_ways(i,j+1,m,n);
    return ans;
}

int main()
{
    int m,n;
    cin>>m>>n;

    cout<<grid_ways(0,0,m,n);
 return 0;
}