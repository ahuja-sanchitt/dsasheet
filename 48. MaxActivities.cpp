#include<bits/stdc++.h>

static bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}



int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int,int>> check;

    for(int i=0;i<start.size();i++){
        pair<int,int> p=make_pair(start[i],finish[i]);
        check.push_back(p);
    }

    sort(check.begin(),check.end(),cmp);
    int count=1;
    int end=check[0].second;

    for(int i=1;i<start.size();i++){
        if(check[i].first>=end){
            count++;
            end=check[i].second;
        }
    }

    return count;
}
