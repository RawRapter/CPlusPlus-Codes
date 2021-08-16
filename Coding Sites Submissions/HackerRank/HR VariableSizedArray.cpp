/*
Input Format

The first line contains two space-separated integers denoting the respective
values of n (the number of variable-length arrays) and q (the number of queries).
Each line i of the n subsequent lines contains a space-separated sequence 
in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
Each of the q subsequent lines contains two space-separated integers describing 
the respective values of i (an index in array a ) and j (an index in the array referenced by ) for a query.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    int** arr = new int*[n];
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr[i] = new int[k];
        for(int j = 0; j < k; j++){
            int z;
            cin>>z;
            arr[i][j] = z;
        }
    }
    for(int i=0;i<q;i++){
        int s1,s;
        cin>>s1>>s;
        cout<<arr[s1][s]<<endl;
    }
    return 0;
}