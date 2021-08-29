/*
Modulo Exponentiation:
Given three numbers x,y and mod, compute x raise to power y modulo mod i.e. (x^y)%mod.
*/
#include <iostream>
#include<math.h>
using namespace std;
 
 
int power(int x, int y, int mod)
{
    // Intializing result
    int result = 1;
    //reducing x if it is bigger than equal to mod
    x = x%mod;
    //if x was divisible by mod then directly 0
    if(x==0) return 0;
    
    while(y>0){
        //if last bit one or y is odd
        if(y&1)
        result = (result*x)%mod;
        
        x = (x*x)%mod;
        y = y>>1;
        
    }
    
    return result;
}