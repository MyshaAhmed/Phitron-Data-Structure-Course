#include <bits/stdc++.h>
using namespace std;
void heap_insert(vector<int> & v, int val)
{
    v.push_back(val);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0) 
    {
        int parent_idx =(cur_idx -1)/2;
        if (v[parent_idx]< v[cur_idx]  )
        {
            swap(v[parent_idx], v[cur_idx]);
            cur_idx = parent_idx;
        }
        else
            break;
        cur_idx = parent_idx;
    }
}

void print_heap(vector<int> v)
{
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        heap_insert(v,val);
    }   
    cout<<"before insert"<<endl;
    int val;
    cin>>val;  // insert a new value to heap, then print the heap again.
    print_heap(v);
    heap_insert(v,val);

    cout<<"After insert"<<endl;
    print_heap(v);
   
    /*
    10          Input:            
                23 15 21 13 9 19 8 2 4 7 
                18

                Output:
                before insert
                23 15 21 13 9 19 8 2 4 7
                After insert
                23 18 21 13 15 19 8 2 4 7 9
    */ 
    return 0;
}

// pias bhai:
// =================================
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin  >> v[i];
    int val;
    cin >> val;
    v.push_back(val);
    int cur_idx = v.size()-1;
    while(cur_idx != 0)
    {
        int par_idx = (cur_idx-1)/2;
        if(v[par_idx] < v[cur_idx])
            swap(v[par_idx],v[cur_idx]);
        else
            break;
        cur_idx = par_idx;
    }
    for(int x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}