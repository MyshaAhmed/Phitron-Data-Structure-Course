#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    { 
        set<int> s;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            s.insert(val);
        }
        for(auto i: s)
            cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}
