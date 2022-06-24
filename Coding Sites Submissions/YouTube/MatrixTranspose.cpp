#include<iostream>

using namespace std;
/*Problem
Given a square matrix A & its number of rows (or columns) N, return the
transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal,
switching the row and column indices of the matrix.

Constraints
1 <= N <= 1000
Sample Input1
A = [
[1,2,3],
[4,5,6],
[7,8,9]
]
N = 3
Sample Output1
A = [
[1,4,7],
[2,5,8],
[3,6,9]
]
*/

int main()
{
    int n;
    cin>>n;

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }

    //transposing
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            swap(a[i][j],a[j][i]);
        }
    }

    //Printing
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

 return 0;
}