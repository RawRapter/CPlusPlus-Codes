/*
Array Intersection
Given two integer arrays num1 and num2 , return an array of their intersection . Each
element in the result must be unique and may return the result vector in sorted ordereeeee.
*/
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> result;

        for(int i = 0 ; i < nums1.size() ; i++){
            m[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if(nums2[i]>0){
                result.push_back(nums2[i]);
                m[nums2[i]] = 0;
            }
        }
        sort(result.begin(),result.end());
        return result;
    
}

/* int main(){
    vector<int> v1 = {1,2,2,1};
    vector<int> v2 = {2,2};

    std::cout<<intersection(v1,v2)<<endl;
} */