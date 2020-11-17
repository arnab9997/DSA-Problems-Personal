// Given a binary tree root and a linked list with head as the first node.
//
// Return True if all the elements in the linked list starting from the head correspond to some downward path connected in the binary tree otherwise return False.
//
// In this context downward path means a path that starts at some node and goes downwards.


class Solution {
public:
    bool isSubPathUtil(ListNode *head, TreeNode* root){
        if(head == NULL)
            return true;
        if(root == NULL)
            return false;

        if(root->val == head->val)
            return isSubPathUtil(head->next, root->left) || isSubPathUtil(head->next, root->right);
        else
            return false;
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        if(head == NULL)
            return true;
        if(root == NULL)
            return false;

        // LL starts from current node OR LL is in left subtree OR LL is in right subtree
        return isSubPathUtil(head, root) || isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};
