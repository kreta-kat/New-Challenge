//print linearly from n to 1 BACKTRACKING 
//printing using backtracking
#include<iostream>
using namespace std;

void func(int i, int n)
{
    if(i>n)
    return;
    func(i+1,n);
    cout<<i<<endl;
}
int main(void)
{
    int n;
    cout<<"ENter n"<<endl;
    cin>>n;
    func(1,n);
    return 0; 
}
