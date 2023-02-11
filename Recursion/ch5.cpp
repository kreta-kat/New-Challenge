#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;
int max(int a, int b)
{
    return a>b? a:b;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

   
    for(int i =0; i<n;i++)
    {
         int largest = INT_MIN;
         /*for(int j=0; j<=i;j++)
         {
        if(arr[j]>largest)
        {
            largest = arr[i];
        }
        }*/
        //optimised O(n) complexity
        int no = max(largest,arr[i]);
        largest = no; 

        cout<<"till i= "<<i<<" number "<<largest<<endl;
    }
   
    //cout<< *max_element(arr,arr+n);
    

    return 0;
}
