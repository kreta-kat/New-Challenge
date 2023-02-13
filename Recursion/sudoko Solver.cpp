#include <bits/stdc++.h> 
using namespace std;

bool isValid(vector<vector<char>> & board, int row, int col, char c)
{
    for(int i=0; i<9;i++)
    {
        if(board[row][i] == c) return false;
        if(board[i][col] == c) return false;
        if(board[ 3*(row/3) + i/3][3*(col/3) + i%3] == c) return false;

    }
     return true;
}

bool solve(vector<vector<char>> &board)
{
    //iterating the whole board
    for(int i=0; i<board.size();i++)
    {
        for(int j=0; j<board[0].size();j++)
        { 
            if(board[i][j] == '.')  //empty space found
            { 
                //checking which no can be filled
                 for(char c = '1'; c <= '9'; c++)
                 {
                    if(isValid(board,i,j,c) == true)
                        {
                            //fillig it with no
                            board[i][j] = c;
                            //moving it to next recursions
                            if(solve(board) == true)
                            {return true;}
                            else
                            {
                            //defilling it if the next recursion fails
                            board[i][j] = '.';
                            }
                        }
                 }
                 //if no number can be placed at that place
            return false;
            }
        }
    }
    return true;
}
void solveSudoko(vector<vector<char>> &board)
{
    solve(board);
}


int main(void)
{
    vector<vector<char>> board;
    board = { { '3', '1', '6', '5', '7', '8', '4', '9', '2'},
{ '5', '2', '9', '1', '3', '4', '7', '6', '8' },
{ '4', '8', '7', '6', '2', '9', '5', '3', '1' },
{ '2', '6', '3', '.', '1', '5', '9', '8', '7' },
{ '9', '7', '4', '8', '6','.', '1', '2', '5' },
{ '8', '5', '1', '7', '9', '2', '6', '4', '3'},
{ '1', '3', '8', '.', '4', '7', '2', '.', '6'},
{ '6', '9', '2', '3', '5', '1', '8', '7', '4' },
{ '7', '4', '5', '.', '8', '6', '3', '1', '.' } };
solveSudoko(board);
for(auto it: board)
   {
    cout<<"{ ";
    for(auto p: it)
    {
        cout<<p<<" ";
    }
    cout<<" }";
    cout<<endl;
}
return 0;
}
