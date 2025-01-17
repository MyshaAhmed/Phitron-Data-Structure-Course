#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		stack<int> st,st_min;
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			st.push(num);
			if(st_min.empty())
				st_min.push(num);
			else if(st_min.top()>=num)
				st_min.push(num);
			// Write your code here.
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{

			if(st.empty())
				return -1;
			int topelement=st.top();
			if(st.top()==st_min.top())
				st_min.pop();
			st.pop();
			return topelement;
			// Write your code here.
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(st.empty())
				return -1;
			return st.top();
			// Write your code here.
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(st_min.empty())
				return -1;
			return st_min.top();
			// Write your code here.
		}
};