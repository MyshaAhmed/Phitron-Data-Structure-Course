#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(v[i]==0)
        {
            cout<<v[i]<<" ";
        }
        else if(v[i]>0)
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<2<<" ";
        }
    }
 
 
    
    return 0;
}

// solution using stl replace=======>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(v[i]<0)
        {
            replace(v.begin(), v.end(), v[i], 2);
        }
        else if(v[i]==0)
            continue;
        else
            replace(v.begin(), v.end(), v[i], 1);
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }

    return 0;
}