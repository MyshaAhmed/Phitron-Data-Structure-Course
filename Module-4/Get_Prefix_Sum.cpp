#include <bits/stdc++.h>

using namespace std;



int main()
{
    long long int n;
    cin>>n;
    vector<long long int> v(n+1);
    for(long long int i=1;i<=n;i++)
    {
        cin>>v[i];
    }

    vector<long long int> pre(n+1);
    pre[1]=v[1];
    for(long long int i=2;i<=n;i++)
    {
        pre[i]=v[i]+pre[i-1];
    }
   
    for(long long int i=n;i>=1;i--)
    {
        cout<<pre[i]<<" ";
    }
    // Write your code here

    return 0;
}
