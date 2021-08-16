/*
Given two string A and B , Check if one string is palindrome of other.
*/

#include <bits/stdc++.h>
using namespace std;
 
bool arePermutation(string A, string B)
{
    int c=0;
    if(B.size() == 0 or A.size() == 0)
    return false;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<B.size();j++){
            if (A[i] == B[j]){
                c+=1;
            }
        }
    }
    if(c>=A.size())
    return true;
    else
    false;
    
}