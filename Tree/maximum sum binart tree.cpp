


For each node there can be four ways that the max path goes through the node: 

1. Node only 

2. Max path through Left Child + Node 

3. Max path through Right Child + Node 

4. Max path through Left Child + Node + Max path through Right Child

The idea is to keep trace of four paths and pick up the max one in the end. An important thing to note is, root of every subtree need to return maximum path sum such that at most one child of root is involved. This is needed for parent function call. In below code, this sum is stored in ‘max_single’ and returned by the recursive function.

https://www.techiedelight.com/maximum-path-sum-binary-tree/



int result=INT_MIN;
    int maxPathSum(TreeNode* node) {
         util(node);
         return result;     
    }
  
    int util(TreeNode* node){
         
        if (node == NULL) return 0;
      
        int left = util(node->left);
        int right = util(node->right);
  
        result = max(result, node->val);
        result = max(result, node->val + left);
        result = max(result, node->val + right);
        result = max(result, node->val + left + right);
        return max(node->val, node->val + max(left, right));  
      
    }