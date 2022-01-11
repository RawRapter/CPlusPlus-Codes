#include<iostream>
using namespace std;
/*Check even odd by checking last bit, if last bit 1 then it is odd
doing and with 00000001*/
int main()
{
    int x;
    cin>>x;
    if(x&1) //If output is 1 then Odd
    cout<<"Odd";
    else
    cout<<"Even";
 return 0;
}