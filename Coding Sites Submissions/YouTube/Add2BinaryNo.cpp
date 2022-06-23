#include<iostream>
//#include<vector>
using namespace std;
/*Add two binary numbers*/

int reversee(int n){
    int ans = 0;
    while(n){
        int lastdigit = n%10;
        ans = ans*10 + lastdigit;
        n /= 10;
    }
    return ans;
}

int addBinary(int a,int b){
    int ans = 0, prevCarry = 0;

    while (a>0 && b>0)
    {
        if(a%2 == 0 && b%2 == 0){
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        else if((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0)){
            if(prevCarry == 1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
            ans = ans*10 + prevCarry;
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while (a)
    {
        if(prevCarry = 1){
            if(a%2 == 1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else
            ans = ans*10 + (a%2);
        a /=10;
    }
    
    while (b)
    {
        if(prevCarry = 1){
            if(b%2 == 1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else
            ans = ans*10 + (b%2);
        b /=10;
    }

    if(prevCarry == 1)
        ans = ans*10 + 1;

    ans = reversee(ans);
    return ans;
}

int main()
{
    int a = 1111, b = 0000;

    cout<<(addBinary(a,b));
 return 0;
}