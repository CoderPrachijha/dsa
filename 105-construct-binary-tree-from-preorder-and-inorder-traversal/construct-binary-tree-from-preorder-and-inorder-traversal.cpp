class Solution {
public:
    int preIndex = 0;

    TreeNode* cTree(vector<int>& in, vector<int>& pre, int is, int ie) {
        if(is > ie) return NULL;

        TreeNode* root = new TreeNode(pre[preIndex++]);

        int inIndex;
        for(int i = is; i <= ie; i++) {
            if(in[i] == root->val) {
                inIndex = i;
                break;
            }
        }

        root->left = cTree(in, pre, is, inIndex - 1);
        root->right = cTree(in, pre, inIndex + 1, ie);

        return root;   
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        preIndex = 0;
        return cTree(inorder, preorder, 0, inorder.size() - 1);
    }
};
