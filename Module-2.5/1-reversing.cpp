#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);  // o(n) 
    for (int i = 0; i < n; i++)  // o(n)
    {
        cin >> v[i];
    }
    reverse(v.begin(), v.end()); //o(n)
    for (int i = 0; i < n; i++) // o(n)
    {
        cout << v[i]<<" ";
    }

    //complexity = o(n)
    return 0;
}