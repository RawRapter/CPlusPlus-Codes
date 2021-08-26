#include<iostream>
using namespace std;
/*Converts number to binary i.e. get binary represntation*/
int convert_to_binary(int n){
    int ans = 0;
    int p = 1;
    while(n>0){
    int last_bit = (n&1);
    ans += p*last_bit;

    p *= 10;
    n = n>>1;}
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<convert_to_binary(n)<<endl;
 return 0;
}