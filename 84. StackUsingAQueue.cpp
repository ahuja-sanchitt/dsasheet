#include <bits/stdc++.h> 
class Stack {
	queue<int> q1,q2;

   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return q2.size();
    }

    bool isEmpty() {
        if(q2.empty()){
            return true;
        }
        return false;
    }

    void push(int element) {
        q1.push(element);

        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1,q2);
    }

    int pop() {
        int ans;
        if(q2.empty()){
            ans=-1;
        }
        else{
            ans=q2.front();
            q2.pop();
        }
        return ans;
    }


    int top() {
        if(q2.empty()){
            return -1;
        }
        return  q2.front();
    }
};
