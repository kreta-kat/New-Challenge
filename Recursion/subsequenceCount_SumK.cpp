#include<bits/stdc++.h>
using namespace std;
int printSum(int ind, int arr[], int n, int sum, int s)
{
    if(ind == n)
    {  // checking if s == sum
        if(s == sum)
        {
            return 1;
        }
       return 0;
    }
    //adding that letter to sum so that it can be checked in the condition
    //here we are doing it to check condition
    s += arr[ind];
    //case for picking the element (in the subsequence and) no. added in sum
    int l = printSum(ind+1,arr,n,sum,s);
 
    //removing the element from sum
    //removing that no to sum so that it can be checked in the condition
    s -= arr[ind];
    //case for not picking the element(ind the subsequence) at that index moving to next elements
    int r = printSum(ind+1,arr,n,sum,s);
    return l+r;
}
int main()
{
    int arr[] = {1,2,1};
    int n =3;
    int sum = 2;
    cout<<printSum(0,arr,n,sum,0);
    return 0;
}
