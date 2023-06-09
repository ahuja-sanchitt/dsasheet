#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &nums, int target) {

        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
              if (nums[i] + nums[j] == target) {
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                ans.push_back(temp);
              }
            }
        }

        return ans;
}
