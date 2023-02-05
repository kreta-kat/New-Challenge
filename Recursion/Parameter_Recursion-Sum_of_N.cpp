//sum of N integers using parametrised recursion
#include<iostream>
using namespace  std;
void func(int i, int sum)
{
    if(i<1)
    {
       cout<<sum;
       return;
    }
    return func(i-1, sum+i);
}
int main(void)
{
    int n;
   cout<<"Enter N"<<endl;
   cin>>n;
   func(n,0);
   return 0;
}
