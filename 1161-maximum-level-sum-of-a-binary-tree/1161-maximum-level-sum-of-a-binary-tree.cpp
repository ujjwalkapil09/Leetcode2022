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
    int ans;
    void level(TreeNode *p){
        int l=0;
        queue<TreeNode *> q;
        vector<vector<int>>v;
        q.push(p);
        while(!q.empty()){
            vector<int> level;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode *node=q.front();
                q.pop();
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);
                level.push_back(node->val);
            }
            v.push_back(level);
            
        }
        int a=INT_MIN;
        for(int i=0;i<v.size();i++){
            int j;
            int sum=0;
            for(j=0;j<v[i].size();j++){
                sum+=v[i][j];
            }
            if(sum>a){
                                a=sum;

                // cout<<v[i].size();
                ans=i+1;
                // cout<<"fir"<<ans;
            }
        }
        
        
        
        
        
    }
    int maxLevelSum(TreeNode* root) {
        level(root);
        return ans;
    }
};