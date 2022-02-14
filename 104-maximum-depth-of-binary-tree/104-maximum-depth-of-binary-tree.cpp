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
    void max_depth(TreeNode* node , int &ans , int depth){
        if(node == NULL) return ;
        ans = max(ans , depth);
        max_depth(node->left , ans , depth + 1);
        max_depth(node->right , ans , depth + 1);
    }
    
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int ans = 1;
        max_depth(root , ans , 1);
        return ans;
    }
};