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
    // void insertion(TreeNode* root, int key){
//         TreeNode * pp,*t,*p=root;
        
//         if(root==NULL){
//             cout<<"enterede";
//             pp=new TreeNode;
//             pp->val=key;
//             // cout<<pp->val;
//             pp->left=pp->right=NULL;
//             root=pp;
//             // cout<<root->val;
//             return root;
//         }
//         while(p){
//             t=p;
//             if(key<p->val){
//                 p=p->left;
//             }
//             else if(key>p->val){
//                 p=p->right;
//             }
//             else{
//                 return root;
//             }
//         }
//         pp=new TreeNode;
//         pp->val=key;
//         pp->left=pp->right=NULL;
//         if(key<t->val){
//             t->left=pp;
            
//         }
//         else{
//             t->right=pp;
//         }
//         return root;
    // }
    TreeNode* insertIntoBST(TreeNode* root, int key) {
        // insertion(root,key);
         TreeNode * pp,*t,*p=root;
        
        if(root==NULL){
            cout<<"enterede";
            pp=new TreeNode;
            pp->val=key;
            // cout<<pp->val;
            pp->left=pp->right=NULL;
            root=pp;
            // cout<<root->val;
            return root;
        }
        while(p){
            t=p;
            if(key<p->val){
                p=p->left;
            }
            else if(key>p->val){
                p=p->right;
            }
            else{
                return root;
            }
        }
        pp=new TreeNode;
        pp->val=key;
        pp->left=pp->right=NULL;
        if(key<t->val){
            t->left=pp;
            
        }
        else{
            t->right=pp;
        }
        return root;
        cout<<root->val;
        return root;
    }
};