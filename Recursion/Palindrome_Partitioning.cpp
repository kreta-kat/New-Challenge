//Palindrome_Partitioning.cpp
#include <bits/stdc++.h> 
using namespace std;

bool isPalindrome(int start, int end, string s)
{
    while(start <= end)
    {
        if(s[start++] != s[end--])
        return false;
    }
    return true;
}

void func(int index, string s, vector<string> &path, vector<vector<string>> &ans)
{
    //base condition
    if(index == s.size())
    {
        ans.push_back(path);
        return;
    }
    //looping to make partitioning
    for(int i=index; i<s.size();i++)
    {
         if(isPalindrome(index,i,s))
         {
            //pushing the substring in path vector
            //substring from index to i-index+1 say(0-1) where index =0; 0-0+1 =1  it means SIZE OF substring
            path.push_back(s.substr(index, i-index+1));
            func(i+1, s, path,ans);
            //removing path for other partitioning
            path.pop_back();

         }
    }
}
int main()
{
    string s = "aabb";
    vector<string> path;
    vector<vector<string>> ans;
    func(0,s,path,ans);
    for(auto it:ans)
    {
        for(auto p: it)
        {
            cout<<p<<" ";
        }
        cout<<endl;
    }
    return 0;
}
