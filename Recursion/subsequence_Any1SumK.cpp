#include<bits/stdc++.h>
using namespace std;
bool printSum(int ind, vector<int> &ds, int arr[], int n, int sum, int s)
{
    if(ind == n)
    {  // checking if s == sum
        if(s == sum)
        {
            for(auto it: ds)
            {
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
       return false;
    }

    ds.push_back(arr[ind]);
    //adding that letter to sum so that it can be checked in the condition
    s += arr[ind];
    //case for picking the element in the subsequence ds and checking COND IF SUBSEQUENCE FOUND
    if(printSum(ind+1,ds,arr,n,sum,s) == true)
    {return true;}
    //removing the element
    ds.pop_back();
    //removing that letter to sum so that it can be checked in the condition
    s -= arr[ind];
    //case for not picking the element at that index moving to next elements and checking COND IF SUBSEQUENCE FOUND
    if(printSum(ind+1,ds,arr,n,sum,s) == true)
    {return true;}
    return false;
}
int main()
{
    int arr[] = {1,2,1};
    int n =3;
    int sum = 2;
    vector<int> ds;
    printSum(0,ds,arr,n,sum,0);
    return 0;
}
