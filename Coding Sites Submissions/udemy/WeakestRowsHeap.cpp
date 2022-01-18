/*
Weakest Rows
You are given an MxN matrix of 1's(representing soldiers) and 0'2(representing civillians)
. The Soldiers are positioned in front of the civillians. That is, all the 1's will appear to
the left of all the 0's in each row.
A row i is weaker than row j of one of the following is true:
- The Number of soldiers in row i is less than number of soldiers in row j.
- Both rows have same number of soldiers and i < j.
Return the indices of k weakest rows in the matrix orderede from weakest to strongest.

Sample Input:
m = 4
n = 4
[[1,0,0,0],
[1,1,1,1],
[1,0,0,0],
[1,0,0,0]]

k = 2

Sample Output:
[0,2]
*/
#include<bits/stdc++.h>
using namespace std;


vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq; //Min-heap
        for(int i=0;i<mat.size();i++)
        {
            int count=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                {
                    count++; //Counting the soldiers
                }
            }
            pq.push(make_pair(count,i));
        }
        vector<int> x;
        while(k>0)
        {
            pair<int,int> temp=pq.top();
            x.push_back(temp.second);
            pq.pop();
            k--;
        }
        return x;
    }