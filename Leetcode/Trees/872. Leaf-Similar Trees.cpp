// Consider all the leaves of a binary tree, from left to right order, the values of those leaves form a leaf value sequence.
// Two binary trees are considered leaf-similar if their leaf value sequence is the same.
//
// Return true if and only if the two given trees with head nodes root1 and root2 are leaf-similar.


// Iterative: DFS:
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1, tree2;


        stack<TreeNode*> stk1;
        stk1.push(root1);
        while(!stk1.empty()){
            TreeNode* curr = stk1.top();
            stk1.pop();
            if(curr->left == NULL && curr->right == NULL)           // Leaf node
                tree1.push_back(curr->val);

            if(curr->left != NULL)
                stk1.push(curr->left);
            if(curr->right != NULL)
                stk1.push(curr->right);
        }

        stack<TreeNode*> stk2;
        stk2.push(root2);
        while(!stk2.empty()){
            TreeNode* curr = stk2.top();
            stk2.pop();
            if(curr->left == NULL && curr->right == NULL)           // Leaf node
                tree2.push_back(curr->val);

            if(curr->left != NULL)
                stk2.push(curr->left);
            if(curr->right != NULL)
                stk2.push(curr->right);
        }


        return tree1 == tree2;
    }
};

// Recursive: DFS:

class Solution {
public:
    void dfs(TreeNode* root, vector<int>& tree){
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
            tree.push_back(root->val);
        dfs(root->left, tree);
        dfs(root->right, tree);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1, tree2;
        dfs(root1, tree1);
        dfs(root2, tree2);

        return tree1 == tree2;
    }
};
