#include <bits/stdc++.h> 

bool isSafe(vector<vector<int>>&mat, vector<int> &col, int curr,int colu,int n){
    for(int i=0;i<n;i++){
        if(i!=curr && mat[i][curr]==1 && col[i]==colu) return false;
    }
    return true;

}


bool solve(vector<vector<int>>&mat, vector<int>&col, int curr,int m, int n){

    if(curr==n){
        return true;
    }

    for(int i=1;i<=m;i++){
        if(isSafe(mat,col,curr,i,n)){
            col[curr]=i;
            if(solve(mat,col,curr+1,m,n)) return true;
            col[curr]=-1;
        }
    }
    return false;


}



string graphColoring(vector<vector<int>> &mat, int m) {
    int n=mat.size();
    vector<int>col(n,-1);
    if(solve(mat,col,0,m,n)) return "YES";
    return "NO";
}
