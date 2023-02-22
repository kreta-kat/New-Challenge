string removeDuplicate(string &s)
{
    string ans="";
    ans += s[0];
    int n = s.length();
    //size_t found;
    for(int i=1; i<=n-1;i++)
    {
        
        if (s[i] != s[i - 1]) 
        {
          ans += s[i];
        }
    }
    return ans;
}
