#include <bits/stdc++.h> 

int countOfDivisiblePairs(int n, int m){
	// Write your code here
	int count=0;
	for(int i=1;i<=n;i++)
	{
	   	   int temp = 5-i;
		   if(temp<=m)
		   {
			   count++;
		   }
	}
	return count;

}
