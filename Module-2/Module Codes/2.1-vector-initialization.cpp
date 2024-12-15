#include <bits/stdc++.h>
using namespace std;
int main()
{
    // type: 1---------->
    vector<int> v;

    // type: 2---------->
    vector<int> v1(5);

    // type: 3---------->
    // vector print:
    vector<int> v2(10,-1);
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }

    cout<<endl;
    // type: 4---------->
   vector<int> v3(v2);
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    }

    cout<<endl;
    // type: 5---------->
    // copying array in vector 
    int a[5]={1,2,3,4,5};
    vector<int> v4(a,a+5);
    for(int i=0; i<v4.size(); i++)
    {
        cout<<v4[i]<<" ";
    }

    cout<<endl;
    // type: 6---------->
    //we can directly initialize vector like array at the beginning 
    vector<int> v5={1,23,5,6,57,68};
    for(int i=0; i<v5.size(); i++)
    {
        cout<<v5[i]<<" ";
    }

    return 0;
}