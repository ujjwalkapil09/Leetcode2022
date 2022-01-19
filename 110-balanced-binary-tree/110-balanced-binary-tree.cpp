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
    int valance(TreeNode* t){
        if(t==NULL){
            return 0;
        }
        int lh,rh;
        lh=valance(t->left);
        if(lh==-1){
            return -1;
        }
        rh=valance(t->right);
        if(rh==-1){
            return -1;
        }
        if(abs(lh-rh)>1){
            return -1;
            
        }
        return max(lh,rh)+1;
        
    }
    bool isBalanced(TreeNode* root) {
        cout<<valance(root);
        if(valance(root)==-1){
            return false;
        }
        else{
            return true;
        }
    }
};