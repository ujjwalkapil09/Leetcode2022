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
        stack <TreeNode *> st;
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        while(root || !st.empty()){
            
            if(root){
                ans.push_back(root->val);
                st.push(root);
                // cout<<st.size()<<"f ";
                root=root->left;
            }
            else{
                root=st.top();
                // cout<<st.size()<<"sec ";
                    st.pop();
                    root=root->right;
            }
        }
        return ans;
    }
};