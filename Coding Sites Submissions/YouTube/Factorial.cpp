#include<iostream>
#include<vector>
using namespace std;
/*Write a program to find the factorial of a given number.*/
//Using recursion
int factorial(int n){
    //base case
    if(n == 0 or n == 1)
    return n;
    //recursion
    return n*factorial(n-1);
}
//using loops
int factorial1(int n){
    int result=1;
    while (n)
    {
        result*=n;
        n-=1;
    }
    return result;
}
int main()
{
    int n;
    cin>>n;

    cout<<"Factorial of a number is "<<factorial(n)<<endl;
    cout<<"Factorial of a number is(Loop) "<<factorial1(n)<<endl;

 return 0;
}