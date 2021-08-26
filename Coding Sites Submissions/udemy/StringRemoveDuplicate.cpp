/*
Remove Duplicates:
Given a string S, the task is to remove all the duplicates in the given string in sorted order
*/

#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    set<char> s1(s.begin(),s.end());
    string str;
    for(auto x:s1){
        str.push_back(x);
    }
    return str;
}