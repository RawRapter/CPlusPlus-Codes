#include<iostream>
using namespace std;

//bottom up approach O(n) time and space
int fib(int n){
    int dp[n+1] = {0};
    //base case assignment
    dp[0] = 0;
    dp[1] = 1;

    //bottom up dp
    for(int i = 2 ; i <= n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

// top down approach
int fib2(int n, int dp[]){
    if(n==0 or n==1)
        return n;
    
    //check if state is already completed
    if(dp[n]!=0){
        return dp[n];
    }

    //otherwise compute the state and store it
    return dp[n] = fib2(n-1,dp) + fib2(n-2,dp);

}

int main()
{

 return 0;
}