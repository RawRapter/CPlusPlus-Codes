/*
Given a vector of pairs of a string and an integer representing names and prices
of different fruits. A string is also passed as a parameter with name equals either
"price" , meaning you have to sort the fruits on the basis of their price or "name"
, which means you have to sort the fruit on the basis of their name.
*/

#include<bits/stdc++.h>
using namespace std;
bool sortbysec1(pair<string,int> a,pair<string,int> b)
{
    return (a.second < b.second);
}
vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
    if(S=="price")
    sort(v.begin(),v.end(),sortbysec1);
    else
    sort(v.begin(),v.end());
    return v;
}