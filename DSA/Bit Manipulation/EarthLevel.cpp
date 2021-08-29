/*
Earth Levels:
The planet earth is under threat from the aliens of the outer space and our task is to defeat
an enemy who is N steps above us(assuming us to be at ground level that is 0th level). We can take
jump in power of two . In order to defeat the enemy as quickly as possible you have to reach the
Nth step in minimum possible moves.
*/

#include<bits/stdc++.h>
using namespace std;
long long deciml_to_binary(unsigned long long int n){
    long long binary_number = 0;
    unsigned long long int remainder,i=1;
    while(n!=0){
        remainder = n%2;
        n = n/2;
        binary_number += remainder*i;
        i *= 10;
    }
    return binary_number;
}
int earthLevel(int k)
{
    unsigned long long int binary_number,sum=0;
    binary_number = deciml_to_binary(k);
    while(binary_number!=0){
         unsigned long long int x;
         x = binary_number%2;
         sum += x;
         binary_number /= 10;
    }
    return sum;
}