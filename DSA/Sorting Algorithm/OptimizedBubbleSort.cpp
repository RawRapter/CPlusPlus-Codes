#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
    // your code  goes here
    for (int times=0; times<v.size()-1; times++)
    {
        bool flag = false;
        for(int j=0; j<=v.size()-times-1; j++){
            if(v[j]>v[j+1]){
                flag = true;
                swap(v[j],v[j+1]);
                
            }
        }
        if(flag == false){
            break;
        }
    }
    return v;
}
int main()
{
    vector<int> arr = {5,4,3,2,1};
    arr = optimizedBubbleSort(arr);
    for(auto x : arr){
        cout<<x<<", ";
    }
 return 0;
}