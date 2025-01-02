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
    int x;
    cin>>x;
    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(x==v[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}