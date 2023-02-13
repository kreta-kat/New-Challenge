//optimized sol
#include<bits/stdc++.h>
using namespace std;

void solve(int col, vector<string> &board, int n, vector<vector<string>> &ans, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> lowerDiagonal)
{
    if(col == n)
    {
        ans.push_back(board);
        return;
    }

    for(int row=0; row<n;row++)
    {
        //checking cond to check if queen is occupied or now
        //using differet sets lowerdiagonal = row+col ; upperdiagonal = n-1+ (col-row)
        if(leftRow[row] == 0 && lowerDiagonal[row+col] == 0 && upperDiagonal[(n-1) + col-row] == 0)
        {
            //if true
            board[row][col] = 'Q';
            leftRow[row] = 1;
            lowerDiagonal[row+col] = 1;
            upperDiagonal[(n-1) + (col-row)] = 1;
            solve(col+1,board,n,ans,leftRow,upperDiagonal,lowerDiagonal);
            //returning from the recursion
            board[row][col] = '.';
            leftRow[row] = 0;
            lowerDiagonal[row+col] = 0;
            upperDiagonal[(n-1) + (col-row)] = 0;
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
    //taking a row set to check which rows are filled in previous
    vector<int> leftRow(n,0);
    //taking upper diagonal set of length 2*n-1
    vector<int> upperDiagonal(2*n-1, 0);
    //taking lower diagonal set of length 2*n-1
    vector<int> lowerDiagonal(2*n-1, 0);
    solve(0,board,n,ans,leftRow,upperDiagonal,lowerDiagonal);
    cout<<ans.size()<<endl;
    for(auto it: ans)
   {
    for(auto p: it)
    {
        cout<<p<<" ";
    }
    cout<<endl;
   }

}
