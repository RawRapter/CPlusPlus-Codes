/*
Binary String to Number:
Given a binary as input, convert into its decimal form and return it as an integer.
*/
#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    string str;
    for(auto x: S){
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        str.push_back(x);
    }
    return str;
} 