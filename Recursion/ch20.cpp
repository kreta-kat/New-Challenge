//ode for
#include <bits/stdc++.h> 
#include <string>
using namespace std;

int main()
{
    vector<int> k = {1,2,3,4};
    cout<<"Vector Size before insert "<<k.size()<<endl;
    k.push_back(6);
    k.push_back(7);
    cout<<"Vector Size after insert "<<k.size()<<endl;
    k.pop_back();
    cout<<"Vector Size after remove "<<k.size()<<endl;
    k.pop_back();
    k.pop_back();
    cout<<"Vector Size after remove -2 "<<k.size()<<endl;
    return 0;

}
