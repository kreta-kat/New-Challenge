//permutationsOfString&Array.cpp
#include<bits/stdc++.h>
using namespace std;

void permu(vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans, int freq[])
{
    if(ds.size() == arr.size())
    {
        ans.push_back(ds);
        return;
    }
    for(int i=0; i<arr.size();i++)
    {
        if(freq[i] == 0) //case of not pick i.e. freq is not marked
        {
            ds.push_back(arr[i]);  //push to ds
            freq[i] =1; // marked in freq table
            permu(arr,ds,ans,freq);  //recursion called to pick next element 
            freq[i]=0; // now again unmarked
            ds.pop_back(); //element too removed
        }
    }

}
int main()
{
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[arr.size()] = {0};
    /*for(int i=0; i<arr.size();i++)
    {cout<<freq[i]<<" ";}
    */
   permu(arr,ds,ans,freq);
   //cout<<ans.size();
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
