#include<iostream>
#include<vector>
#include "AnantHashing.h"

using namespace std;

/*
Name: Anant Arun || ID: 21205020 || M.tech 1st Year

Program: to find the duplicate values within a range ‘k’ in an array
using hashing. (Given an array and a positive number k, check whether the
array contains any duplicate elements within the range k. if k is more than
the array’s size, the solution should check for duplicates in the complete
array.)
*/
void duplicate(vector<int> &v, int k){
    //created two hash table one to insert elements, if duplicate occured within the range
    //then insert it to another hash table
    AnantHashing u;
    AnantHashing dup;
    int j;
    // to check range value
    if(k<v.size())
    j = k;
    else
    j = v.size();

    //looping for range
    for (int i = 0; i < j; i++)
    {
        //if not exist in hash table
        if(!u.search(v[i]))
        u.insert(v[i]);
        //if exists in has table
        else
        dup.insert(v[i]);
    }
    
    //printing the duplicate hash table values
    dup.print();
}
int main(){
    //making an array
    vector<int> v = { 5, 6, 8, 2, 4, 6, 9, 10, 11, 1, 3, 7, 8 };
    int range;
    cout<<"Anant Arun - 21205020 - Assignment 1 - Question 3"<<endl;
    cout<<"Enter End index as a range before which you want to check for duplicates: "<<endl;
    cin>>range;

    duplicate(v,range);
    return 0;
}