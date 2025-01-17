#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int>p;
    p = make_pair(10, 20);
    cout << "First element: " << p.first << endl;
    cout << "Second element: " << p.second << endl;

    pair<string, int> p2;
    p2={"hello",5};
    cout<<"First element: " << p2.first <<endl<<"Second element:" << p2.second<<endl;
    
    // pair can contain multiple data type===> but 2 types only
    pair<char,double>;

    // Vector of pair:
    vector<pair<int,int>> v(5);
    // pair input:
    for(int i=0; i<5; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    // pair output:
    for(int i=0; i<5; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;

    /* 
    pair input:
    5 3
    3 5
    7 7
    4 5
    6 7
    
    */ 
}