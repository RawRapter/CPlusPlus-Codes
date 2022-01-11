/*
Reverse a Number Using Stack

Input: In the function an integer is passed
456

Output: Return an Integer
654
*/
#include <bits/stdc++.h>
using namespace std;

int reverse(int no){
    int n = no;
	stack<int> i;
	int j;
	while(n!=0){
	    j = n%10;
	    i.push(j);
	    n = n/10;
	}
	int rev = 0;
	int k = 1;
    while(!i.empty()){
        rev = rev + (k*i.top());
        i.pop();
        k = k*10;
    }
    return rev;
}