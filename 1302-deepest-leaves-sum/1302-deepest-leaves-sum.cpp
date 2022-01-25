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
    int levelorder(TreeNode * p){
        queue<TreeNode *> q;
        vector<vector<int>> ans;
        q.push(p);
        while(!q.empty()){
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);
                level.push_back(node->val);
                
            }
            ans.push_back(level);
        }
        int last=ans.size()-1;
        int test=ans[last].size();
        int sum=0;
        for(int l=0;l<test;l++){
            sum+=ans[last][l];
        }
        return sum;
    }
    int deepestLeavesSum(TreeNode* root) {
        return levelorder(root);
    }
};