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

class Solution {
public:
    vector<int> preorder(Node* root) {
        
        stack<Node*> stack;
        vector<int> pre;
        if(root==NULL)return pre;
        stack.push(root);
        while(!stack.empty()){
            Node*temp=stack.top();
            stack.pop();
            pre.push_back(temp->val);
            for(int i=temp->children.size()-1;i>=0;i--){
                stack.push(temp->children[i]);
            }
        }
        return pre;
    }
};