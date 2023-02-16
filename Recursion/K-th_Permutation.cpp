//K-th_Permutation.cpp
#include <bits/stdc++.h> 
using namespace std;
string solve(int n, int k)
{
    string ans="";
    int fact =1;
    vector<int> numbers;
    for(int i=1;i<n;i++)
    {
        fact = fact*i; // calculating n-1!
        numbers.push_back(i); //making a number array [1,2,3]
    }
    numbers.push_back(n); //[1,2,3,4]
    k = k-1;   // index start from 0 therefore k = k-1
    while(true)
    {
        ans = ans + to_string(numbers[k/fact]); // adding the no. at first place
        numbers.erase(numbers.begin()+ k/fact); //removing from list
        if(numbers.size() == 0)
        {
            break;
        }
        // 16%6 =4
        k = k%fact;
        //6/3(left) = 2
        fact = fact/numbers.size();

    }
    
    return ans;
}

int main()
{
    int n =4;
    int k=17;
    string ans =solve(n,k);
    cout<<ans;
    return 0;
}
