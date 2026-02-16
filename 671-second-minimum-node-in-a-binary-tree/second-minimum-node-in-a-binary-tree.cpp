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
    void solution (TreeNode*root, vector<int>&ans){
        if (!root){
            return;

        }
        solution(root->left,ans);
        ans.push_back(root->val);
        solution(root->right,ans);
    }

    int findSecondMinimumValue(TreeNode* root) {
        vector<int>ans;
        solution(root,ans);
        int min = root->val;
        long sec = LONG_MAX;

        
        for(int x : ans){
            if(x > min && x < sec)
                sec = x;
        }

        return (sec == LONG_MAX) ? -1 : sec;

        
    }
};