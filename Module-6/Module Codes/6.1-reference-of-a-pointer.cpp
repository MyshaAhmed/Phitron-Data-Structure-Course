#include <bits/stdc++.h>
using namespace std;
void func(int* &p)
{
    cout<<"In func(): "<<&p<<endl;
    int y=100;
    p=&y;
    cout<<"In func(): "<<*p<<endl;
}
int main()
{
    int x=10;
    int* p=&x;
    func(p);
    cout<<"In main: "<<&p<<endl;
    return 0;
}