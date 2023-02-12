#include<iostream>
using namespace std;
#include<string>

int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    
    string s2;
    s2=s;
    for(int i=0; i<=n/2;i++)
    {
      swap(s2[i], s2[n-i-1]);  
    }


    cout<<s<<endl;
    cout<<s2<<endl;
    if(s.compare(s2) == 0)
    {
        cout<<"String pallindromic"<<endl;
    }
    else{
        cout<<"No";
    }
    return 0;
}
