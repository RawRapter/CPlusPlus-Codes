/*
Knapsack Problem
Given weights and prices of n items, we need put a subset of items in a bag of capacity w
such that we get the maximum total value in the bag also known as knapsack.

Input:
N = 4, W = 11
Wts = [2,7,3,4]
Prices = {5,20,20,10}

Output:
40
*/
#include<iostream>
#include<vector>
using namespace std;

//Recursive code function
int knapsack(int wts[], int prices[], int N, int W){
    //base case
    if(N==0 or W==0){
        return 0;
    }

    //recursive case
    int inc = 0 , exc = 0;//inc - include, exc - exclude
    if(wts[N-1]<=W){ //if last weight in array is less than equal to required weight
        inc = prices[N-1] + knapsack(wts,prices,N-1,W-wts[N-1]);
    }
    exc = knapsack(wts,prices,N-1,W);
    return max(inc,exc);
}

//Bottop Up Dynamic Programming Approach, time and space - O(NW)
int knapsackDP(int wts[], int prices[], int N, int W){
    //Here, storing in the form of matrix of size NxW where first row and column
    //must be zero for base case, dp[N][W] will give the final answer
    vector<vector<int>> dp(N+1,vector<int>(W+1,0)); //2D vector created, intialized all to zero

    for(int n = 1; n <= N ; n++){
        for(int w = 1 ; w<= W ; w++){
            int inc=0,exc=0;
            if(wts[n-1] <= w){
                inc = prices[n-1] + dp[n-1][w-wts[n-1]];
            }
                exc = dp[n-1][w];

            dp[n][w] = max(inc,exc);
        }
    }
    return dp[N][W];
}
//it could be done in two rows also as for the current row we require data for only previous row

int main()
{
    int wts[] = {2,7,3,4};
    int prices[] = {3,20,20,10};
    int N=4,W=11;

    cout<<knapsack(wts,prices,N,W)<<endl;
    cout<<knapsackDP(wts,prices,N,W)<<endl;

 return 0;
}