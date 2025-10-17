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
    bool isBalanced(TreeNode* root) {
        if(!root) return true ;
        return balanced(root);
    }
    int TreeHeight(TreeNode* node){
        if(!node) return 0 ; 
        return 1 + max(TreeHeight(node->left) , TreeHeight(node->right));
    }
    bool balanced(TreeNode* node){
        bool res =  false ;
        if(!node) return true ; 
        int left = TreeHeight(node->left);
        int right = TreeHeight(node->right);
        if(abs(left - right) > 1) return false ; 
        else  res = true ;
        return  res && balanced(node->left) && balanced(node->right);
    }
};