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
// Rotating the element by k times
vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    rotate(a.begin(), a.begin()+a.size()-k, a.end());
    return a;
    
}
// sorting
vector<int> sortingWithComparator(vector<int> a, bool flag){
    // In main function currently didn't provided anything , if want to run add some codes in main
    sort(a.begin(),a.end());
    if (flag== true){
        return a;
    }
    else{
        reverse(a.begin(),a.end());
        return a;
    }
}

//Comparing when coordinates are given
// In main function currently didn't provided anything , if want to run add some codes in main
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first == b.first ? a.second<b.second:a.first<b.first;
}
vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    sort(v.begin(),v.end(),cmp);
    return v;
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
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
} 