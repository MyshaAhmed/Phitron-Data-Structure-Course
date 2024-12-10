#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);  // o(n) 
    for (int i = 0; i < n; i++)// o(n)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++) // o(n)
    {
        if(v[i]>0)
        {
            replace(v.begin(), v.end(),v[i],1);
        }
        else if(v[i]<0)
        {
            replace(v.begin(), v.end(),v[i],2);
        }
        else
        {
            replace(v.begin(), v.end(),v[i],0);
        }
        // if(v[i]==0)
        // {
        //     cout<<v[i]<<" ";
        // }
        // else if(v[i]>0)
        // {
        //     cout<<1<<" ";
        // }
        // else
        // {
        //     cout<<2<<" ";
        // }
    }
    for(auto x:v) //o(n)
    {
        cout<<x<<" ";
    }
    //complexity = o(n)
    
    return 0;
}