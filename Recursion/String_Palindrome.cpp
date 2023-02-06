#include<bits/stdc++.h>
using namespace std;
bool palindrome(int i,string word)
{
    if(i>= word.size())
    {
        return true;
    }
    if(word[i] != word[(word.size())-i-1])
    {
        return false;
    }
    palindrome(i+1,word);
}

int main()
{
    string word;
    cout<<"Enter string"<<endl;
    cin>>word;
    bool ans = palindrome(0,word);
    if(ans)
    cout<<"Yes palindrome";
    else
    cout<<"No palindrome";
    return 0;
}
