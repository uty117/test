






bool aremirror(TreeNode* a,TreeNode* b){

if(a==NULL && b==NULL) return true;
if(a==NULL ||  b==NULL) return false;

return a->data==b->data && aremirror(a->left,b->right) && aremirror(a->left,b->right)

}