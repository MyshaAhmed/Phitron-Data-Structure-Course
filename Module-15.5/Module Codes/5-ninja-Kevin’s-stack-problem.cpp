#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	stack<int> st;
	for(auto it:s)
	{
		st.push(it);
	}
	string str;
	while(!st.empty())
	{
		str+=st.top();
		st.pop();
	}
	return str;

}
