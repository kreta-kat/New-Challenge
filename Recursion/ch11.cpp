#include<iostream>
using namespace std;
int fun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(fun(n-1));
    }
    return n;
}
int main()
{
    int n =3;
    fun(n);
}
