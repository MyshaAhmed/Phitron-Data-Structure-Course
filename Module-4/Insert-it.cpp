#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<"\\";
        
        int spc=n-(i*2+2);
        for(int k=0;k<spc;k++)
        {
            cout<<" ";
        }
        cout<<"/"<<endl;
    }
    
    for(int i=0;i<n/2;i++)
    {   
        cout<<" ";
    }
    cout<<"X"<<endl;
        
    for(int i=n/2-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<"/";
        
        int spc=n-(i*2+2);
        for(int k=0;k<spc;k++)
        {
            cout<<" ";
        }
        cout<<"\\"<<endl;

    }
    // Write your code here

    return 0;
}
