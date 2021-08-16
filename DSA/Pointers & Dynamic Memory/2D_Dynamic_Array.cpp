#include<iostream>
using namespace std;
/*2D Dynamic Array*/
int ** create_2D_array(int rows, int cols){
    //allocating memory for rows storing addresses for all rows
    int** arr = new int*[rows];
    //allocating memory for each row
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    
    //intitializing the array with increasing numbers
    int value = 0;
    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++){
            arr[i][j] = value;
            value++;
        }
    }
    
    return arr;
}
int main()
{
    int rows,cols;
    cin>>rows>>cols;

    int **arr = create_2D_array(rows,cols);

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

 return 0;
}