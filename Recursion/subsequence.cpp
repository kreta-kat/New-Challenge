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
    //case for not pick at all i.e. empty array
  if(ds.size() ==0)
  {
     cout<<"{}";

  }
    cout<<endl;
    return;
    }
 
 //case for picking the element in the subsequence ds
 ds.push_back(arr[ind]);
 printF(ind+1,ds,arr,n);
 //removing the last element to make not pick condition
 ds.pop_back();
 //case for not picking the element at that index moving to next elements
 printF(ind+1,ds,arr,n); 

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
