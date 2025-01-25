#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Max priority queue:===========================>
    priority_queue<int> maxpq;
    maxpq.push(5);
    maxpq.push(3);
    maxpq.push(8);
    maxpq.push(2);
    maxpq.push(1);
    cout<<"size: "<<maxpq.size()<<endl;
    cout << "Max Priority Queue (in descending order): ";
    while (!maxpq.empty())
    {
        cout << maxpq.top() << " ";
        maxpq.pop();
    }
    cout << endl;
    // Min priority queue:===========================>
    // priority_queue<int> minpq; =-----> evabe likhle eta max priority queue e thakbe
    priority_queue<int, vector<int>, greater<int>> minpq;  // greater<int>() eita max heap e jabe order reverse hobe.
    minpq.push(5);                                         // greater<int> whole class take use korchi tai () function hishabe dibo na.
    minpq.push(3);
    minpq.push(8);
    minpq.push(2);
    minpq.push(1);
    cout<<"size: "<<minpq.size()<<endl;
    cout << "Min Priority Queue: ";
    while (!minpq.empty())
    {
        cout << minpq.top() << " ";
        minpq.pop();
    }
    cout << endl;

    return 0;
}