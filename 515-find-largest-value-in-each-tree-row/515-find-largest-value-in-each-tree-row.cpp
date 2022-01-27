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
    vector<int> largestValues(TreeNode* root) {
            vector<int>ans;
    if(root==NULL)return ans;
        queue<TreeNode*> p;
        p.push(root);
        while(!p.empty()){
            int size=p.size();
            int code=INT_MIN;
            for(int i=0;i<size;i++){
                TreeNode* o=p.front();
                p.pop();
                if(o->left!=NULL)p.push(o->left);
                if(o->right!=NULL)p.push(o->right);
                if(code<o->val){
                    code=o->val;
                }
            }
            ans.push_back(code);
        }
        return ans;
    }
};