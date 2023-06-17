#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    vector<int> arr={1,2,5,10,20,50,100,500,1000};
    int tc=0;
    int i=8;
    while(amount && i>=0){
        if(amount<arr[i]){
            i--;
            continue;
            
        }
        else{
            tc++;
            amount=amount-arr[i];
            
        }
    }
return tc;
}
