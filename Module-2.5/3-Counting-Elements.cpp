#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    vector<int> v(n); //o(n)
    for (int i = 0; i < n; i++) //o(n)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) //o(n +n)=o(n)
    {
        auto it =find(v.begin(),v.end(),v[i]+1);
        if(it!=v.end())
        {
            count++;
        }
    }
    cout<<count<<endl;
    
 //complexity = o(n)
    
    return 0;
}