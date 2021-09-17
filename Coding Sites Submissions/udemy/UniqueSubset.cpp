/*
Unique Subeset

Given an integer array nums that may contain duplicates , return all possible subset ( the power of set)
The solutionset must not contain duplicate subsets. Return the solution in ascending order

Input:
In the function an integer vector is passed.

Output:
return vector of vector containing unique subset.
*/
#include <bits/stdc++.h>
using namespace std;
set<vector<int>> s;

void recur(vector<int> &nums, vector<int> ans, int i)
{
    if(i == nums.size()){
        sort(ans.begin(), ans.end());
        s.insert(ans);
        return;
    }
    
    ans.push_back(nums[i]);
    recur(nums, ans, i+1);
    ans.pop_back();
    recur(nums, ans, i+1);
}

vector<vector<int>> uniqueSubsets(vector<int> nums){
    s.clear();
    vector<int> ans;
    recur(nums, ans, 0);
    vector<vector<int>> v;
    for(auto x : s) 
        v.push_back(x);
    return v;
}