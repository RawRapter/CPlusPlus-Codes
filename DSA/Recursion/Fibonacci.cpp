#include<iostream>
using namespace std;
/*Fibonacci Series, Time O(2^n) space O(n)*/
int fibonacci(int n){
    //Base Case
    if(n==0 or n==1)
    return n;

    int f1 = fibonacci(n-1);
    int f2 = fibonacci(n-2);
    return f1 + f2;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(5);
 return 0;
}