// Given a binary search tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree, and every node has no left child and only 1 right child.


// M1: time: O(N), space: O(N):
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& sol){
        if(root == NULL)
            return;
        inorder(root->left, sol);
        sol.push_back(root->val);
        inorder(root->right, sol);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> sol;
        inorder(root, sol);

        TreeNode* head = new TreeNode();
        TreeNode* curr = new TreeNode();
        head = curr;

        for(auto x : sol){
            curr->left = NULL;
            curr->right = new TreeNode(x);
            curr = curr->right;
        }
        return head->right;
    }
};


// M2: time: O(N), space: O(H):
class Solution {
public:
    TreeNode* curr = new TreeNode();
    void inorder(TreeNode* root, vector<int>& sol){
        if(root == NULL)
            return;
        inorder(root->left, sol);

        root->left = NULL;
        curr->right = root;
        curr = root;

        inorder(root->right, sol);
    }

    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* head = new TreeNode(0);
        curr = head;
        inorder(root);

        return head->right;
    }
};
