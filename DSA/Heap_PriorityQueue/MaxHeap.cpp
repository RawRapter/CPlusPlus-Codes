/*
Maximum Product
Given the array of integer nums, we will choose two different indices i & j
of that array.
return the maximum value of (nums[i]-1)*(nums[j]-1)
*/
#include<bits/stdc++.h>
using namespace std;


int maxProduct(vector<int>& nums) {
        priority_queue<int> q;
        for(int i=0; i<nums.size(); i++){
            q.push((nums[i]-1));
        }
        
        int p=q.top();
        q.pop();
        return p*q.top();
}

int maxProduct(vector<int>& nums) {
    priority_queue<int> heap;
    
    for(int x: nums){
        heap.push(x);
    }
    int sum = 1,i=0;
    while(i<2){
        sum *= (heap.top()-1);
        heap.pop();
        i++;
    }
    return sum;
}