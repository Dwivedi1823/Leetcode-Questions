//Approach 1 with extra space complexity : O(logN)
// Time complexity is O(N)
class Solution {
public:
    TreeNode *first = NULL;
    TreeNode *second = NULL;
    TreeNode *prev = new TreeNode(INT_MIN);
    void recoverTree(TreeNode* root) {
        inorder(root);
        swap(first->val, second->val);
    }
    
    void inorder(TreeNode *root){
        if(root == NULL) return;
        inorder(root->left);
        if(first == NULL && prev->val > root->val)
            first = prev;
        if(first != NULL && prev->val > root->val)
            second = root;
        prev = root;   
        inorder(root->right);
    }
};
