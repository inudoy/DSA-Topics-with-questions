#include<bits/stdc++.h>
using namespace std;

void select_(int a[],int n)
{
    int s=0;
    for(int i=0;i<n-1;i++)//it will run 4 times for n=5 -- 0 1 2 3
    {
        int mini=i;
        for(int j=i+1;j<n;j++)//it will run 1 to 4  --     1 2 3 4
        {
            if(a[mini]>a[j])
            {
                mini=j;
            }
        }
        if(mini!=1)
        {
            swap(a[mini],a[i]);
            s++;
        }
    
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<s-1<<endl;
    
}

int main ()
{
    //write your code here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    select_(a,n);
    //return with 0 
    return 0;
}