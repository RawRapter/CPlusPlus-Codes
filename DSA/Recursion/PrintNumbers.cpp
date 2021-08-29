#include<iostream>
#include<vector>
using namespace std;
/*Printing number 1 to N using recursion method*/
void print_numbers_decreasing(int n){
    //base
    if(n==0)
    return;
    //recursive case, first print then go towards base case
    cout<<n<<" ";
    print_numbers_decreasing(n-1);
}

void print_numbers_increasing(int n){
    //base
    if(n==0)
    return;
    //recursive case, first go towards base case then print
    print_numbers_increasing(n-1);
    cout<<n<<" ";
    
}
int main()
{
    int n;
    cin>>n;
    print_numbers_decreasing(n);
    cout<<endl;
    print_numbers_increasing(n);

 return 0;
}