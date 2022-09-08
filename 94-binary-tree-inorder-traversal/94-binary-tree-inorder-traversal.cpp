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
// void inorder(TreeNode* root,vector<int>& ans){
//     if(root!=NULL){
//         inorder(root->left,ans);
//         ans.push_back(root->val);
//         inorder(root->right,ans);
//     }
// }
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // vector<int> ans;
        // // inorder(root,ans);
        // stack<TreeNode*> st;
        // TreeNode* current=root;
        // while(current!=NULL||(!st.empty())){
        //     while(current!=NULL){
        //         st.push(current);
        //         current=current->left;
        //     }
        //     current=st.top();
        //     st.pop();
        //     ans.push_back(current->val);
        //     current=current->right;
        // }
        vector<int> ans;
        TreeNode* current = root;
        TreeNode* predecessor;
        while(current!=NULL){
            if(current->left==NULL){
                ans.push_back(current->val);
                current=current->right;
            }
            else{
                predecessor=current->left;
                while(predecessor->right!=NULL)
                    predecessor=predecessor->right;
                predecessor->right=current;
                TreeNode* temp=current;
                current=current->left;
                temp->left=NULL;
            }
        }
        return ans;
    }
};