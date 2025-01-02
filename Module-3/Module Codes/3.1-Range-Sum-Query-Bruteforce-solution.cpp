/*
Y. Range sum query
--------------------
time limit per test1.5 seconds
memory limit per test256 megabytes
Given 2 numbers N
 and Q
, an array A
 of N
 number and Q
 number of pairs L
, R
. For each query Q
 print a single line that contains the summation of all numbers from index L
 to index R
.

Input
First line contains two numbers N
, Q
 (1≤N,Q≤105)
 where N
 is number of elements in A
 and Q
 is number of query pairs.

Second line contains N
 numbers(1≤Ai≤109)
.

Next Q
 lines contains L,R
 (1≤L≤R≤N)
.

Output
For each query Q
 print a single line that contains the summation of all numbers from index L
 to index R
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int sum=0;
        for(int i=l; i<=r; i++)
        {
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
    //complexity = o(Q*N)=O(N^2)
    return 0;
}