#include<iostream>
using namespace std;
/*Template Function practice*/
template<class T1, class T2>
float funcavg(T1 a,T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

template<class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    float a;
    int b=6,c=7;
    a = funcavg(5,2);
    cout<<a<<endl;
    swapp(b,c);
    cout<<b<<" "<<c<<endl;
    return 0;
}