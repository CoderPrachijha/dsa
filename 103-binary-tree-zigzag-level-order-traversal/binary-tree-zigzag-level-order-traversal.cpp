class Solution {
public:
    vector<vector<int>> element(TreeNode* root){
        vector<vector<int>> ans;
        if(root == NULL) return ans;

        queue<TreeNode*> q;
        stack<int> s;
        bool reverse = false;  

        q.push(root);

        while(!q.empty()){
            int size = q.size();
            vector<int> level;

            for(int i = 0; i < size; i++){
                TreeNode* curr = q.front();
                q.pop();

                if(reverse)
                    s.push(curr->val);
                else
                    level.push_back(curr->val);

                
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }

            
            while(!s.empty()){
                level.push_back(s.top());
                s.pop();
            }

            ans.push_back(level);
            reverse = !reverse;
        }

        return ans;
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        return element(root);
    }
};
