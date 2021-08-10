#include<iostream>
using namespace std;
/*Spiral Print
Write a function that takes in n x m 2D Array , and prints the all array elements in spiral order.
Start from top left corner to right, proceeds in a spiral pattern until every element is visited.
*/
void print_spiral(int arr[][10],int n,int m){
    int startrow = 0;
    int endrow = n-1;
    int startcol = 0;
    int endcol = m-1;
    while(startcol<=endcol and startrow<=endrow){
        //start row
        for (int col = startcol; col<=endcol; col++)
        {
            cout<<arr[startcol][col]<<" ";
        }
        
        //endcol
        for (int row = startrow+1; row <=endrow; row++)
        {
            cout<<arr[row][endcol]<<" ";
        }
        
        //endrow
        for(int col=endcol-1;col>=startcol;col--){
            if(startrow==endrow)
            break;
            cout<<arr[endrow][col]<<" ";
        }

        //startcol
        for(int row = endrow-1;row>=startrow+1;row--){
            if(startcol==endcol)
            break;
            cout<<arr[row][startcol]<<" ";
        }
        //changing positions
        startrow++;
        endrow--;
        startcol++;
        endcol--;
    }
}
int main()
{
    int arr[][10]={{1,2,3,4}
                    ,{12,13,14,5}
                    ,{11,16,15,6}
                    ,{10,9,8,7}};
    
    int n = 4, m = 4;
    print_spiral(arr,n,m);
 return 0;
}