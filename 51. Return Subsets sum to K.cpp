void findcombination(int ind, int k, vector<int> &arr,vector<vector<int>> &ans, vector<int> &ds ){
    if(ind==arr.size()){
        if(k==0){
            ans.push_back(ds);
        }
        return;
    }

      ds.push_back(arr[ind]);
      findcombination(ind+1,k-arr[ind],arr,ans,ds);
      ds.pop_back();
      findcombination(ind+1,k,arr,ans,ds);

}








vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
   vector<int> ds;
   vector<vector<int>> ans;

   findcombination(0, k, arr, ans,ds);
   return ans;

}
