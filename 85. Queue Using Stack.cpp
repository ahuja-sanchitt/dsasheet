#include<stack>
class Queue {
   stack<int> s1;
   stack<int> s2;
    int size;
    public:
    Queue() {
        size=0;
    }

    void enQueue(int val) {
        s1.push(val);
        size++;
    }

    int deQueue() {
        if(!s2.empty()){
            int ans=s2.top();
            s2.pop();
            return ans;
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        if(s2.empty()){
            return -1;
        }
        int ans=s2.top();
        s2.pop();
        return ans;
    }

    int peek() {
        // Implement the peek() function here.
        if(!s2.empty()){
            int ans=s2.top();
            return ans;
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        if(s2.empty()){
            return -1;
        }

        int ans=s2.top();
        return ans;
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return s1.empty() && s2.empty();
    }
};
