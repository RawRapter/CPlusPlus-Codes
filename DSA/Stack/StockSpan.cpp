/*
Stock Span Problem
Here, Function StockSpan which collects daily price quotes for some stock, and return the
span of that stock's price for current day.

The span of the stock's price today is defined as the maximum number of consecutive days
(starting from today and going backwards) for which the price of the stock was less than or equal
to today's price.

For Example: if the price of stock over next 7 days is {100,80,60,70,60,75,85}
then the stock span would be [1,1,1,2,1,4,6].
*/

#include<iostream>
#include<stack>
using namespace std;

void stockspan(int prices[],int n,int span[]){
    stack<int> s; //Indices of the day
    s.push(0);
    span[0] = 1;

    //for rest of days
    for(int i =1 ; i<=n-1; i++){
        int currentPrice = prices[i];
        //topmost element that is higher than the current price
        while(!s.empty() and prices[s.top()]<=currentPrice){
            s.pop();
        }
        if(!s.empty()){
            int prevHigh = s.top();
            span[i] = i-prevHigh;
        }
        else{
            span[i] = i + 1;
        }
        s.push(i);
    }
}

int main()
{
    int prices[] = {100,80,60,70,60,75,85};
    int n = sizeof(prices)/sizeof(int);
    int span[1000] = {0};

    stockspan(prices,n,span);
    for(int i = 0 ; i < n ; i++){
        cout<<span[i]<<" ";
    }
 return 0;
}