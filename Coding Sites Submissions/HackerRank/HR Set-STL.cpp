#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Basic Use of Set STL*/  
    set<int> s;
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x == 1){
            //For inserting element
            s.insert(y);
        }
        else if(x == 2){
            //For erasing element
            s.erase(y);
        }
        else{
            //for finding element
            set<int>::iterator itr=s.find(y);
            if(itr!=s.end())
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
    }
    return 0;
}