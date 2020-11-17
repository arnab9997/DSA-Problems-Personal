// Given the root node of a binary search tree, return the sum of values of all nodes with value between L and R (inclusive).
//
// The binary search tree is guaranteed to have unique values.


class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root == NULL)
            return 0;
        if(root->val >= L && root->val <= R)
            return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
        else
            return rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
    }
};
