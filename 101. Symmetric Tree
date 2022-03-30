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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return ismirror(root->left, root->right);
    }
    
    bool ismirror(TreeNode *l, TreeNode* r){
        if(l == NULL and r == NULL)
            return true;
        else if(l == NULL or r == NULL)
            return false;
        else if(l->val != r->val)
            return false;
        return ismirror(l->left, r->right) and ismirror(l->right, r->left);
    }
};
