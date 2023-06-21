#include <bits/stdc++.h> 

void perm(int ind, string&s, vector<string> &ans){
    if(ind==s.size()){
        ans.push_back(s);
    }

    for(int i=ind;i<s.size();i++){
        swap(s[i],s[ind]);
        perm(ind+1,s,ans);
        swap(s[i],s[ind]);
    }
}


vector<string> findPermutations(string &s) {
    vector<string>ans;

    perm(0,s,ans);
    
    return ans;
}
