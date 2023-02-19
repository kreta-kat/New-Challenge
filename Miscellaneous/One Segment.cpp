#include <bits/stdc++.h> 
#include <string>
using namespace std;

/*bool oneSegment(string str) 
{
	int cnt=0;
	int zero_cnt=-1;
    char ch= '0';
	
    if(str.contains(ch))
{
	for(int i=0; i<str.length();i++)
	{
		if(str[i] == '1' && str[i] == str[i+1] && zero_cnt<0)
		{
			cnt++;
			//cout<<i<<endl;
			i=i+2;
		}
	}
	// Write your code here.
	if(cnt ==1)
	{
		return true;
	}
	else{
		return false;
	}
	}
	else
	{
		return true;
}
	
}*/

int main(void)
{
	string str = "11111";
	if(oneSegment(str))
	{
	cout<<"Yes";
	}
	else{
      cout<<"No";
	}
    return 0;
}


 
bool oneSegment(string str) {
	int cnt1=0;
	int cnt2=0;
	for(int i=0; i<str.length();i++)
	{
        if(str[i] == '1')
		{
			cnt1++;
		}
	}
	for(int i=0; i<str.length();i++)
	{
        if(str[i] == '1')
		{
			cnt2++;
		}
		else{
			break;
		}
	}

	if(cnt1 == cnt2)
	{
		return true;
	}
	return false;
	
}
