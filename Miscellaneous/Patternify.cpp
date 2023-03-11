vector<string> ans;
    string str;
    for(int i=0; i<n;i++)
    {
        str += "*";
    }
    for(int i=1;i<=n;i++)
    {
        ans.push_back(str);
        str.pop_back();
    }
    return ans;
