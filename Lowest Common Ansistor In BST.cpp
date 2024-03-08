class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // BC
        if(root==NULL)
        return NULL;
          
          if(p->val < root->val && q->val< root-> val)
          return lowestCommonAncestor(root->left,p,q);

          if(root->val<p->val && q->val>root->val)
          return lowestCommonAncestor(root->right,p,q);

          else
          return root;

    }
};