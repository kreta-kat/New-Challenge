char flip (char ch)
{
	return (ch =='0')? '1': '0';
}

int getFlips(string s, char ex)
{
   int flipcnt =0;
   for(int i=0; i<s.length();i++)
   {
	   if(s[i] != ex)
	   { 
         flipcnt++;
	   }

	   ex = flip(ex);
   }
   return flipcnt;
}

int makeBeautiful(string str) {
	// Write your code here
	int cnt = min(getFlips(str,'0'), getFlips(str,'1'));
	
	return cnt;
}
