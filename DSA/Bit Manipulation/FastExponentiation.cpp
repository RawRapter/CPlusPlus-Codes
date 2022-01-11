#include<iostream>

using namespace std;
/*Fast Exponentiation finding value in faster way using bits in O(logn) */

int fast_expo(int a, int n){
    int ans = 1;
    while(n>0){
        int last_bit = n&1;
        if(last_bit){
            ans = ans * a;
        }
        a = a*a; //doubling a with each iteration
        n = n>>1; //shifting bit to right in n
    }
    return ans;
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<fast_expo(a,n)<<endl;

 return 0;
}