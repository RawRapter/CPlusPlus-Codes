/*
We are given an array containing n numbers, all the numbers are present twice except one
number which is present only once. Find the unique number wuthout taking any extra space.
*/
#include<bits/stdc++.h>
using namespace std;

int xoring(vector<int> v)
{
    int output = 0;
    for(auto x: v)
    output ^= x;
    return output;
}