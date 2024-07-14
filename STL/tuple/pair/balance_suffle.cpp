#include<bits/stdc++.h>
using namespace std;

bool  comp()
{

}

void ans()
{
    string s;
    cin>>s;

    int n=s.size();

    map<pair<int , int > , char>mp;

    vector<pair<int,int>>v;

    v.push_back({0,1});
    mp[{0,1}]=s[0];

    long long sum=0;

    for(int i=1;i<n ; i++)
    {
        if(s[i-1]=='(') sum++;
        else sum--;

        v.push_back({sum,i+1});
        mp[{sum,i+1}]=s[i];
    }
}

int main ()
{
    //write your code here
    
    //return with 0 
    return 0;
}