#include<iostream>
using namespace std;
/*2D Array*/
//Passed by reference
void print(int arr[][100],int n,int m){
    for (int i = 0; i < n; i++)
    {
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[100][100];
    char arr1[][10]={"One","Two","Three","Four","Five","Six","Seven"};
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    print(arr,n,m);
    for(int i = 0; i < 7 ; i++){
    cout<<arr1[i]<<endl;
    }
    
 return 0;
}