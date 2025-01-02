#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 2 types of input: 
    // when size is declared in initialization:==============>
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    // when size is not declared in initialization:=============>
    int n2;
    cin>>n2;
    vector<int>v1;
    for(int i=0; i<n2; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for(auto it:v1)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}