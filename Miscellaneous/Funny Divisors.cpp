#include <bits/stdc++.h> 
int findSum(int n, vector<int>& arr) {
    // Write your code here
    int sum=0;
    for(int i=0; i<arr.size();i++)
    {
        if(arr[i]%2 == 0 || arr[i]%3 == 0)
        {
            sum += arr[i];
        }

    }
    return sum;
}
