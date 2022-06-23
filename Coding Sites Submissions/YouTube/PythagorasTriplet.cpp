#include<iostream>
#include<cmath>
using namespace std;
/*Check Pythagorian Triplet*/
int main()
{
    int x,y,z;
    cout<<"Enter Value of x,y,z: ";
    cin>>x>>y>>z;

    int b,c;
    int a = max(x,max(y,z));

    if(a==x){
        b = y;
        c = z;
    }
    else if(a == y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }

    cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;

    if(pow(a,2) == pow(b,2) + pow(c,2))
    cout<<"Numbers are pythogorian triplet."<<endl;
    else
    cout<<"Not a Pythogorian Triplet."<<endl;


 return 0;
}