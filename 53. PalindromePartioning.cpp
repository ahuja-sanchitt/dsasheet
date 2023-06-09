#include <bits/stdc++.h> 
bool isPalin(string &s, int start, int end){

    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }

    return true;
}

void func(int index, string &s, vector<string> &path, vector<vector<string>> &ans){

    if(index==s.size()){
        ans.push_back(path);
        return;
    }

    for(int i=index;i<s.size();i++){
        if(isPalin(s,index,i)){
            path.push_back(s.substr(index,i-index+1));
            func(i+1,s,path,ans);
            path.pop_back();
        }
    }


}

vector<vector<string>> partition(string &s) 
{

    vector<vector<string>> ans;
    vector<string> path;

    func(0,s,path,ans);
    return ans;
    
}

