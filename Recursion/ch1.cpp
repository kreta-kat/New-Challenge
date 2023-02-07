#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    int pd= arr[1] - arr[0]; //default previous difference 2 ka 0,1
    int curr= 2; //2 ka calc length = 2
    int j =2; //0,1 calc therefore, 2
    int ans=2; //default sublength =2
    for(int i =0; i<N;i++)
    {
              cin>>arr[i];
    }
    while(j<N)
    {
        if(pd == arr[j] -arr[j-1])
        {
           curr++;
        }
        else{
               pd = arr[j] - arr[j-1];
               curr =2; 
        }
        ans = max(ans,curr);
        j++;
    }

    cout<<ans<<endl;
    return 0;
}
