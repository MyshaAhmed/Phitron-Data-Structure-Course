#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin>>Q;
    queue<string> q;
    while(Q--)
    {
        int val;
        cin>>val;
        if(val==0)
        {
            string name;
            cin>>name;
            q.push(name);
        }
        else if(val==1)
        {
            if(!q.empty())
            {
                cout<<q.front()<<endl;
                q.pop();
            }
            else
                cout<<"Invalid"<<endl;
        }
        else
            cout<<"Invalid"<<endl;
        
    }
    return 0;
}