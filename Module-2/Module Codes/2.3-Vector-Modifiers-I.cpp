#include <bits/stdc++.h>
using namespace std;
int main()
{
    //assigning values in vector:
    // = operator or v.assign(value) ====>
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2;
    v2=v1;
    cout << "v2: "<<endl;
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;


    // range based for loop====>
    cout<<"range based for loop:"<<endl;
    for(auto it:v2)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    // v.push_back() :----> adding value at the end of the vector
    v2.push_back(6);
    cout << "v2 after push_back: "<<endl;
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    // v.pop_back() :-----> deleting value from the last
    v2.pop_back();
    cout<<"v2 after pop_back():"<<endl;
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    // insert(position,value):---->   inserting a single value: 
    cout<<"inserting a single value:"<<endl;
    v2.insert(v2.begin()+2, 7);
    cout << "v2 after inserting 7 at position 2: ";
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    // insert(position,value begin to end):---->  multiple value insert:
    cout<<"multiple value insert in v1: "<<endl;
    v1.insert(v1.begin()+2,v2.begin(),v2.end());
    for(auto it: v1)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // v.erase(position) :----------> deletes value from certain position
    cout<<"deletes value from certain position:"<<endl;
    v1.erase(v1.begin()+2);
    for(auto it: v1)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // v.erase(start position, end position) :----------> deletes  multiple value from certain position
    cout<<"deletes multiple value from certain position:---> not working"<<endl;
    // v1.erase(v1.begin()+1,v1.end()+5); // 2--->5 value will be deleted
    // for(auto it: v1)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    // replace(position, value to replace, which value will be put as replaced value); :---> not under stl
    cout<<"replacing value :"<<endl;
    replace(v2.begin(),v2.end(),2,100);
    for(auto it: v2)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    cout<<"another example of replace:"<<endl;
    vector<int> v3={1,2,3,4,5,2,2};
    replace(v3.begin(),v3.end()-1,2,100);
    for(auto it: v3)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // find(position, value) :----------> not under stl :---> returns an iterator
    auto it =find(v3.begin(),v3.end(),2);
    if(it!=v3.end())
    {
        cout<<"Found at position: "<<distance(v3.begin(),it)<<endl;
    }
    else
        cout<<"Not found!"<<endl;

    auto it2 =find(v3.begin(),v3.end(),200);
    if(it2!=v3.end())
    {
        cout<<"Found at position: "<<distance(v3.begin(),it)<<endl;
    }
    else
        cout<<"Not found!"<<endl;
    return 0;
}