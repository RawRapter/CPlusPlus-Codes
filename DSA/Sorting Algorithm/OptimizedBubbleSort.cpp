#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
    /* Using flag here , if flag remains false when
     inner loop is completed without going to 'if' block
     then the array is already sorted
     this method reduces the number of iteration */
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
    // cout<<arr.size()<<endl;
    arr = optimizedBubbleSort(arr);
    for(auto x : arr){
        cout<<x<<", ";
    }
 return 0;
}