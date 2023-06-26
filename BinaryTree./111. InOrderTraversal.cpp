void solve(TreeNode* root, vector<int>&ans){
    if(root==NULL){
        return;
    }

    solve(root->left,ans);
    ans.push_back(root->data);
    solve(root->right,ans);
    

}
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    solve(root,ans);
    return ans;
}
