/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode * p;
    
    void preorder(TreeNode * cloned, TreeNode *target){
        if(cloned==NULL){
            return ;
        }
        if(cloned->val==target->val){
            p=cloned;
            // cout<<"entered";
        }
        
        // cout<<cloned->val<<"\t";
        preorder(cloned->left,target);
        preorder(cloned->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
//        
        // cout<<p->val;
        preorder(cloned,target);
        return p;
    }
    
};