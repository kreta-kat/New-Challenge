//print linearly from n to 1 recursion
#include<iostream>
using namespace std;
void func(int n, int i)
{
    if(n<i)
    return;
    cout<<n<<endl;
    func(n-1,i);
}
int main(void)
{
    int n;
    cout<<"ENter n"<<endl;
    cin>>n;
    func(n,1);
    return 0;
}
