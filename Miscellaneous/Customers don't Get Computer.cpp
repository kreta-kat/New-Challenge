#include <bits/stdc++.h> 
using namespace std;
int countCustomers(vector<int> &arr, int k)
{
    //    Write your code here
    int s = arr.size()/2;
    vector<int> getComputer(s, 0); // got computer
    vector<int> left(s,0); // no one left
    //cout<<oc.size()<<endl;
    int cnt=0;
    //vector<int>::iterator it;
    for(int i=0; i<arr.size();i++)
    {
        int temp = arr[i]-1;
        if(getComputer[temp]== 0)
        {
          if (k > 0) 
          {
            getComputer[temp] = 1; // occ came
            k--;
          } 
          else
            {
            if (left[temp] == 0) 
                {
                left[temp] =1;
                cnt++;
                }

            }
        }
        // else if( oc[arr[i]-1] == 1) leave
        else 
        {
          k++;
          getComputer[temp] = 0; // leave
          //left[temp] = 0;
          
        }
        
    }
    return cnt;
}

int main()
{
    int k =1;
    vector<int> arr = {1,2,3,4,4,3,2,1};
    cout<<countCustomers(arr,k);
    return 0;
}
