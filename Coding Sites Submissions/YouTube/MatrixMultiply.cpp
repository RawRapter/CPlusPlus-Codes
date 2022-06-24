#include<iostream>

using namespace std;
/*Problem
Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
multiply these matrices and output the multiplied matrix.
Constraints
1 <= n1,n2,n3 <= 1,000*/
int main()
{
    int n1,n2,n3;

    cin>>n1>>n2>>n3;

    int a[n1][n2];
    int b[n2][n3];
    int ans[n1][n3];

    cout<<"Enter first matrix"<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter second matrix"<<endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin>>b[i][j];
        }
    }

    //Intialising to 0
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }

    for(int i = 0; i < n1; i++)
        for(int j = 0; j < n3; j++)
            for(int k = 0; k < n2; k++)
                ans[i][j] += a[i][k] * b[k][j];
    

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }    
 return 0;
}