#include<iostream>
#include<cmath>
using namespace std;
/*Write a program to display all factors of a number.*/
bool primecheck(int n){
    for (int i = 2; i < sqrt(n); i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void factors(int n){
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;

    if(primecheck(n))
    cout<<"Factor is 1 & "<<n;
    else
    factors(n);
 return 0;
}