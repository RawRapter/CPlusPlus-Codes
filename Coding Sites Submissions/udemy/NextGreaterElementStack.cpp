/*
Next Greater Element
Given an array, return the next greater element for every element.
The next greater element for an x is the first greater element on the
right side of x in the array. Elements for which no greater element 
exist, consider the next greater element as -1.

Input: {4,5,2,25}
Output: 5,25,25,-1
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> arr){
    int n = arr.size();
    vector<int> v1(n, 0);
    stack<int> s;
 
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= arr[i])
            s.pop();
 
        if (s.empty())
            v1[i] = -1;        
        else
            v1[i] = s.top();       
 
        s.push(arr[i]);
    }
        
    return v1;
}

int main(){
    vector<int> v={4,5,2,25},vk;
    vk = nextGreaterElement(v);
    for(int i = 0 ; i < vk.size() ; i++)
    cout<<vk[i]<<" ";
    return 0;
}