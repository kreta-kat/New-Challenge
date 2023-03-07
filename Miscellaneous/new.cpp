import java.util.* ;
import java.io.*; 
public class Solution 
{
    public static int kDistinctSubarrays(int arr[], int n, int k) 
	{
     
         int start=0;
       int end=0;
       int ans=0;
       HashMap<Integer,Integer> hm=new HashMap<>();
       while(end<n){
           //expanding untill the size of hashmap doesnt exceed k
           hm.put(arr[end],hm.getOrDefault(arr[end],0)+1);
           end++;
           //contraction when hm.size get larger than k as its size is denoting distinct elements
           while(start<end&&hm.size()>k){
                   hm.put(arr[start],hm.getOrDefault(arr[start],0)-1);
               if(hm.get(arr[start])==0) hm.remove(arr[start]);
               start++;
           }
           //operation performing the counting of subarrays falling under the required condition
           ans+=end-start;
       }
       return ans;
   }
}
