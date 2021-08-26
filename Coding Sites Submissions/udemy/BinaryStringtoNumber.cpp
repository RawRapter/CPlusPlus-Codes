/*
Convert Binary String to Decimal Number
*/

#include <iostream>
#include <string>
using namespace std;
 
int binaryToDecimal(string s)
{
    string num = s;
    int p = 1 , q = 0;
    int len = num.length();
    for(int i = len-1;i>=0;i--){
        if(num[i]=='1')
            q = q + p;
        p *= 2;
    }
    return q;
}
 