class Solution {
public:
    /*int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inorder(root, v);
        return v[k-1];
    }
    
    void inorder(TreeNode *root, vector<int>& v){
        if(root == NULL)
            return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }*/
    
    int kthSmallest(TreeNode* root, int k) 
    {
        stack<TreeNode *> stk;
        while(1)
        {
            while(root != NULL)
            {
                stk.push(root);
                root = root->left;
            }
            root = stk.top();
            stk.pop();
            k--;
            if(k == 0) return root->val;
            root = root->right;
        }
    }
};
