#include <bits/stdc++.h> 
string morseToEnglish(string morsecode) 
{
    // Write your code here
    //0-9
    string morse[36] = {".-",    "-...",  "-.-.",  "-..",   ".",     "..-.",
                        "--.",   "....",  "..",    ".---",  "-.-",   ".-..",
                        "--",    "-.",    "---",   ".--.",  "--.-",  ".-.",
                        "...",   "-",     "..-",   "...-",  ".--",   "-..-",
                        "-.--",  "--..",  "-----", ".----", "..---", "...--",
                        "....-", ".....", "-....", "--...", "---..", "----."};
    string alpha[36] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","0","1", "2", "3", "4", "5", "6", "7", "8", "9"}; 
    string T;
    string ans={};
    //string ch =" ";
    stringstream X(morsecode);
    //token
    while(getline(X,T,' '))
    {
        for(int i=0; i<36;i++)
        {
            if(T == morse[i])
            {
                ans= ans+alpha[i]; 
            }
        }
    }
    return ans;
}
