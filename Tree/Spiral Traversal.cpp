 










vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
      
        deque<TreeNode*> q;
        int direction=0;
        q.push_back(root);
        while(!q.empty()){
          int n=q.size();
          vector<int> ans;
          
          for(int i=1;i<=n;i++){
            
            if(direction==0){
              TreeNode* temp=q.back();
              q.pop_back();
              ans.push_back(temp->val);
              if(temp->left) q.push_front(temp->left);
              if(temp->right) q.push_front(temp->right);  
            } else {
              TreeNode* temp=q.front();
              q.pop_front();
              ans.push_back(temp->val);
              if(temp->right) q.push_back(temp->right);
              if(temp->left) q.push_back(temp->left);
            }
              
           
            
          }
           
           direction=1-direction;
           res.push_back(ans);
          
          
          
          
          
        }
      return res; 
        
    }