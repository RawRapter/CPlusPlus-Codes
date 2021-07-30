#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
/*WVector Practice*/
void display(vector<int> &v);
//largest elemnt function
int largestElement(vector<int> arr) {
    return *max_element(arr.begin(),arr.end());
     
}
vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    rotate(a.begin(), a.begin()+a.size()-k, a.end());
    return a;
    
}
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
    cout<<largestElement(v1)<<endl;

    return 0;
}
//display function
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
} 