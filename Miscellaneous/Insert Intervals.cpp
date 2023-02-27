vector<vector<int>> addInterval(vector<vector<int>> &intervals, int n, vector<int> &newInterval)
{
    // Write your code here
    
    vector<vector<int>> ans;
    for(auto interval: intervals)
    //end of previous < start of new
    {
       if(interval[1] < newInterval[0])
       {ans.push_back(interval);
       }
       // start prev > end of new 
       else if(interval[0] > newInterval[1])
       {
           ans.push_back(newInterval);
           newInterval = interval;
       }
       //merge condition
       else
       {
           newInterval[0] = min(newInterval[0], interval[0]);
           newInterval[1] = max(newInterval[1], interval[1]);
       }

    } 
    ans.push_back(newInterval);

    return ans;  


}

