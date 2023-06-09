#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    int count=0;
    int maxi=0;
    unordered_map<char,int> mp;
    
    for(int i=0;i<input.length();i++){
        char temp=input[i];
        if(mp.find(temp)==mp.end()|| mp[temp]<i-count){
            count++;
            mp[temp]=i;
        }
        else if(mp.find(temp)!=mp.end()){
             maxi=max(count,maxi);
            count=i-mp[temp];
            mp[temp]=i;
        }
    }
    maxi=max(count,maxi);
    return maxi;
   
}
