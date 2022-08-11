class Solution {
public:
    bool isValidBST(TreeNode* root) {
       if(root==NULL) return true;
        stack<TreeNode*> st;
        TreeNode* prev=NULL;
        while(root!=NULL||!st.empty()){
            while(root!=NULL){
                st.push(root);
                root=root->left;
            }
            root=st.top();
            st.pop();
            if(prev!=NULL&&prev->val>=root->val) return false;
            prev=root;
            root=root->right;
        }
        return true;
    }
};