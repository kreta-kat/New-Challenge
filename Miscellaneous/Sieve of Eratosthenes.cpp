vector<int> primeNumbersTillN(int N) 
{ 
 	// Write your code here
	 vector<int> arr(N,0);
	 for(long long i=2;i<=N;i++)
	 {
		 for(long long j=i*i;j<=N;j+=i)
		 {
			if(arr[j] == 0)
			 arr[j] =1; 
		 }
	 }
	 vector<int> ans;
	 for(long long i=2;i<=N;i++)
	 {
		 if(arr[i] ==0)
		 {
			 ans.push_back(i);
		 }
	 }
	 return ans;
}
