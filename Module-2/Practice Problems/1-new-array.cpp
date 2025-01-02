#include <bits/stdc++.h>
using namespace std;
void concatenate(vector<int> &a, vector<int> &b)
{
    vector<int> c(b);
    for (int i = 0; i < a.size(); i++) // o(n)
    {
        c.push_back(a[i]);
    }
    for(auto x:c)
    {
        cout<<x<<" ";
    }
}
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
    concatenate(a, b); // o(n) + o(n) = 2*o(n) = o(n)
    
    //complexity = o(n)
    return 0;
}