/*
Coin Change
Given an array of coin denomnation and integer M representing target money.
We need to find the min coins required to make the change.

Input:
coins = [1,3,7,10] , M = 15

Output = 3 (7 + 7 + 1)
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//Dynamic Programing Bottom Up Approach
int minNoCoinChange(int m, vector<int> denoms){
    vector<int> dp(m+1,0);
    dp[0] = 0;
    for(int i = 1; i <= m ; i++){
        dp[i] = INT_MAX;

        for(int c : denoms){
            if(i-c >= 0 and dp[i-c]!=INT_MAX){
                dp[i] = min(dp[i],dp[i-c]+1);
            }
        }
    }
    return dp[m]==INT_MAX?-1:dp[m];
}

int main()
{
    vector<int> denoms = {1,3,7,10};
    int m = 8;
    cout<<minNoCoinChange(m,denoms)<<endl;

 return 0;
}