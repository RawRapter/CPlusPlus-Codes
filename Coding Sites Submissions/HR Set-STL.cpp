#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    set<int> s;
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x == 1){
            s.insert(y);
        }
        else if(x == 2){
            s.erase(y);
        }
        else{
            set<int>::iterator itr=s.find(y);
            if(itr!=s.end())
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
    }
    return 0;
}