#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
/*This Program is for basic usage of Map STL*/
int main() { 
    int n;
    //Making map variable
    map<string,int> mark;
    //taking input for number of commands
    cin>>n;
    for(int i =0;i<n;i++){
        int z,y;
        string x;
        cin>>z;
        //Z == 1 , when we want to insert an key value pair ,
        //if already exists then add new value to it's old value
        if(z == 1){
            cin>>x>>y;
            //first checking if it empty or not
            if(!mark.empty()){
            //not empty so adding new value to old
            mark[x] += y;}
            else{
                //empty so making new pair using make_pair
                mark.insert(make_pair(x,y));
            }
        }
        // z == 2 is for erase command
        else if(z == 2){
            cin>>x;
            mark.erase(x);
        }
        // else is for printing the value of the specific key
        else{
            cin>>x;
            cout<<mark[x]<<endl;
        }
    }
    
    return 0;
}