#include<iostream>
using namespace std;
int unique(int arr[], int n)
{
    if(n>1)
    {int s=n;
    if(n%2 == 0)
    {s=n/2;}
    else
    {s = n/2 +1;}
    int temp[s];
    int j=0;
    for(int i =0;i<n;i++)
    {
        
            temp[j]=arr[i] ^ arr[i++];
            i = i+2;
            j++;    
    }
    for(int i =0; i<s;i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    return unique(temp,s); 
    }
    else if(n == 1)
    {
        return arr[0];
    }
    
    else 
    {return 0;}
}
int main()
{
    /*int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements"<<endl;
   
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    */
    int arr[7] = {1,2,1,2,3,6,3};
    int n = 7;
    cout<<unique(arr,n);
    return 0;
}
