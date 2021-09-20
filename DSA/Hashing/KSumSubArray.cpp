/*
K-Sum Subarray
In this challenge, we are given an array and we need to find out the length
of longest subarray whose sum is equal to given integer k.

Input:
arr = {0,-2,1,2,3,4,5,15,10,5}
k =15

Output: 4

Expect Compllexity: O(n)

Hint: Use Prefix Sums + unordered_map
*/

#include<bits/stdc++.h>
using namespace std;


int longestSubarrayKSum(vector<int> arr,int k){
    int n = arr.size();
	unordered_map<int,int> m;
	int pre = 0;

	int len = 0;

	for(int i=0;i<n;i++){
		pre += arr[i];

		if(pre==k){
			len = max(len,i+1);
		}

		if(m.find(pre-k)!=m.end()){
			len = max(len,i - m[pre-k]);
		}
		else{
			//store the first occ
			m[pre] = i;
		}

	}
	return len;

}