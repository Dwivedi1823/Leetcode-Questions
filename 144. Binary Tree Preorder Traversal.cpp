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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root,ans);
        return ans;    
    }
    
    void preorder(TreeNode* root1, vector<int>& ans1){
            if(root1 == NULL)
                return;
            ans1.push_back(root1->val);
            preorder(root1->left, ans1);
            preorder(root1->right, ans1);
            return;
        }
};
