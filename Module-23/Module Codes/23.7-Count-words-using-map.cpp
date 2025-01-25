#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp;
    while(ss >> word) // o(nlogn)
    {
        mp[word]++; // o(logn)
    }
    for(auto it : mp) // o(nlogn)
    {
        cout<<it.first<<" "<<"occured"<<" "<<it.second<<" times"<<endl; // o(logn)
    }
    // for(auto it=mp.begin();it!=mp.end();it++) // o(nlogn)
    // {
    //     cout<<it->first<<" "<<"occured"<<" "<<it->second<<" times"<<endl; // o(logn)
    //}
    return 0;
    // input:
// i love football they love football we love football
}