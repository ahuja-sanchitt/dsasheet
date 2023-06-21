#include <bits/stdc++.h> 

void solve(int index, string t, string &s, unordered_map<string,int> &mp, vector<string> &ans){
    if(index==s.length()){
        ans.push_back(t);
        return;
    }

    string a;

    for(int i=index;i<s.length();i++){
    a+=s[i];
    if(mp.find(a)!=mp.end()){
        if(t.length()==0)
            solve(i+1,t+a,s,mp,ans);
         else 
          solve(i+1, t +" "+ a, s, mp, ans);
        
    }
}
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    unordered_map<string,int> mp;
   
   for(auto it:dictionary){
       mp[it]++;
   }

    string t;
    vector<string>ans;
    solve(0,t,s,mp,ans);

    return ans;

}
