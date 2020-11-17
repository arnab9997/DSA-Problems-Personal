// Given an n-ary tree, return the preorder traversal of its nodes' values.
//
// Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).




/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/








// Recursive:

class Solution {
public:
    vector<int> sol;
    vector<int> preorder(Node* root) {
        if(root == NULL)
            return sol;

        sol.push_back(root->val);
        for(Node *x : root->children){
            preorder(x);
        }

        return sol;
    }
};


// Iterative:

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> sol;

        if(root == NULL)
            return sol;

        stack<Node *> stk;
        stk.push(root);

        while(!stk.empty()){
            Node *curr = stk.top();
            stk.pop();
            sol.push_back(curr->val);

            for(int i = curr->children.size() - 1; i >= 0; i--){
                if(curr->children[i] != NULL)
                    stk.push(curr->children[i]);
            }
        }

        return sol;
    }
};
