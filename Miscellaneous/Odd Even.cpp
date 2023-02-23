//odd even
int isPossible(int x, int y) {
	// Write your code here.
	//int req = y-x;
	


	/*while(x<=y)
	{
		if(x == y)
		{
			return 1;
		}
		else if(x%2 == 0)
		{
			x= x+2;
		}
		else{
			x = x+1;
		}
	}

	return 0;
	*/
	if(x == y)
	{
		return 1;
	}
	if(x>y)
	{
		return 0;
	}

	if(y%2 != 0)
	{
		return 0;
	}

	else
	{
		return 1;
	}
}


//sum of odd + odd = even
//even + even = even
//odd + even = odd
