#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() { 
    int n;
    map<string,int> mark;
    cin>>n;
    for(int i =0;i<n;i++){
        int z,y;
        string x;
        cin>>z;
        if(z == 1){
            cin>>x>>y;
            if(!mark.empty()){
            mark[x] += y;}
            else{
                mark.insert(make_pair(x,y));
            }
        }
        else if(z == 2){
            cin>>x;
            mark.erase(x);
        }
        else{
            cin>>x;
            cout<<mark[x]<<endl;
        }
    }
    
    return 0;
}