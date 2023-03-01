#include <bits/stdc++.h> 
vector < int > productPuzzle(vector < int > & arr, int n) 
{
    // Write your code here.
    vector<int> ans;
    if(n<1)
    {
        return ans;
    }
    int product=1;
    for(int i=0; i<n; ++i)
    {
        //left products
        product *= arr[i];
        ans.push_back(product);
    }
    product =1;
    for(int i= n-1; i>0; --i)
    {
        //boundary condition
          ans[i] = ans[i - 1] * product;
          product *= arr[i];
    }
    ans[0] = product;
    return ans;
}
