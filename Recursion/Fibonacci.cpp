//multipleRecursion-fibo
//to calculate fibonacci number, using multiple recursion
//h

#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n<=1)
    return n;

    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    cout<<"Enter fibonacci number"<<endl;
    cin>>n;
    int ans = fibo(n);
    cout<<ans;
    //check
    return 0;
}
