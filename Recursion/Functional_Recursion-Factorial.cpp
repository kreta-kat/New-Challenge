//factorial of N integers using functional recursion
#include<iostream>
using namespace  std;
int fact(int n)
{
    if(n==0)
    return 1;
    
    return n*fact(n-1);
}
int main(void)
{
    int n;
   cout<<"Enter N"<<endl;
   cin>>n;
   cout<<fact(n)<<endl;
   return 0;
}
