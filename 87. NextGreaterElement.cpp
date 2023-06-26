#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    
    vector<int> nge(n);
    stack<int> s;
    //s.push(-1);

    for(int i=n-1;i>=0;i--){
        int curr=arr[i];

        while(!s.empty()&& s.top()<=curr){
            s.pop();
        }

        if(s.empty()){
            nge[i]=-1;
        }

        else{
            nge[i]=s.top();
        }
    s.push(curr);
    
    }

    return nge;
    

}
