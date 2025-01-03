#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> l;
    string val;
    while(1)
    {
        cin>>val;
        if(val=="end")
            break;
        l.push_back(val);
    }
    // for(auto it : l)
    // {
    //     cout<<it<<" ";
    // }
    int q;
    cin>>q;
    auto it=l.begin();
    while(q--)
    {
        string visit,address;
        cin>>visit;
        if(visit=="visit")
        {
            cin>>address;
            auto value = find(l.begin(), l.end(), address);
            if(value!=l.end())
            {
                it=value;
                cout<<*it<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(visit=="prev")
        {
            if(it != l.begin())
            {
                --it;
                cout<<*it<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(visit=="next")
        {
            if(it != prev(l.end()))
            {
                ++it;
                cout<<*it<<endl; 
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
        else
        {
            cout<<"Not Available"<<endl;
        }   
            
    }
    
    return 0;
}