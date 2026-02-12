class Solution {
public:

    bool ismirror(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }

        if (p && q) {
            return (p->val == q->val)
                && ismirror(p->left, q->right)
                && ismirror(p->right, q->left);
        }

        return false;
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return ismirror(root->left, root->right);
    }
};
