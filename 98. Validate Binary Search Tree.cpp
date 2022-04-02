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

class Solution{
public:
    bool isValidBST(TreeNode* root) {
        long long min = LLONG_MIN;
        long long max = LLONG_MAX;
        return isBST(root, min, max);
    }
    
    bool isBST(TreeNode *root, long long min, long long max){
        if(root == NULL) return true;
        if(root->val <= min or root->val >= max) return false;
        return isBST(root->left, min, root->val) && isBST(root->right, root->val, max);
    }
};

//Not Valid in case of duplicates.....
/*class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<long long> v;
        inorder(root,v);
        if(is_sorted(v.begin(), v.end()))
            return true ;
        else
            return false;
    }
    
    void inorder(TreeNode * root, vector<long long>& v){
        if(root == NULL) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
        return;
    }
    
};*/

