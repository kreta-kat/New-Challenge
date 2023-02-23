#include <bits/stdc++.h> 
vector<int> completeSum(vector<int> &a, int n) {
    // Write your code here.
    int sum=0;
    vector<int> ans;
    for(int i=0; i<n;i++)
    {
        sum += a[i];
        ans.push_back(sum);
    }
    return ans;
}


