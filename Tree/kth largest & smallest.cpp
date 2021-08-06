
//as inorder traversal is always in sorted order so if we want smallest then we will directly apply inorder till k times and if we want largest the we change the logic of inorder to get the kth largest 



	//Time Complexity: 0(n)
	//Space Complexity:(1)


int res=0;
void inorder(TreeNode* root, int& k) {
    if (!root) return;
    inorder(root->left, k);
    if (--k == 0) res = root->val;
    inorder(root->right, k);
}
int kthSmallest(TreeNode* root, int k) {
    inorder(root, k);
    return res;
}