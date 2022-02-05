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
    vector<TreeNode*> first;
    vector<TreeNode *>second;
    int check;
    int scheck;
    bool common(TreeNode *i){
       if(!i) return false;
        first.push_back(i);
        if(i->val==check){
            return true;
        }
        if(common(i->left) || common(i->right)){
            return true;
        }
        first.pop_back();
        return false;
    }
    
    bool Scommon(TreeNode *i){
       if(!i) return false;
        second.push_back(i);
        if(i->val==scheck){
            return true;
        }
        if(Scommon(i->left) || Scommon(i->right)){
            return true;
        }
        second.pop_back();
        return false;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        check=p->val;
        TreeNode *o=root;
        // second.push_back(root);
        scheck=q->val;
        common(root);
        Scommon(o);
        reverse(first.begin(),first.end());
        reverse(second.begin(),second.end());

        vector<TreeNode*> size;
        vector<TreeNode*> small;
        if(first.size()<second.size()){
            size=first;
            small=second;}
        else{
            size=second;
            small=first;
        }
        for(int i=0;i<size.size();i++){
            for(int j=0;j<small.size();j++){
                if(size[i]==small[j]){
                    return small[j];
                }
            }
        }
        return NULL;
        
        
    }
};