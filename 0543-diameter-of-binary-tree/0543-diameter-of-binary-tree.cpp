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



 //Time Complexity is O(N^2)
 int height(TreeNode *root){
     if(root==NULL){
         return 0;
     }
     return 1+max(height(root->left), height(root->right));
 }

int optimizedApproach(TreeNode* root, int &maxi){
    if(root==NULL) return 0;

    int lh = optimizedApproach(root->left,maxi);
    int rh = optimizedApproach(root->right,maxi);
    maxi = max(maxi, lh+rh);
    return 1+ max(lh,rh);
}

class Solution {
public:
 int maxi=0;
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        optimizedApproach(root, maxi);
        return maxi; 

        // if(root==NULL) return 0;
        // int leftH = height(root->left);
        // int rightH = height(root->right);//O(N)
        // cout<<leftH<<" "<<rightH<<endl;
        // maxi=max(maxi,leftH+rightH);
        // diameterOfBinaryTree(root->left);//(O(N))
        // diameterOfBinaryTree(root->right);
        // return maxi;
    }
};