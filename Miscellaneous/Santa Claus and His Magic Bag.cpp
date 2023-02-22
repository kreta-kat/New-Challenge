#include <bits/stdc++.h> 
vector < int > giftsLeft(int n, int k, int q, vector < int > demands) 
{
    // Write your code here.
    vector<int> remain;
    int capacity=n;
    for(int i=0; i<q;i++)
    {
        if(capacity>=demands[i])
        {
            int temp = capacity-demands[i];
            if (temp >= k) {
              remain.push_back(temp);
              capacity = temp;
              //cout<<capacity<<" "<<i<<endl;
            }
            else
            {
                remain.push_back(n);
                capacity =n;
            }
        }
        else
        remain.push_back(-1);
    }
    return remain;
}
