#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<int> pre(n);
    pre[0] = v[0];
    for(int i=1; i<n; i++) // O(n) complexity
    {
        pre[i] = pre[i-1] + v[i];
    }
    cout<<pre[n-1]<<endl;  // O(1) complexity

    int sum=(n*(n+1))/2; // O(1) complexity
    cout<<sum<<endl;
   

    return 0;
}