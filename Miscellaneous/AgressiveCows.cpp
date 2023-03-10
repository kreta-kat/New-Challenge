bool canPlacecows(int cows, vector<int> &stalls, int dis, int n)
{
    //base-case
    //last position
    int a = stalls[0];
    int count =1;
    //looping to check if other cows can be placed or not
    for(int i=0;i<n;i++)
    {
        
        if(stalls[i] - a >= dis)
        {
           count++;
           if(count == cows)
        {
            return true;
        }
           a = stalls[i];
        }
    }
    return false;
}



int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    //array sorted
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    if(k == 2)
    {
        return stalls[n-1] - stalls[0];
    }
    int res=0;
    //Binary search space;
    //low 
    int low= 0;
    int high = stalls[n-1] - stalls[0];
    int mid = (low+high)/2;
    
    while(low<= high)
    {
       
       if(canPlacecows(k,stalls,mid,n))
       {
           res = mid;
           //largest distance
           low = mid+1;
       }
       else
       {
           high = mid-1;
       }
       mid = (low+high)/2;
    }
    return res;
}
