/*
All Occurences:

We are given an integer array of size N. Your aim is to find all the occurences(indices)
of a given element.
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
void find(vector<int> v,int key,int i){
    if(i==v.size())
    return;
    
    if(v[i]==key)
    vec.push_back(i);
    
    find(v,key,i+1);
    return;
    
}
vector<int> findAllOccurences(int k, vector<int> v){
    vec.clear();
    find(v,k,0);
    return vec;
}