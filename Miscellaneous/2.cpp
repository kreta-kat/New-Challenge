
weddlvmvv
Amit orders a gift from 4 different websites for his friend's birthday. The probability of the sites delivering on time is 0.9,0.8,0.7 and 0.6 respectively. What is the probability that the friend would get the gift on time? (answer up to 4 decimal places)

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
