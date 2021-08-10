#include<iostream>
using namespace std;
/*Template Class Practice*/
template <class T=int>
class vector{
    T x;
    public:
    vector(T x1)
    {
        x = x1;
    }
    void display()
    {
        cout<<this->x<<endl;
    }
};
int main()
{
    vector<> v1(5);
    vector<float> v2(5.5);
    vector<char> v3('a');
    v1.display();
    v2.display();
    v3.display();
    return 0;
}