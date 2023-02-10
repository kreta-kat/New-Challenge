#include<bits/stdc++.h>
using namespace std;

void findSubset(int ind, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
{
    //pushing the previous list to answer
    ans.push_back(ds);
    //looping to select elements for that size sublists
    for(int i=ind; i<arr.size();i++)
    {
        //CONDITION for checking duplicates and to ensure that one time the element is added to the new list
         if(i!= ind && arr[i] == arr[i-1])
         //SKIP THIS ITERATION
         continue;
         ds.push_back(arr[i]);
         findSubset(ind+1,arr,ds,ans);
         ds.pop_back();

    }


}

int main()
{
    vector<int> arr = {1,2,2,2,3,3};
    vector<int> ds;
    vector<vector<int>> ans;
    //int n = arr.size();
    sort(arr.begin(), arr.end());
    findSubset(0,arr,ds,ans);
    vector<vector<int>> :: iterator itr;
    sort(ans.begin(), ans.end());
    itr = unique(ans.begin(), ans.end());
    ans.resize(distance(ans.begin(), itr));
    //cout<<arr.size();
    /*for(int i =0; i<ans.size(); i++)
    {
        for(auto it = ans[i].begin(); it != ans[i].end();it++)
    {
        cout<<*it<<" ";
    }
        cout<<endl;
    }
    */
    


    return 0;
}
