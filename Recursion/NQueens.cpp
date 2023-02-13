#include<bits/stdc++.h>
using namespace std;

//checking if queen can be filled
bool isSafe(int row, int col, vector<string> board,int n)
{
    //checking left row
    //col decreases
    int duprow = row;
    int dupcol = col;
    while(col >= 0)
    {
        if(board[row][col] == 'Q')
        {return false;}
        col--;
    }

    col=dupcol;
    row=duprow;
    //checking upper diagonal
    //col decreases and row decreases
    while(col >=0 && row >= 0)
    {
        if(board[row][col] == 'Q') return false;
        row--;
        col--;
    }
    col = dupcol;
    row = duprow;
    //checking lower diagonal
    //col decreases and row inc
    while( col>= 0 && row<n)
    {
        if(board[row][col] == 'Q') return false;
        row++;
        col--;
    }
    return true;
}
void solve(int col, vector<string> &board, int n, vector<vector<string>> &ans)
{
    //base condition when col == n that means that the queens are filled
    if(col == n)
    {
        ans.push_back(board);
        return;
    }
    //now looping for rows in each column
    for(int row = 0; row<n; row++)
    {
        //checkin if queen can be filled in that row of that col
        if(isSafe(row,col,board,n))
        {
            //filling Q in that place of row in col
            board[row][col] = 'Q';
            // doing it for next col
            solve(col+1,board,n,ans);
            //defilling
            board[row][col] = '.';

        }
    }
}
int main(void)
{
    int n =4;
    //cin>>n;
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n,'.');
    for(int i=0; i<n;i++)
    {
       board[i] = s;  
    }
    solve(0,board,n,ans);
    cout<<ans.size()<<endl;
    for(auto it: ans)
   {
    for(auto p: it)
    {
        cout<<p<<" ";
    }
    cout<<endl;
   }
    return 0;
}
