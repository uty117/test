
//BST LCA


TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      
        if(!root) return NULL;
      
        if(p->val >root->val && q->val > root->val) return lowestCommonAncestor(root->right,p,q);
        if(p->val <root->val && q->val < root->val) return lowestCommonAncestor(root->left,p,q); 
        
      return root;
      
      
      
    }









//BINARY TREE
	The idea is to traverse the tree starting from the root. If any of the given keys (n1 and n2) matches with the root, then the root is LCA (assuming that both keys are present). If the root doesn’t match with any of the keys, we recur for the left and right subtree. The node which has one key present in its left subtree and the other key present in the right subtree is the LCA. If both keys lie in the left subtree, then the left subtree has LCA also, otherwise, LCA lies in the right subtree.  
tc: o(n)
sc: o(n)






    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
      
      
         if (root == NULL) return NULL;

         if (root->val == n1->val || root->val == n2->val)
          return root;
 
          TreeNode *left_lca  = lowestCommonAncestor(root->left, n1, n2);
          TreeNode *right_lca = lowestCommonAncestor(root->right, n1, n2);
 

          if (left_lca && right_lca)  return root;
          return (left_lca != NULL)? left_lca: right_lca;
       
    }