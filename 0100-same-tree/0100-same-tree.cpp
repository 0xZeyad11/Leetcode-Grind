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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>tree1 ; 
        vector<int>tree2 ; 

        dfs(p , tree1) ; 
        dfs(q , tree2) ; 
        return tree1.size() == tree2.size() && tree1 == tree2 ; 
        
    }


private:
// Doing inorderTraversal
    void dfs(TreeNode* node , vector<int>&treeValues){
        if(!node){
            return ; 
        }
        if(node->left){
            dfs(node->left, treeValues)  ; 
        }
        treeValues.push_back(node->val)  ; 
        if(node->right){
            dfs(node->right, treeValues)  ; 

            treeValues.push_back(-1000) ; // marking the right subtree only  
        }
    }

};