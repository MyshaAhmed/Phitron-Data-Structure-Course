#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin>>n;
    // set insert complexity: O(logn)
    while(n--)
    {
        int val;
        cin>>val;
        s.insert(val);
    }
    // set print complexity: O(logn)
    for(auto i = s.begin(); i != s.end(); i++)
        cout<<*i<<" "<<endl;

    // set search complexity: O(logn)
    if(s.count(40))
        cout<<"Ache"<<endl;
    else
        cout<<"Nai"<<endl;
    return 0;
}