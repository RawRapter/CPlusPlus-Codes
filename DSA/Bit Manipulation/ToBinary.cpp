#include<iostream>
using namespace std;
/*Converts number to binary i.e. get binary represntation*/
int convert_to_binary(int n){
    int ans = 0;
    int p = 1;
    while(n>0){
    int last_bit = (n&1); // Getting last bit
    ans += p*last_bit; //adding last bit to answer to it's place

    // increasing value of p by multiplying it by 10 with each iteration
    // This has been done to maintain the location of the bit
    p *= 10; 
    n = n>>1; //right shifting the number to work on next bit
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<convert_to_binary(n)<<endl;
 return 0;
}