#include <bits/stdc++.h> 

bool areIsomorphic(string &str1, string &str2)
{
    // Write your code here
    int n = str1.length();
    int m = str2.length();
    if(n!=m)
    {
        return false;
    }

    int count1[26] = {0};
    int count2[26] = {0};
    for(int i=0; i<n;i++)
    {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }
    for(int i=0; i<n;i++)
    {
        if(count1[str1[i] - 'a'] != count2[str2[i] - 'a'])
        return false;
    }
    return true;
}
