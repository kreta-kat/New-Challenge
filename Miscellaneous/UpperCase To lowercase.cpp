#include <bits/stdc++.h> 
string editSentence(string &str)
{
	// Write your code here.
	string ans={};
	//ans = tolower(str[0]);
	string ch = " ";
	ans = tolower(str[0]);
	int i=1;
	while(i !=str.length())
	{
        if(str[i] >= 'A' && str[i] <= 'Z')
		{
            ch = tolower(str[i]);
			ans = ans + " " + ch;
			i++;
			continue;
		}
		ans=ans+str[i];
		i++;
	}
	return ans;
	/*for(int i=1;i<str.length();i++)
	{
		if(str[i] >= 'A' && str[i]<= 'Z')
		{
			
			char ch = tolower(str[i]);
			ans = ans + " "+ch;
		}
		else{
			ans = ans+str[i];
		}
		

		
	}
	*/
	//return ans;
}
