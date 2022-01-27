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
    vector<vector<int>> v1;
    void levelorder(TreeNode* p){
        if(p==NULL)return ;
        queue<TreeNode*> q;
        q.push(p);
        while(!q.empty()){
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* o=q.front();
                q.pop();
                if(o->left!=NULL)q.push(o->left);
                if(o->right!=NULL)q.push(o->right);
                level.push_back(o->val);
            }
            v1.push_back(level);
        }
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        levelorder(root);
//         for(auto itr:v1){
//             cout<<itr<<"\t";
            
//         }
        reverse(v1.begin(),v1.end());
        return v1;
    }
};