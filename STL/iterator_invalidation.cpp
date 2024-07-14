#include<bits/stdc++.h>
using namespace std;

//page no 13 dsa - 1
int main ()
{
    //write your code here
    //let takes a vector here 

     vector<int>v={1,2,3,4,5,6};
     auto it =v.begin()+4;
     cout<<"it = "<<*it<<endl;
     cout<<"it - begin = "<<it-v.begin()<<endl;
    //return with 0 

    //now change in the array
    it=v.insert(it,100);
    
    cout<<"After changing v[4] = "<<v[4]<<endl;
    cout<<"it = "<<*it<<endl;
    cout<<"it - begin = "<<it-v.begin()<<endl;
    //return with
    for(auto &i : v)
    {
        cout<<i<<" ";
    }
    return 0;
}