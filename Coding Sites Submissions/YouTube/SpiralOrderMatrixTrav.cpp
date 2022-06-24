#include<iostream>
#include<vector>
using namespace std;
/*Spiral Order Matrix Traversal
Problem: We have to print the given 2D matrix in the spiral order. Spiral
Order means that firstly, first row is printed, then last column is printed,
then last row is printed and then first column is printed, then we will come
inwards in the similar way.*/
int main()
{
    unsigned int n,m;
    cout<<"Enter Size of the matrix: "<<endl;
    cin>>n>>m;

    int a[n][m];

    cout<<"Enter all the elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }

    //Spiral
    int row_start = 0;
    int row_end = n-1;
    int col_start = 0;
    int col_end = m-1;

    while(row_start<=row_end && col_start<=col_end){
        //row start
        for(int col = col_start; col <= col_end; col++)
            cout<<a[row_start][col]<<" ";
        
        row_start++;

        //Column End
        for(int row = row_start; row <= row_end; row++)
            cout<<a[row][col_end]<<" ";
        
        col_end--;

        //row end
        for(int col = col_end; col >= col_start; col--)
            cout<<a[row_end][col]<<" ";
        
        row_end--;

        for(int row = row_end; row >= row_start; row--)
            cout<<a[row][col_start]<<" ";

        col_start++;

        
    }


 return 0;
}