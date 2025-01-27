#include <bits/stdc++.h>

using namespace std;



int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n,q;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        pq.push(val);
    }
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            int y;
            cin>>y;
            pq.push(y);
            cout<<pq.top()<<endl;
        }
        else if(x==1)
        {
            if(pq.empty()) 
            {
                cout<<"Empty"<<endl;
                continue;
            }
            else
                cout<<pq.top()<<endl;
        }
        else if(x==2)
        {
            if(pq.empty()) 
            {
                cout<<"Empty"<<endl;
                continue;
            }  
            else
            {
                pq.pop();
                if(pq.empty()) 
                    cout<<"Empty"<<endl;
                else
                    cout<<pq.top()<<endl;
            }
            
        }
    }
    
    return 0;
}
