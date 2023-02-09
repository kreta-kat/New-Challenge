#include<bits/stdc++.h>
using namespace std;

void findCombination(int ind, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
{
    //vector<vector<int>> res;
    //base condition
    if(ind == arr.size())
    {
        if(target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }

    //picking the element
    //CHECK CONDITION to check element 
    if(arr[ind] <=target)
    {
    ds.push_back(arr[ind]);
    findCombination(ind, (target-arr[ind]), arr, ds,ans);
    ds.pop_back();
    }

    //not picking the element
    findCombination(ind+1, target, arr,ds,ans);
   
}

int main(void)
{
    vector<int> arr = {2,2,3,7};
    int target =7;
    vector<int> ds;
    vector<vector<int>> ans;
    findCombination(0,target,arr,ds,ans);
    //cout<<ans.size()<<endl;
    vector<vector<int>> :: iterator itr;
    itr = unique(ans.begin(), ans.end());
    ans.resize(distance(ans.begin(), itr));
    for(int i =0; i<ans.size(); i++)
    {
        for(auto it = ans[i].begin(); it != ans[i].end();it++)
    {
        cout<<*it<<" ";
    }
        cout<<endl;
    }
    

    return 0;


}
