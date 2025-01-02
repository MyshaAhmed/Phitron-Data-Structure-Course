#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector element access:----> 2 ways to access
    vector<int> v={1,2,3,4,5,6,7,8,9};
    cout<<"vector element access:"<<endl;
    cout<<v[3]<<endl;
    cout<<v.at(3)<<endl;

    // first element access:----> 3 ways to access
    cout<<"first element access:"<<endl;
    cout<<*v.begin()<<endl;
    cout<<v.front()<<endl;
    cout<<v[0]<<endl;

    // last element access: ----> 3 ways to access
    cout<<"last element access:"<<endl;
    cout<<v[v.size()-1]<<endl;
    cout<<*v.rbegin()<<endl;
    cout<<v.back()<<endl;
    return 0;
}