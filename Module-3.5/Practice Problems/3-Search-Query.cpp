#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    cin>>q;
    while (q--) //O(nq) complexity
    {
        int x;
        cin>>x;
        auto it=find(v.begin(), v.end(),x); // O(n) complexity
        if(it!=v.end())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    // binary search approach---------> binary search
    return 0;
}
