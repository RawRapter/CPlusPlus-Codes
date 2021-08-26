#include<iostream>
using namespace std;
/*Count Set bits in the number O(logn)*/
int countBits(int n){
    int count = 0;
    while(n>0){
        int last_bit = (n&1);
        count += last_bit;
        n = n>>1;
    }
    return count;
}

//faster method , here number of iteration is equal to number of bits
int count_bits_hack(int n){
    int ans = 0;
    while(n>0){
        //removes last set bit from current number
        n = n & (n-1);
        ans++;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<countBits(n)<<endl;
    cout<<count_bits_hack(n)<<endl;
 return 0;
}