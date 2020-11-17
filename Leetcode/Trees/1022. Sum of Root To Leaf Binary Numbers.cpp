// You are given the root of a binary tree where each node has a value 0 or 1.  Each root-to-leaf path represents a binary number starting with the most significant bit.  For example, if the path is 0 -> 1 -> 1 -> 0 -> 1, then this could represent 01101 in binary, which is 13.
//
// For all leaves in the tree, consider the numbers represented by the path from the root to that leaf.
//
// Return the sum of these numbers. The answer is guaranteed to fit in a 32-bits integer.


// Recursive: preorder:

class Solution {
public:
    int sum = 0;
    void preorder(TreeNode* root, int num){
        if(root == NULL)
            return;

        num = (num << 1) | (root->val);
        if(root->left == NULL && root->right == NULL){
            sum += num;
            return;
        }

        preorder(root->left, num);
        preorder(root->right, num);
    }

    int sumRootToLeaf(TreeNode* root) {
        preorder(root, 0);
        return sum;
    }
};


// Iterative preorder traversal:

class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        if(root == NULL)
            return 0;

        int sol = 0;
        stack<pair<TreeNode*, int>> stk;
        stk.push({root, 0});

        while(!stk.empty()){
            pair<TreeNode*, int> temp = stk.top();
            stk.pop();
            TreeNode* curr = temp.first;
            int curr_val = temp.second;


            curr_val = (curr_val << 1) | (curr->val);
            if(curr->left == NULL && curr->right == NULL)
                sol += curr_val;

            if(curr->right != NULL)
                stk.push({curr->right, curr_val});
            if(curr->left != NULL)
                stk.push({curr->left, curr_val});
        }
        return sol;
    }
};
