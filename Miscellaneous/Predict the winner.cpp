#include <bits/stdc++.h> 

int solve(int n, int k)
{
     if(n ==1)
    {
        return 0;
    }
    return (solve(n-1,k)+k)%n;
}

int predictTheWinner(int n, int k) {
    //  Write your code here
    int ans = solve(n,k) +1;
    return ans;

    
}
