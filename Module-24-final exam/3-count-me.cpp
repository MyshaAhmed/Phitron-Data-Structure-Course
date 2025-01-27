#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        stringstream ss(str);
        string word;
        map<string,int> mp;
        int max=0;
        string name;
        while(ss>>word)
        {
            mp[word]++;
            if(mp[word]>max)
            {
                max=mp[word];
                name=word;
            } 
        }
    
        cout<<name<<" "<<max<<endl;
    }
    

    return 0;
}
