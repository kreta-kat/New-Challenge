#include <bits/stdc++.h> 
int countMegaPrimeNumber(int left, int right) {
    // Write your code here.
    int count =0;
    for(int i= left; i<=right; i++)
    {
      string temp = to_string(i);
      if( i == 2 || i == 3 || i ==5 || i == 7)
      {
          count++;
          continue;
      }
      if(temp.find('2') != std::string::npos || temp.find('3') != std::string::npos ||
      temp.find('5') != std::string::npos || temp.find('7') != std::string::npos)
      {
        if(temp.find('1') == std::string::npos && temp.find('9') == std::string::npos && temp.find('4') == std::string::npos && temp.find('8') == std::string::npos && temp.find('6') == std::string::npos)
        {
          if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) 
          {
            //cout << i << " ";
            count++;
            //cout<<i<<" ";
          }
        }
      }
      /*if(temp.contains('2') || temp.contains('3') || temp.contains('5') 
      || temp.contains('7'))
      {
          if(temp)
          if(i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0)
          {
              count++;
          }

      }
     
      
          */
    }
      //if(i == 2 || i == 3 || i == 5 || i == 7 || i)

    
    return count;
    
}
