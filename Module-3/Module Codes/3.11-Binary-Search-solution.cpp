#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0; i<n; i++) // O(n)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());  // O(nlogn)
    while(q--)
    {
        int x;
        cin>>x;
        int flag=0;

        int l=0;
        int r=n-1;
        while(l<=r)  // O(logn)
        {
            int mid=(l+r)/2;
            if(v[mid]==x)
            {
                flag=1;
                break;
            }
            else if(v[mid]<x)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(flag==1)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
    }
    return 0;
}