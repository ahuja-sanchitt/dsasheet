#include <bits/stdc++.h> 

static bool cmp(vector<int>&a, vector<int> &b){
    return a[1]>b[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
    sort(jobs.begin(),jobs.end(),cmp);

    int n=jobs.size();
    int profit=0;
    int maxi_dead=jobs[0][0];

    for(int i=0;i<n;i++){
        maxi_dead=max(maxi_dead,jobs[i][0]);
    }

    vector<int> arr(maxi_dead+1,-1);

    int count=0;

    for(int i=0;i<n;i++){
        for(int j=jobs[i][0];j>=1;j--){
          if (arr[j] == -1) {
            arr[j] = jobs[i][0];
            count++;
            profit += jobs[i][1];
            break;
          }
        }
    }
    
    return profit;
    

}
