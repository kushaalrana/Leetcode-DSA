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
    
void helper(TreeNode* root, vector<int> &v){
    if(!root) return ;
    helper(root->left,v);
    v.push_back(root->val);
    helper(root->right,v);
}

void helperI(TreeNode *root, vector<int> &v){
    if(!root) return;
    stack<TreeNode *> st;
    TreeNode *node = root;
    st.push(root);
    while(true){
        if(node!=NULL){
            st.push(node);
            node=node->left;//Keep moving on in left
        }
        else {
            if(st.empty()==NULL) break;
            node=st.top();//once you reach the null remove it from the stack.
            st.pop();
            v.push_back(node->val);//Print the left most node
            node=node->right;//Traverse Right
        }
    }
}

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        helper(root,v);
        helperI(root,v);
        return v;
    }
};