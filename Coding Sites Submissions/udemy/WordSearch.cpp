/*
Word Search

Given an MxN grid of characters board and a string word , return true if word exists in the grid.
The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are 
horizontally or vertically neighboring. The same letter cell may not be used more than once.

Input:
In the function 2-D Vector of character is passed.

Output:
Return true if the word is present otherwise false.
*/
#include <bits/stdc++.h>
using namespace std;
bool chk;
void recur(vector<vector<char>>& board, string &word, int i, int j, int k)
{
    if(k == word.size())
    {
        chk = true;
        return;
    }
    if(i < 0 || j < 0 || i == board.size() || j == board[0].size() || board[i][j] == '-1')
        return;
    
    if(board[i][j] == word[k])
    {
        char c = board[i][j];
        board[i][j] = '-1';
        recur(board, word, i, j+1, k+1);
        recur(board, word, i+1, j, k+1);
        recur(board, word, i, j-1, k+1);
        recur(board, word, i-1, j, k+1);
        board[i][j] = c;
    }
    return;
}
bool wordSearch(vector<vector<char>> &board, string word)
{
    chk  = false;
    for(int i=0; i<board.size(); i++)
    {
        for(int j=0; j<board[0].size(); j++)
        {
            if(board[i][j]==word[0])
                recur(board, word, i, j, 0);
        }
    }
    
    return chk;
}