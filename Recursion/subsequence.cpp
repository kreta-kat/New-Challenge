#include<bits/stdc++.h>
using namespace std;
void printF(int ind, vector<int> &ds, int arr[], int n)
{
  if(ind == n)
  {
    for(auto it: ds)
    {
        cout<<it<<" ";
    }
    //case for not pick
  if(ds.size() ==0)
  {
     cout<<"{}"<<endl;

  }
    cout<<endl;
    return;
}
int main()
{
    string word;
    int arr[] = {3,1,2};
    int n =3;
    vector<int> ds;
    printF(0,ds,arr,n);
    return 0;
}
