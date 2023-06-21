#include <bits/stdc++.h> 
void find(int ind,vector<int> &num,int n,int sum, vector<int> &ans){

    if(ind==n){
        ans.push_back(sum);
        return;
    }

    find(ind+1,num,n,sum+num[ind],ans);

    find(ind+1,num,n,sum,ans);

}


vector<int> subsetSum(vector<int> &num)
{   
    vector<int> ans;
    int n=num.size();

    find(0,num,n,0,ans);

    sort(ans.begin(),ans.end());
    return ans;

}
