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
    vector<int> arr;
    void create(TreeNode* root){
        if(root==NULL){
            return;
        }
        create(root->left);
        // cout<<root->val;
        if(root!=NULL){
        arr.push_back(root->val);}
        create(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        create(root);
        // for(auto itr: arr){
        //     cout<<itr;
        // }
        // cout<<arr[k-1];
        return arr[k-1];
    }
};