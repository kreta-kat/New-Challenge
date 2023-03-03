int solve(TreeNode<int> *root, int &k)
{
    if(!root)
    {
        return 0;
    }
    int left= solve(root->left,k);
    if(left)
    {
        return left;
    }
    k--;
    if(k ==0)
    {
        return root->data;
    }
    int right = solve(root->right,k);
    return right;
}
int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    int ans= solve(root,k);
    return ans;
}
