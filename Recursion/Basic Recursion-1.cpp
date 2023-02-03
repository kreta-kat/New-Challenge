//to print names N times using recursion
#include<iostream>
using namespace std;
void f(int n)
{
    if(n==0)
    return;
    cout<<"Karnika"<<endl;
    f(n-1);

}
void f1(int i, int n) //complexity = O(n) 
//stack complexity = O(n)
{
   if(i>n)
   return;
   cout<<"Karnika"<<endl;
   f1(i+1,n);
}
int main(void)
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    f1(1,n);
    return 0;
}
