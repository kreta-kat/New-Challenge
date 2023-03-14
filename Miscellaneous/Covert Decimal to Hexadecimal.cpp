#include <bits/stdc++.h> 
string toHex(int num) {
	unsigned int n = num;
	int rem;
	string hex = "0123456789ABCDEF";
	string ans;
	while(n >0)
	{
		rem = n%16;
		ans +=hex[rem];
		n = n/16;
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
