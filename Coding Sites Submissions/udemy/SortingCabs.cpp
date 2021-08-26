/*
Sorting Cabs:
Given a vector of pairs representing coordinates x and y of different cabs on a x-y plane.
Sort them according to their distance from the origin in the non-decreasing order i.e. the cab
with shortest distance from the origin will be at first.

*/

#include<bits/stdc++.h>
using namespace std;
//Not correct but give result
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return ((a.first + a.second) < (b.first + b.second));
}
//exact
bool comp(pair<int,int> a, pair<int, int> b){
    float x = sqrt((a.first*a.first) + (a.second*a.second));
    float y = sqrt((b.first*b.first) + (b.second*b.second));
    return x < y;
}
vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
    sort(v.begin(),v.end(),sortbysec);
    return v;
    
}