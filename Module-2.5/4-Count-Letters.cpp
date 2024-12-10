#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> v(26);
    for(int i=0; i<s.size(); i++)
    {
        int index=s[i]-'a';
        v[index]++;
    }
    for(int i=0; i<26; i++)
    {

        if(v[i] >0)
        {
            cout<<char('a'+i)<<" : "<<v[i]<<endl;
        }
    }
    //complexity = o(n)
    return 0;
}