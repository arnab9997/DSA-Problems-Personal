// Given an n-ary tree, return the postorder traversal of its nodes' values.
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
    vector<int> postorder(Node* root) {
        if(root == NULL)
            return sol;

        for(Node *x : root->children)
            postorder(x);

        sol.push_back(root->val);

        return sol;
    }
};


// Iterative:

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> sol;
        if(root == NULL)
            return sol;

        stack<Node *> stk;
        stk.push(root);

        while(!stk.empty()){
            Node *curr = stk.top();
            stk.pop();
            for(Node *x : curr->children)
                stk.push(x);
            sol.push_back(curr->val);
        }
        reverse(sol.begin(), sol.end());
        return sol;
    }
};
