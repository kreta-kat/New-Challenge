#include <bits/stdc++.h> 
using namespace std;

void solve(int i, int j, vector<vector<int>> &m, int n, vector<vector<int>> &visited, vector<string> &ans, string pattern)
{
    if(i == n-1 && j == n-1)
    {
        ans.push_back(pattern);
        return;
    }
    //for 4 directions  DLRU -- lexographical order
    //i= ROW; j=COLUMN
    //Downward
    //To check if moving downward is less than n && the element is not visited && the element can be accessed by the rat
    if(i+1<n && !visited[i+1][j] && m[i+1][j] == 1)
    {
       visited[i+1][j] =1;
       //pattern = pattern+"D";
       solve(i+1,j,m,n,visited,ans,pattern+"D");
       //backtracking to perform other directions
       visited[i+1][j] = 0;
    }
    //Left
    //TO move left row same col dec
    if(j-1>=0 && !visited[i][j-1] && m[i][j-1] == 1)
    {
        visited[i][j-1] =1;
        solve(i,j-1,m,n,visited,ans,pattern+"L");
        visited[i][j-1] =0;
    }
    //Right
    //to move right row same, col increases
    if(j+1<n && !visited[i][j+1] && m[i][j+1] == 1)
    {
        visited[i][j+1] =1;
        solve(i,j+1,m,n,visited,ans,pattern+"R");
        visited[i][j+1] =0;
    }
    //Upward
    //row dec and col same
    if(i-1>=0 && !visited[i-1][j] && m[i-1][j] == 1)
    {
        visited[i-1][j] =1;
        solve(i-1,j,m,n,visited,ans,pattern+"U");
        visited[i-1][j] =0;
    }
}

int main()
{
    int n =4;
    vector<vector<int>> m;
    m = {{ 1, 0, 0, 0 },
                       { 1, 1, 0, 1 },
                       { 0, 1, 0, 0 },
                       { 1, 1, 1, 1 }};
    //visited array
    vector<vector<int>> visited(n, vector<int>(n,0));
    vector<string> ans;
    //first check if start index has access or not
    if(m[0][0] == 1)
    {
        // empty string to get direction pattern
        solve(0,0,m,n,visited,ans,"");
    }
    for(auto it:ans)
    {
        for(auto p:it)
        {
            cout<<p<<" ";
        }
        cout<<endl;
    }

    return 0;
}
