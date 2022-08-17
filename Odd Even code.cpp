#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
   cin>>n;
    int i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
       cout<<a[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        cout<<a[i]<<" ";
    }
    return 0;
}
