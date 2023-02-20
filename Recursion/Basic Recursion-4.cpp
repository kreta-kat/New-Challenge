//print linearly from 1 to n BACKTRACKING using
#include<iostream>
using namespace std;

void func(int i, int n)
{
    if(i<1)
    return;
    func(i-1,n);
    cout<<i<<endl;
}
int main(void)
{
    int n;
    cout<<"ENter n"<<endl;
    cin>>n;
    func(n,n);
    return 0; 
}
