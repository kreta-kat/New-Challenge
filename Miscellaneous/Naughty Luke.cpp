#include <bits/stdc++.h> 
vector<vector<int>> getFinalGrid(vector<vector<int>> &a, int n) {
    // Write your code here.
    //vector<vector<int>> ans;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n/2;j++)
        {
           //swap
           swap(a[i][j], a[i][n-j-1]);     
        }
        //twist
        for(int k =0; k<n;k++)
        {
           if(a[i][k] == 1)
           {
               a[i][k] =0;
           }
           else
           {
               a[i][k]=1;
           }
        }
    }
    
    return a;

}
