/*
Make Zeroes:
Given two dimensional array , if any element within is zero, make its whole
row and column zero.
*/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    // creating vector to store row and column indexes
    vector<int> r,c;

    // storing row size
    int n = arr.size();
    //storing column size
    int m = arr[0].size();
    
    //Loop to store indexes of all places containing zero
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j]==0)
            {r.push_back(i);
            c.push_back(j);
            }
        }
    }
    
    //making all row zero
    for(auto x: r){
        for(int i = 0; i < n; i++)
        arr[x][i] = 0;
    }
    //making all column zero
    for(auto x: c){
        for(int j = 0; j < n; j++)
        arr[j][x] = 0;
    }
    return arr;
}