#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    vector<int>v(3);
    cin>>v[0]>>v[1]>>v[2];
    int n=5;
   
    while(n--)
    {
        sort(v.begin(), v.end());
        v[0]++;
    }
    //return with 0 
    cout<<v[0]*v[1]*v[2]<<endl;
    return 0;
}