//armstrong
#include<iostream>
using namespace std;

int fact(int n)
{
     
    if(n == 0)
    {   
        return 1;
    }

    else if(n>0)
    {
       return n*fact(n-1);

    }
    else
    {
       return -1;
    }
    
}
int main()
{
    int n=5,r=2,i=0;
    
        cout<<fact(n)/(fact(n-r)*fact(r));

    return 0;
}
