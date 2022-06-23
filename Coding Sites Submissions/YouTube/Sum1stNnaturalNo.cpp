#include<iostream>

using namespace std;
/*Sum of First N natural numbers*/
int sumloop(int n){
    int ans=0;
    for (int i = 1; i <=n; i++)
    {
        ans+=i;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;

    int sum = n*(n+1)/2;
    cout<<"Sum of first "<<n<<" Number is "<<sum;

 return 0;
}