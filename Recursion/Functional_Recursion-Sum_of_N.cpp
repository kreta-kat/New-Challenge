//sum of N integers using functional recursion
#include<iostream>
using namespace  std;
int func(int n)
{
    if(n==0)
    return 0;
    
    return n+func(n-1);
}
int main(void)
{
    int n;
   cout<<"Enter N"<<endl;
   cin>>n;
   cout<<func(n)<<endl;
   return 0;
}
