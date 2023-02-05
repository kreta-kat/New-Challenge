//factorial of N integers using parameter recursion
#include<iostream>
using namespace  std;
void fact(int i, int pr)
{
    if(i == 0)
    {
    cout<<pr;
    return;
    }
    
    return fact(i-1, pr*i);
}
int main(void)
{
    int n;
   cout<<"Enter N"<<endl;
   cin>>n;
   fact(n,1);
   return 0;
}
