#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int n;
    cin>>n;
    set< pair<string, string>>p;
    string s1,s2;
    for(int i=0; i<n; i++)
    {
        cin>>s1>>s2;
        p.insert(make_pair(s1,s2));
        
        
    }
    cout<<p.size()<<endl;

    //return with 0 
    return 0;
}