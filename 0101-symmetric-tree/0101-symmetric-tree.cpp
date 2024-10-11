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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true ; 
        return dfsMirror(root->right ,root->left) ;
    }


private : 

    bool dfsMirror(TreeNode* right , TreeNode* left )
    {
        if(!left && !right) return true ;
        if(!left || !right) return false ;

        return (left->val == right->val) && dfsMirror(right->right , left->left) && dfsMirror(left->right , right->left) ;  
    }

    // void print(vector<int> &answer){
    //     for(auto i : answer){
    //         cout<<i<<" " ; 
    //     }
    //     cout<<'\n' ; 
    // }
};