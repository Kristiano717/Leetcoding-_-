/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1; // this is the base condtion for if the root
                                   // is not -1 then keep on continuing
    }
    int height(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        
        int leftdepth = height(root->left);
        int rightdepth = height(root->right);
        
         if (leftdepth ==-1||rightdepth ==-1)
        {
            return -1;
        }
        else if (abs(rightdepth - leftdepth) > 1) {
            return -1;
        }
        return max(leftdepth, rightdepth) + 1;
    }
};