#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    cout<<v.size()<<endl;

    cout<<v.max_size()<<endl;

    cout<<v.capacity()<<endl;
    v.push_back(60);
    cout<<v.capacity()<<endl; // capacity will be doubled

    v.clear();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    cout<<v.empty()<<endl; // empty will return true or 1

    vector<int> v2 = {10, 20, 30, 40, 50};

    v2.resize(7); 
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    v2.resize(15,100);
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    v2.resize(2);
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    return 0;
}