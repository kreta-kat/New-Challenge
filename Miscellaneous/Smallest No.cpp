/*You are given two positive integers ‘N’ and ‘K’. Your task is to find the smallest ‘N’ digit 
number whose sum of digits equals ‘K’. If no such number exists then you need to print -1.*/

#include <bits/stdc++.h> 
string smallestNumber(int n, int k)
{
	// Write your code here
	
	if(k ==0)
	{
		if(n==1)
		{return "0";
                } 
	    else {
                  return "-1";
                }
    }
	if(k> 9*n)
	{
		return "-1";
	}
	string ans="";
	k = k-1;
	for(int i = n-1; i>0;i--)
	{
		if(k>9)
		{
			ans += '9';
			k-=9;
			
		}
		else{
			ans += to_string(k);
			k=0;
		}
	}
	ans = ans+to_string(k+1);
	reverse(ans.begin(), ans.end());
	return ans;
}
