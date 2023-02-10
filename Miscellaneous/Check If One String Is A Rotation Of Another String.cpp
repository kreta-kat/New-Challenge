//right rotation
#include <bits/stdc++.h> 
int isCyclicRotation(string &p, string &q) 
{
    //    Write your code here
    string temp = p;
    //cout<<temp;
    int n = p.size();
    for(int i = 0; i<p.length();i++)
    {
      //right rotstion formula 
      rotate(temp.begin(),temp.begin()+n-i,temp.end());
       //cout<<temp<<endl;
       if(temp.compare(q) == 0)
       {
           return 1;
       }
       temp =p;
    }
    return 0;
}

//left roation formula
//rotate(v.begin(),v.begin()+i,v.end());
-----------------------------------------------------------------------------------------------------------------------------------------------------------
    //optimal solution
    #include <bits/stdc++.h> 
int isCyclicRotation(string &p, string &q) 
{
    //    Write your code here
    string temp=p+p;
    size_t f = temp.find(q);
    if(f != string::npos)
    {return 1;}
    else
    return 0;
}
