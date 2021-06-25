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
    int sumNumbers(TreeNode* root) {
        if (!root){
            return 0;
        }
        int sum = 0;
        summer(root, sum);
        return sum;
        
    }
    void summer(TreeNode * root, int sum){
        string ans;
        if(!root){
            sum+=(ans-'0');
        }
        ans.push_back(root->val);
        summer(root->left, sum);
        summer(root->right, sum);
    }
};
