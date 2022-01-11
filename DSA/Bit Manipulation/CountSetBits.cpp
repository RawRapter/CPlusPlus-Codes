#include<iostream>
using namespace std;
/*Count Set bits in the number O(logn)*/
int countBits(int n){ // Here, numner of iteration is the length of the number in binary.
    int count = 0;
    while(n>0){
        int last_bit = (n&1); // Storing last bit
        count += last_bit; // count value increases if the last bit is one
        n = n>>1; // shifting bits to right
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