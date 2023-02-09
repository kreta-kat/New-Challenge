#include<bits/stdc++.h>
using namespace std;


char flip(char ch)
{
    if(ch== '0')
    {
        return '1';
    }
    else return '0';
}
int getFlips(string s, char expected)
{
    int flipcnt=0;
    for(int i=0; i<s.length();i++)
    {
        if(s[i] != expected)
        {
            flipcnt++;
        }
        expected = flip(expected);
    }
    return flipcnt;
}

int minFlips(string s)
{
   return min(getFlips(s,'0'), getFlips(s,'1'));
}

int main(void)
{
    string str = "10110110101";
    cout<<minFlips(str);
    return 0;
}
