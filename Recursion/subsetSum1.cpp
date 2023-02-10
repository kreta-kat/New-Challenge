#include<bits/stdc++.h>
using namespace std;
void findSubset(int ind, vector<int> &arr, int sum, vector<int> &ds, int n)
{
   if(ind == n)
   {
    ds.push_back(sum);
    return;
   }
   //case for picking the element
   //sum += arr[ind];
   findSubset(ind+1, arr,sum+arr[ind],ds,n);
   //sum -= arr[ind];
   //case for not picking element
   findSubset(ind+1, arr,sum,ds,n);
}

int main()
{
    vector<int> arr = {3,1,2};
    vector<int> ds;
    int n = arr.size();
    findSubset(0,arr,0,ds,n);
    sort(ds.begin(), ds.end());
    for(auto it:ds)
    {
        cout<<ds[it]<<endl;
    }

    return 0;
}
