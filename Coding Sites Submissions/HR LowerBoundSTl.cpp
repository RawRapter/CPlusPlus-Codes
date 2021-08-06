#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int start_up(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = start_up();
#define endl '\n';
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,ele,y,z;
    vector<int> v;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
    }
    cin>>y;
    for(int i=0;i<y;i++){
        cin>>z;
        int flag = 0;
        vector<int>::iterator low;
        low = lower_bound(v.begin(),v.end(),z);
        if((*low == z) || (*(low+1)== z)){
                cout<<"Yes ";
        }
        else{
            cout<<"No ";
        }
        cout<<low - v.begin() + 1 <<'\n';
    }
    return 0;
}