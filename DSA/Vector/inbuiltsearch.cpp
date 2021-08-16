#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*Inbuilt search Find - it is linear search*/
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8};
    int key = 6;
    vector<int>::iterator it = find(v.begin(),v.end(),key);
    if(it!=v.end())
    cout<<it - v.begin()<<endl;
    else
    cout<<"Elment not present"<<endl;
 return 0;
}