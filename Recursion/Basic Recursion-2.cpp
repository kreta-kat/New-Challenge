//print linearly from 1 to n recursion
#include<iostream>
using namespace std;
void func(int i, int n)
{
    if(i>n)
    return;
    cout<<i<<endl;
    func(i+1,n);
}
int main(void)
{
    int n;
    cout<<"ENter n"<<endl;
    cin>>n;
    func(1,n);
    return 0;
}
