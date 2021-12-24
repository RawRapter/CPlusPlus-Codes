/*
Wines Problem
There is a collection of N wines placed linearly on shelf,
the price of the ith wine is pi.
Since wines get better every year, suppose today is the
year 1, on the year y the price of the wine be y*pi i.e.
y times the value of the current year.

You want to sell all the wines you have, but you want to sell
exactly one per year, starting this year. On more constraint-
on each year you can sell either the leftmost or the right most
wine without reordering.
Find the maximum profit you can get if you sell all the wines
in optimal order.

Input: Wines Price = [2,3,5,1,4]
Output: 50
Explaination:
2*1 + 4*2 + 1*3 + 3*4 + 5*5 = 50
*/
#include<iostream>
#include<vector>
using namespace std;

//top down approach
int wines(int dp[][10],int prices[],int L,int R,int y){
    //Base Case
    if(L>R){
        return 0;
    }

    //need if state is already
    if(dp[L][R]!=0){
        return dp[L][R];
    }

    //recursive case
    int pick_left = y*prices[L] + wines(dp,prices,L+1,R,y+1);
    int pick_right = y*prices[R] + wines(dp,prices,L,R-1,y+1);

    return dp[L][R] = max(pick_left,pick_right);
}

//Bottom Up Approach
int wines2(int prices[],int n){
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));

    for(int i = n;i >= 0 ; i--){
        //bottom row to top row
        for(int j=0; j<n;j++){
            if(i == j)
            dp[i][j] = n*prices[i];

            else if(i<j){
                int y = n - (j-i);
                int pick_left = prices[i]*y + dp[i+1][j];
                int pick_right = prices[i]*y + dp[i][j-1];
                dp[i][j] = max(pick_left,pick_right);

            }
        }
    }
    return dp[0][n-1];
}


int main()
{
    int a[] = {3,5,2};
    int n = 3;
    int dp[10][10] = {0};
    cout<<wines(dp,a,0,n-1,1)<<endl;

 return 0;
}