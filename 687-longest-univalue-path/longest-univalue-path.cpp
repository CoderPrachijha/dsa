/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:  
    int ans=0;
    int path(TreeNode* root){
       

        if(root==NULL) {
            return 0;


        }
        int lh =path(root->left);
        int rh =path(root->right);

        int left =0;
        int right =0;
        if(root->left && root->val==root->left->val){
            left=lh+1;
        }
        if(root->right && root->val==root->right->val){
            right=rh+1;
        }
         ans=max(ans,left+right);
        return max(left,right);

    }
    int longestUnivaluePath(TreeNode* root) {
        path(root);
        return ans; 


        
    }
};