#include<iostream>
using namespace std;
/*Checking if a number is power of 2*/
int main()
{
    int n;
    cin>>n;
    if(n & (n-1) == 0) // As it will never be odd if n is power of 2
    cout<<"Power of 2";
    else
    cout<<"Not a Power of 2";
 return 0;
}