#include<iostream>
#include<vector>
using namespace std;
/*WVector Practice*/
void display(vector<int> &v);
int main()
{
    vector<int> v1;

    int ele;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<"Enter element: "<<endl;
        cin>>ele;
        v1.push_back(ele);
    }
    display(v1);
    vector<int>::iterator iter = v1.begin();
    v1.insert(iter,420);
    display(v1);
    vector<int>::iterator iter1 = v1.end();
    v1.insert(iter1,9211);
    display(v1);
    return 0;
}
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
} 