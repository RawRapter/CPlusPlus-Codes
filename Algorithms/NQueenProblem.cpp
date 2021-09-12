/*
N-Queen is the problem of playing N chess quess on an NxN chessboard
so that no two queens attack each other.

We need one queen for every row

Input:
N=4

Output:
2D matrix with queens

Variation for this problem:
- Print One COnfiguration - We did it here
- Print all configuration
- Count Possible configuration

Time Complexity - N**N
*/
#include<iostream>
using namespace std;

bool canPlace(int board[][20],int n ,int x , int y){
    //column
    for(int k = 0; k < x; k++){
        if(board[k][y]==1){
            return false;
        }
    }
    //left diagonal
    int i = x;
    int j = y;
    while(i>=0 and j>=0){
        if(board[i][j]==1)
        return false;

        i--;
        j--;
    }

    //right diagonal
    i = x;
    j = y;
    while(i>=0 and j<n){
        if(board[i][j]==1)
        return false;

        i--;
        j++;
    }

    return true;
}

void printBoard(int n, int board[][20]){
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
bool solveNQueen(int n,int board[][20], int i){
    //base case
    if(i == n){
        //print the board
        printBoard(n,board);
        return true;
    }

    //rec case
    //try to place queen in every row
    for (int j = 0; j < n; j++)
    {
        //checking wether the current i,j is safe place or not
        if(canPlace(board,n,i,j)){
            board[i][j] = 1; //adding queen
            bool success = solveNQueen(n,board,i+1);
            if(success) // sending above msg that config worked fine.
            return true;
        }
        //backtrack
        board[i][j] = 0; //removing queen
    }

    return false; //when entire row finished queen cannot be placed
}

int main()
{
    int board[20][20] = {0};
    int n;
    cin>>n;

    solveNQueen(n,board,0);

 return 0;
}