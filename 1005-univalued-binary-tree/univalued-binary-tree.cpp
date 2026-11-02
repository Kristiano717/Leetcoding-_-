class Solution {
public:
    bool check(TreeNode* root, int val)
    {
        if(root==NULL) return true;
        if(root->val != val) return false;
        bool l = check(root->left,val);
        bool r = check(root->right,val);
        return (l && r);
    }
    bool isUnivalTree(TreeNode* root) {
        return check(root,root->val);
    }
};