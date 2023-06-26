#include <bits/stdc++.h> 
class Queue {
    private:
     int* arr;
     int qfront;
     int rear;
     int size;
public:
    Queue() {
        size=1000;
        arr=new int[size];
        qfront=0;
        rear=0;

    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(rear==qfront){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        if(rear==size){
            return;
        }
        else{
            
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        if(rear==qfront){
            return -1;
        }
        else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;

            if(rear==qfront){
                rear=0;
                qfront=0;
            }
            return ans;
        }
    }

    int front() {
        if(rear==qfront){
            return -1;
        }    
        else{
            return arr[qfront];
        }
    
    }
};
