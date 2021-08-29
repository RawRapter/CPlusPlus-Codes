/*
Given an Integer N. Your task is to return an integer vector
containing numbers from 1 to N in increasing order.
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
void print_numbers(int N){
    if(N==0)
    return;
    
    print_numbers(N-1);
    vec.push_back(N);
}
//another way
void help(int i, int n, vector<int> &v)
{
    if(i > n) return;
    v.push_back(i);
    help(i+1, n, v);
}
vector<int> increasingNumbers(int N) {
    vec.clear();
    print_numbers(N);
    return vec;
}