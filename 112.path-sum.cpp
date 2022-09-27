/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
 */

// @lc code=start
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

    void traverse(TreeNode* node, int targetSum, bool& cont){

        targetSum -= node->val;

        if(node->left and cont){
            traverse(node->left, targetSum, cont);
        }

        if(node->right and cont){
            traverse(node->right, targetSum, cont);
        }

        if(!(node->left or node->right)){
            cont = (targetSum !=0);
        }

    }

    bool hasPathSum(TreeNode* root, int targetSum) {

        if(!root) return false;

        bool cont = true;
        traverse(root, targetSum, cont);
    
        return not cont; 
    }
};
// @lc code=end

