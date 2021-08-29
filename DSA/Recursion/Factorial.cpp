#include<iostream>
using namespace std;
/*Factorial: Time O(n) Space O(n)*/
int factorial(int n){
    //Base Case
    if(n==0)
    return n;

    int ans = n*factorial(n-1);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);   
 return 0;
}