#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    vector<long long int> v(n);
    for(long long int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    int flag=0;
    for(long long int i=1; i<v.size();i++)
    {
        if(v[i]==v[i-1])
        {
            flag=1; 
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
