#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int sum = accumulate(v.begin()+l-1,v.begin()+r,0);
        cout<<sum<<endl;
    }
    //complexity = o(n)
    return 0;
}