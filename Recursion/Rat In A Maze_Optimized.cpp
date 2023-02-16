#include <bits/stdc++.h> 
using namespace std;

void solve(int i, int j, vector<vector<int>> &m, int n, vector<vector<int>> &visited, vector<string> &ans, string pattern, int di[], int dj[])
{
    if(i == n-1 && j == n-1)
    {
        ans.push_back(pattern);
        return;
    }
    string dir_p = "DLRU";
   
   for(int ind=0; ind<4;ind++)
   {
    //considering next i and j
     int next_i = i+di[ind];
     int next_j = j+dj[ind];
     //checking the conditions
     if(next_i>=0 && next_j>=0 && next_i<n && next_j<n && !visited[next_i][next_j] && m[next_i][next_j] == 1)
     {
        visited[i][j] = 1;
        //adding dir_p[ind] i.e. D/L/R/U
        solve(next_i,next_j,m,n,visited,ans,pattern + dir_p[ind], di,dj);
        visited[i][j] = 0;
     }

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
    //direction array =  DLRU
          //i = +1 , 0, 0, -1
          //j =  0, -1 ,+1, 0
   
    int di[] = {1,0,0,-1};
    int dj[] = {0,-1,1,0};

    //first check if start index has access or not
    if(m[0][0] == 1)
    {
        // empty string to get direction pattern
        solve(0,0,m,n,visited,ans,"",di,dj);
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
