#include <bits/stdc++.h> 

void compareStack(stack<int>&stack, int ele){
	if(stack.empty()|| stack.top()<ele){
		stack.push(ele);
		return;
	}

	int peak=stack.top();
	stack.pop();

	compareStack(stack,ele);

	stack.push(peak);
}




void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}

	int top=stack.top();
	stack.pop();

	sortStack(stack);

	compareStack(stack,top);

	return;
}
