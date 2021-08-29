/*
Tiling Problemn:
You are given N Tiles of size 1xM, there is a floor of size NxM , which I have to 
cover with tiles. Find the number of ways the floor can be completely covered if you can
place the tiles in both horizontal and vertical manner.
*/

//Expected Time Complexity: O(2^n)

#include <iostream>
using namespace std;

int tiles(int n,int m){
    if(n<m) return 1;
	int op1 = tiles(n-1, m);
	int op2 = tiles(n-m, m);
	return (op1 + op2);
}

int tillingProblem(int n, int m){
    return tiles(n, m);
}