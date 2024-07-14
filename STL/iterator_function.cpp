#include<bits/stdc++.h>
using namespace std;
// page no 12
int main ()
{
    //write your code here
    vector<int>v={1,2,3,4,5,6};

    cout<<"v.begin() "<<*v.begin()<<endl;

    int *x=&v[5];
    x++;
    *x=-50;
    cout<<"v.end() "<<*v.end()<<endl; //as it will give garbage so value so change the next of last index memory value with -50 
    cout<<"v.rbegin() "<<*v.rbegin()<<endl;
    int *f=&v[0];
    f--;
    *f=-100;
    cout<<"v.rend() "<<*v.rend()<<endl;//as it will give garbage so value so change the before of first index memory value with -100 
    return 0;
}