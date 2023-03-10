
#include <bits/stdc++.h> 
void printPatt(int n) {
  // Write your code here.
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      if(i%2 ==0)
      cout<<"1";
      else
      cout<<"0";
    }
    cout<<endl;
  }
}
