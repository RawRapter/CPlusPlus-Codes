#include<iostream>
#include<vector>
using namespace std;
/*Get set clear update function on bits*/
//Getting Ith Bit
int getIthbit(int n, int i){
    int mask = 1<<i;
    return (n&mask)>0 ? 1 : 0;
}

//setting a bit
void SetIthBit(int &n,int i){
    int mask = (1<<i);
    n = (n|mask);
}

//clearing a bit
void ClearithBit(int n, int i){
    int mask = ~(1<<i);
    n = n & mask;
}

//update ith bit
void updateIthbit(int &n,int i,int v){
    ClearithBit(n,i);
    int mask = (v<<i);
    n = n|mask;
}

// Clear last i bits
int clearlastIbits(int &n,int i){
    int mask = (-1<<i);
    n = n & mask;
}

//Clear range of Bits, range i(from left side) to j(from right side)
void clearBitsInRange(int &n, int i, int j){
    int a = ((-1)<<(j+1));
    int b = (1<<i) - 1;
    int mask = a|b;
    n = n&mask;
}

int main()
{
    int n= 5;
    int i;
    cin>>i;
    cout<<getIthbit(n,i)<<endl;

    SetIthBit(n,i);
    cout<<n<<endl;

    clearlastIbits(n,i);
    cout<<n<<endl;

 return 0;
}