// Given two binary trees and imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not.
//
// You need to merge them into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be used as the node of new tree.

// Recursive:

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1 == NULL)
            return t2;          // returns rest of the subtree
        if(t2 == NULL)
            return t1;          // returns rest of the subtree

        t1->val += t2->val;
        t1->right = mergeTrees(t1->right, t2->right);
        t1->left = mergeTrees(t1->left, t2->left);

        return t1;
    }
};



// Iterative:

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1 == NULL)      // when t1 is an empty tree, we return the 2nd tree
            return t2;
        if(t2 == NULL)
            return t1;

        stack<pair<TreeNode *, TreeNode *>> stk;
        stk.push({t1, t2});

        pair<TreeNode *, TreeNode *> curr;

        while(!stk.empty()){
            curr = stk.top();
            stk.pop();

            if((curr.first) == NULL || (curr.second) == NULL)
                continue;

            (curr.first)->val += (curr.second)->val;

            if((curr.first)->left == NULL)
                    (curr.first)->left = (curr.second)->left;
            else
                stk.push({(curr.first)->left, (curr.second)->left});


            if((curr.first)->right == NULL)
                    (curr.first)->right = (curr.second)->right;
            else
                stk.push({(curr.first)->right, (curr.second)->right});


        }


        return t1;
    }
};
