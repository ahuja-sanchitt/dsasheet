#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int minp=INT_MAX;
    int maxpro=0;
    
    for(int i=0;i<prices.size();i++){
        minp=min(minp,prices[i]);
        maxpro=max(maxpro,prices[i]-minp);
    }
    return maxpro;
}
