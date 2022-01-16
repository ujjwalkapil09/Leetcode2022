/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack <TreeNode*> st;
        if(root==NULL){
            return ans;
        }
        st.push(root);
        while(!st.empty()){
            TreeNode* i=st.top();
            st.pop();
            ans.push_back(i->val);
            if(i->right!=NULL){
                st.push(i->right);
            }
            if(i->left!=NULL){
                st.push(i->left);
            }
            
        }
        return ans;
    }
};