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
    int sum=0;
    void solve(TreeNode* root, int targetSum,int sum,vector<int>path, vector<vector<int>> &arr)
     {
        if(root==NULL){
            return ;

        }
        sum=sum+ root->val;
        path.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum){
                arr.push_back(path);
                path.pop_back();

            }
            else{
                path.pop_back();
                return ;

            }
        }
        solve(root->left, targetSum,sum , path, arr);
        solve(root->right, targetSum, sum, path, arr);
        path.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum){
        vector<int>path;
        vector<vector<int>> arr;
        int sum=0;
        solve(root, targetSum, sum, path,arr);
        return arr;
        


    }
};