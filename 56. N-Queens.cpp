vector<vector<int>> ans;
void solve(int col, vector<vector<int>> &dp, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> lowerDiagonal, int n)

{   if(col == n)

   {
       vector<int> temp;
       for(auto it:dp)
       {
           for(int i:it)
               temp.push_back(i);
       }  
       ans.push_back(temp);
    return;

   }  

   for(int row=0; row<n; row++)   {
       if(leftRow[row]==0 && upperDiagonal[n-1 + col - row]==0 && lowerDiagonal[row+col]==0)
       {
           dp[row][col] = 1;
           leftRow[row] = 1;
           lowerDiagonal[row+col] = 1;
            upperDiagonal[n-1 + col - row] = 1;
           solve(col+1, dp, leftRow, upperDiagonal, lowerDiagonal, n);
           dp[row][col] = 0;
           leftRow[row] = 0;
           lowerDiagonal[row+col] = 0;
           upperDiagonal[n-1 + col - row] = 0;          

       }

   } 

}

vector<vector<int>> solveNQueens(int n) {
   vector<vector<int>> dp(n, vector<int>(n, 0));
   vector<int> leftRow(n, 0), upperDiagonal(2*n-1, 0), lowerDiagonal(2*n-1,0);
   solve(0, dp, leftRow, upperDiagonal, lowerDiagonal, n);  

   return ans;

}
