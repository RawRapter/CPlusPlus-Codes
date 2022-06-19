#include<iostream>
using namespace std;
/*
Write a program to print all the digits of a positive decimal
number from right to left
*/

int main()
{
    int n;
    cout<<"Enter a Digit: ";
    cin>>n;

    int rev=0,rem;

    while(n){
        rem = n%10;
        rev = rev*10 + rem;
        n/=10;
    }
    /*
    more simpler
    while(n){
        rem = n%10;
        cout<<rem;
        n/=10;
    }
    */
    cout<<"Reverse is: "<<rev<<endl;

 return 0;
}