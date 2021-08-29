/*
Given n friends, each one can remain single or can be paired up with some other friend.
Each friend can be paired only once. Find out the total number of ways in which friends
can remain or single can be paired up.
*/

#include <iostream>
using namespace std;

int pairz(int n)
{
    if (n <= 0) return 0;
	if(n == 2 || n == 1) return n;
	return pairz(n - 1) + (n - 1) * pairz(n - 2);
}

int friendsPairing(int n){
    
    return pairz(n);
    
}