class Solution {
public:
      void storeInorder(TreeNode* root, vector<int>&inorder){

          if(root==NULL)
          return ;


           storeInorder(root->left,inorder);
         inorder.push_back(root->val);
         storeInorder(root->right,inorder);

      }
     

    bool findTarget(TreeNode* root, int k) {
        // if(root==NULL)
        // return false;
vector<int>inorder;
storeInorder(root,inorder);

int s=0,e=inorder.size()-1;
while(s<e){

if(inorder[s]+inorder[e]==k)
return true;

if(inorder[s]+inorder[e]>k)
e--;

else 
// (inorder[s]+inorder[e]<k)
s++;



}
return false;
    }
};