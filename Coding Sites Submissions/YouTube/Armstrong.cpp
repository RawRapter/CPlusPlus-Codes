#include<iostream>
#include<math.h>
using namespace std;
/*Write a program to check if a number is Armstrong number*/
int main()
{
    int n;
    cin>>n;

    double orig=n;
    double calc=0;
    int c=0;

    while (n)
    {
        n /= 10;
        c++;
    }
    //cout<<"c value: "<<c<<endl;
    n = orig;
    while(n){
        double rem = n%10;
        //cout<<rem<<endl;
        //cout<<"Cube: "<<pow(rem,c)<<endl;
        calc += pow(rem,c);
        //cout<<calc<<endl;
        n /= 10;
    }
    //cout<<n<<" "<<orig<<" "<<calc<<endl;

    if(orig == calc)
    cout<<"Armstrong Number";
    else
    cout<<"Not Armstrong";

 return 0;
}

/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int originaln = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum == originaln)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "not armstrong" << endl;
    }
    return 0;
}
*/