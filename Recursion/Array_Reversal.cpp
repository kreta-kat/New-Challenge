#include<bits/stdc++.h>
using namespace std;
void reverse_array(int i, int arr[], int n)
{
    if(i>= n/2)
    {
        for(int i=0; i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        return;
    }
    swap(arr[i], arr[n-i-1]);
    reverse_array(i+1, arr, n);
}

int main()
{
    int n;
    cout<<"Enter size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    reverse_array(0,arr,n);
    return 0;
}
