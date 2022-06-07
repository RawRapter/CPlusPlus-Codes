/*
Longest Increasing Subsequence
Given an array, find the length of the longest subsequence of such that
all elements of the subsequence are sorted in in increasing order

Input: {50,4,10,8,30,100}
Output: 4 {4,8,30,100}
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//bottom up solution
int lis(vector<int> arr){
    int n = arr.size();
    vector<int> dp(n,1);
    int len = 1;

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i ; j++){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i],1+dp[j]);
                len = max(len,dp[i]);
            }
        }
    }
    return len;
}
int main()
{
    vector<int> arr{50,4,10,8,3};
    cout<<lis(arr)<<endl;
 return 0;
}