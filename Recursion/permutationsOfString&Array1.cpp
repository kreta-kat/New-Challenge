#include<bits/stdc++.h>
using namespace std;

void permu(int ind, vector<vector<int>> &ans, vector<int> &arr)
{
    //base condition
    if(ind == arr.size())
    {
        ans.push_back(arr);
        return;
    }

 // here swapping element; 
 // swaping with indexes
    for(int i=ind; i<arr.size();i++)
    {
        swap(arr[ind], arr[i]);
        //calling recursion
        permu(ind+1,ans,arr);
        //reswap
        swap(arr[ind], arr[i]);
    }
}

int main()
{
    vector<int> arr = {1,2,3};
    int n=3;
    vector<vector<int>> ans;
    permu(0,ans,arr);
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
