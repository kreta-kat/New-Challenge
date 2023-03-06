 /*
    Time Complexity : O(N^2
    Space Complexity : O(1)
    
    Where ‘N’ is the length of the given array/list.

*/

#include <limits.h>

int getLongestSubarrayLength(vector<int> &arr, int limit)
{
	int n = arr.size();

	//    To store the length of longest subaray.
	int maxLength = 0;

	for (int low = 0; low < n; low++)
	{
		//    To store minimum and maximum element.
		int minElement = INT_MAX;
		int maxElement = INT_MIN;

		for (int high = low; high < n; high++)
		{
			//    Update the minimum and maximum element.
			minElement = min(minElement, arr[high]);
			maxElement = max(maxElement, arr[high]);

			if (maxElement - minElement <= limit)
			{
				//    Current subarray is a valid one.
				maxLength = max(maxLength, high - low + 1);
			}
		}
	}

	return maxLength;
} 
