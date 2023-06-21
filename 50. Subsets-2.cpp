#include <bits/stdc++.h> 

void find(int ind, vector<vector<int>> &ans, vector<int> &ds, vector<int> &arr){
    ans.push_back(ds);
   
    for(int i=ind;i<arr.size();i++){
    if(i!=ind && arr[i]==arr[i-1]) continue;
    ds.push_back(arr[i]);
    find(i+1,ans,ds,arr);
    ds.pop_back();
}

}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<int> ds;
    sort(arr.begin(),arr.end());
    find(0,ans,ds,arr);

    return ans;
}
