bool isPrime(int n)
{
	if(n <=1)
	{return false;}
	if(n<=3)
	return true;
	if(n %2 == 0 || n%3 == 0)
	return false;
	for(int i=5;i<n;i++)
	{
		if(n%i == 0)
		return false;
	}
	return true;
}


vector<int> primeNumbersTillN(int N) 
{ 
 	// Write your code here
	 vector<int> ans;
	 if(N <= 1)
	 {
		 return ans;
	 }
	 for(int i=2;i<=N;i++)
	 {
		 if(isPrime(i))
		 ans.push_back(i);
	 }
	 return ans;
}
