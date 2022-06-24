#include<iostream>

using namespace std;
/*Creating basic 2D array*/
int main()
{
    int n,m;
    cout<<"Enter Matrix size nxm: "<<endl;
    cin>>n>>m;

    int x;
    

    int a[n][m];

    cout<<"Enter all the elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter element that you want to find: "<<endl;
    cin>>x;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j] == x)
            {
            cout<<"Element Found at "<<i<<","<<j<<" Location"<<endl;
            return 0;
            }
        }
    }
    cout<<"Element Not Found"<<endl;
    
 return 0;
}