#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    int largest_vistor = INT_MAX;
    int visitor = arr[0];
    for(int i=1; i<n;i++ )
    {
        if(visitor>largest_vistor)
        {
           largest_vistor = visitor;
        }
        max
    }
    return 0;

}
