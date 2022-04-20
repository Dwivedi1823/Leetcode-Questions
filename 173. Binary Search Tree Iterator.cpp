class BSTIterator {
public:
    stack<TreeNode*> helper;
    BSTIterator(TreeNode* root) {
        while(root != NULL){
            helper.push(root);
            root = root->left;
        }    
    }
    
    int next() {
        TreeNode* result = helper.top();
        helper.pop();
        TreeNode* node = result->right;
        while(node != NULL){
            helper.push(node);
            node = node->left;
        }
        return result->val;
    }
    
    bool hasNext() {
        return helper.size() != 0;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
