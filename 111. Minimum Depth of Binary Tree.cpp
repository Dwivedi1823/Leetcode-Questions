class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        if(root->left == NULL and root->right == NULL)
            return 1;
        int r_depth = INT_MAX;
        int l_depth = INT_MAX;
        
        if(root->left)
            l_depth = minDepth(root->left);
        if(root->right)
            r_depth = minDepth(root->right);
        return min(l_depth, r_depth) + 1;
    }
};
