#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Declaration: map< key, value> map_name; [key, value=any type of value]
    map<string,int> mp;
    // insertion in map:  complexity: O(logn)
    // mp["key"] =value;
    mp["Tamim"]=2;
    mp["lamim"]=5;
    mp["jamim"]=6;
    // print in map: complexity: O(nlogn) for n values
    cout<<mp["Tamim"]<<" "<<mp["lamim"]<<endl;
    // printint something that doesn't exist in map:
    // cout<<mp["rahim"]<<endl; // will give error
    // checking if a key exists: complexity: O(logn)
    if(mp.find("rahim")!=mp.end())
    {
        cout<<"Key exists!"<<endl;
    }
    else
        cout<<"Key does not exist!"<<endl;

    // map printing: complexity: O(nlogn)
    //  as map doesn't have index, we need to use iterator to print
    for(auto i=mp.begin(); i!=mp.end();i++)
        cout<<i->first<<" "<<i->second<<endl;
        // (*i).first--> dereference and dot operator to print iterator

    // mp.count("key"):===========>
    if(mp.count("jamim"))
        cout<< "ache"<<endl;
    else
        cout<< "nai "<<endl;
    return 0;
}