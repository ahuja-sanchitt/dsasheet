#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    int count=0;
    int maxi=0;
    for(int i=0;i<n-1;i++){
        if((arr[i+1]-arr[i])==1){
            count++;
        }

        else if((arr[i+1]-arr[i])!=0){
            count=0;
        }

        maxi=max(count,maxi);
    }

    return maxi+1;
}
