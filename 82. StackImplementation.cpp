#include <bits/stdc++.h> 
// Stack class.
class Stack {
    public:
    int* arr;
    int top1;
    int max_size;
    
public:
    
    Stack(int capacity) {
        arr=new int[capacity];
        top1=-1;
        max_size=capacity;
    }

    void push(int num) {
        
        if(!isFull()){
            arr[++top1]=num;
        }
        else{
            return;
        }

    }

    int pop() {
        if(!isEmpty()){
            return arr[top1--];
        } else {
          return -1;
        }
    }
    
    int top() {
        return(top1!=-1)?(arr[top1]):(-1);
    }
    
    int isEmpty() {
        return(top1==-1)?(1):(0);
    }
    
    int isFull() {
        return (top1==max_size);
    }
    
};
