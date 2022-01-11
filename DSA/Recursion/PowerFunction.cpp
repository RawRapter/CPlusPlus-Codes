/*
Power Function:
function to find a power of a number , both number and power given as input
*/

#include<iostream>
using namespace std;

//Normal Method
int power(int a, int n){
    //base case
    if(n==0)
    return 1;

    //Recursive Case
    return a*power(a,n-1);
}

//Optimized Method takes half time O(logn)
int fast_power(int a, int n){
    //base case
    if(n==0)
    return 1;

    //Recursive Case
    int sub_problem = fast_power(a,n/2);
    int sub_problem_sq = sub_problem*sub_problem;
    if(n&1) //if n is odd then one more call for sub_problem_sq
    return a*sub_problem_sq;
    return sub_problem;
    
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<power(a,n)<<endl;
    cout<<fast_power(a,n)<<endl;

 return 0;
}