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
    int total;
    int sumNumbers(TreeNode* root) {
        if (!root){
            return 0;
        }
        total = 0;
        int sum = 0;
        summer(root, sum);
        return total;
        
    }
    void summer(TreeNode * root, int sum){
        if(!root){
            return;
        }
        sum = sum*10 + root->val;
        
        if(!root->left && !root->right){
            total+=sum;
            return;
        }
        summer(root->left, sum);
        summer(root->right, sum);
    }
};
