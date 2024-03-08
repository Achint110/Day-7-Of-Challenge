class Solution {
public:
    int kthSmallest(TreeNode* root, int &k) {
        // BC 
        if(root==NULL)
        return -1;
        
        // Inorder
        int leftAns=kthSmallest(root->left,k);
        if(leftAns!=-1)
        return leftAns;

        // At Middle or LNR ke N pr

        k--;

        if(k==0)
        return root->val;
int rightAns=kthSmallest(root->right,k);
return rightAns;

    }
};