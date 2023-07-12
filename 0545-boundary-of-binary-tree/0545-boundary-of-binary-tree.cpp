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
    bool isLeaf(TreeNode *root){
        return root->left==NULL && root->right==NULL;
    }
    
    void addLeftNode(TreeNode *root, vector<int> &v){
        TreeNode *curr = root->left;
        while(curr){
            if(!isLeaf(curr)) v.push_back(curr->val);
            if(curr->left) curr=curr->left;
            else curr=curr->right;
        }
    }

    void addRightNode(TreeNode *root, vector<int> &v){
        TreeNode *curr = root->right;
        vector<int> temp;
        while(curr){
            if(!isLeaf(curr)) temp.push_back(curr->val);
            if(curr->right) curr=curr->right;
            else curr=curr->left;
        }
        reverse(temp.begin(), temp.end());
        v.insert(v.end(), temp.begin(), temp.end());
        // for(int i=temp.size()-1; i>=0;i--){
        //     v.push_back(temp[i]);
        // }
    }

    void addLeavesNode(TreeNode* root, vector<int> &v){
        if(isLeaf(root))
        {
            v.push_back(root->val);
            return;
        }
        if(root->left) addLeavesNode(root->left,v);
        if(root->right) addLeavesNode(root->right,v);
    }

public:
    vector<int> boundaryOfBinaryTree(TreeNode* root) {
        vector<int> v;
        if(!root) return v;         
        if(!isLeaf(root)) v.push_back(root->val);//Push the root node
        addLeftNode(root,v);
        addLeavesNode(root,v);
        addRightNode(root,v);
        return v;
    }
};