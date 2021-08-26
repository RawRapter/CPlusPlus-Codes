#include<iostream>
using namespace std;
/*
to replace bits in N by M
you are given two 32 bit number, N and M, and thow position i and j.
Write a method two set all bits between i and j in N ,equal to M.

Example:
N = 100000000000;
M = 10101;
i = 2; j = 6;
Output: 1001010100

*/

//for clearing bits
void clearBitsInRange(int &n, int i, int j){
    int a = ((-1)<<(j+1));
    int b = (1<<i) - 1;
    int mask = a|b;
    n = n&mask;
}
void replacebits(int&n,int i,int j, int m){
    clearBitsInRange(n,i,j);
    int mask = m<<i;
    n = n & mask;
}
int main()
{
    int n=15;
    int i = 1;
    int j = 3;
    int m =2;

    replacebits(n,i,j,m);
    cout<<n<<endl;
 return 0;
}