#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);  // o(n) 
    vector<int> b(n);  // o(n) ;
    for (int i = 0; i < n; i++)  // o(n)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)  // o(n)
    {
        cin >> b[i];
    } 
    vector<int> c(b);
    for (int i = 0; i < a.size(); i++) // o(n)
    {
        c.push_back(a[i]);
    }
    for(auto x:c)
    {
        cout<<x<<" ";
    }
    //complexity = o(n)
    return 0;
}