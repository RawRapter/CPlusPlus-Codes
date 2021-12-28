#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*Inbuilt search Find - it is linear search*/
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8};
    int key = 6;
    // Iterator concept is used, find function is passed to the
    // iterator with key to be found
    vector<int>::iterator it = find(v.begin(),v.end(),key);
    //if itrator reached the end that means key is not found
    if(it!=v.end())
    cout<<it - v.begin()<<endl; // This gives the index of the key found
    else
    cout<<"Elment not present"<<endl;
 return 0;
}