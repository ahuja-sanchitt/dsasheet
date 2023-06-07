class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
     
    int rows=mat.size();
    int columns=mat[0].size();

    int i=0; int j=columns-1;

    while(i<rows && j>=0){
        if(mat[i][j]==target){
            return true;
        }

        if(mat[i][j]>target){
            j--;
        }
        else{
            i++;
        }
    }

    
    return false;   
    }
};
