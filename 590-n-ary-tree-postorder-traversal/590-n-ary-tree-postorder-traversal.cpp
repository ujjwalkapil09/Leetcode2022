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
    vector<int> postorder(Node* root) {
        vector<int> answer;
        stack<Node*> stack;
        if(!root)return answer;
        stack.push(root);
        while(!stack.empty()){
            Node* temp=stack.top();
            stack.pop();
            answer.push_back(temp->val);
            for(int i=0;i<temp->children.size();i++){
                stack.push(temp->children[i]);
            }
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};