#include<iostream>
#include<vector>
using namespace std;
/*Check even odd by checking last bit, if last bit 1 then it is odd
doing and with 00000001*/
int main()
{
    int x;
    cin>>x;
    if(x&1)
    cout<<"Odd";
    else
    cout<<"Even";
 return 0;
}