#include<iostream>
using namespace std;
int pow(int m, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else if(n%2 == 0)
    {
        return pow(m*m,n/2);
    }
    else
    {
        return m*pow(m*m, (n-1)/2);
    }
}
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
    int n=2,i=0;
    
    while(i<n)
    {

        cout<<pow(n,i)/fact(i)<<"+ ";
        i++;
    }
    return 0;
}
