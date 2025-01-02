#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<string> v(n);
    for(int i=0; i<n; i++)
    {
        getline(cin, v[i]);
    }
    for(auto it: v)
    {
        cout<<it<<endl;
    }
    /*
    input:====>
    5
    rakib khan
    sakib khan
    akib khan
    rifa khan
    sifat khan
    */
    return 0;
}