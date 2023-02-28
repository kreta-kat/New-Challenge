#include <bits/stdc++.h> 

bool isPrime(int val){
    
    if(val <= 1){
        return false;
    }
    for (int i  = 2 ; i <= sqrt(val); i++ ){
        if(val % i == 0){
            return false;
        }
    }
    return true;
}

int countMegaPrimeNumber(int left, int right) {
    // Write your code here.
    
    int finalres = 0;
    for (int  i = left ; i <= right ; i++){
        vector<int> res;
        int n = i;
        if(isPrime(n)){
            while( n > 0){
                int rem = n%10;
                res.push_back(rem);
                n /= 10;
            }
            bool flag = true;
            for(int  j = 0 ; j <  res.size(); j++){
                if(!isPrime(res[j])){
                   flag = false;
                }
            }
            if(flag == true){
                finalres++;
            }
        }
    }
    return finalres;
}
