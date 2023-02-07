#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> fizzbuzz(int n)
{
    vector<string> str;
    string a;
    for(int i = 1; i<=n; i++)
    {
        if(i%3 == 0 && i%5 == 0)
        {
            str.push_back("FizzBuzz");
        }
        else if(i %5 == 0)
        {
            str.push_back("Buzz");
        }
        else if ( i%3 == 0)
        {
            str.push_back("Fizz");
        }
        else
        {
             a = to_string(i);
            str.push_back(a);
        }
    }
    return str;
}
int main(void)
{
    int n;
    cin>>n;
    vector <string> ans = fizzbuzz(n);
    for(auto ele : ans)
    {
        cout<<ele<<" ";
    }
    return 0;
}
