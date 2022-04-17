class Solution {
public:
    vector<int> v;
    TreeNode* increasingBST(TreeNode* root) {
        if(root == NULL)
            return  root;
        increasingBST(root->left);
        v.push_back(root->val);
        increasingBST(root->right);
        return create(v);
    }
    
    TreeNode* create(vector<int> v){
        TreeNode *head = NULL;
        TreeNode *tail = NULL;
        for(int i = 0; i < v.size(); ++i){
            TreeNode *temp = new TreeNode(v[i]);
            if(head == NULL)
                head = tail = temp;
            else{
                tail->right = temp;
                tail->left = NULL;
                tail = temp;
            }
        }
        return head;
    }
};
