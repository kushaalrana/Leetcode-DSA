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
    int maxPathSumOptimized(TreeNode* root, int &maxi){
        if(root==NULL) return 0;
        int lh=max(0,maxPathSumOptimized(root->left,maxi));//ignoring the negative values 
        int rh=max(0,maxPathSumOptimized(root->right,maxi));//not adding negative values to our sum
        maxi = max(maxi, lh+rh+root->val);//This is used to compute the max Path sum but which path to take is determined by next line.
        return root->val + max(lh,rh);//This will return which is the longest path or which path to take
    }

    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxPathSumOptimized(root,maxi); 
        return maxi;  
    }
};