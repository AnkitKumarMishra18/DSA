class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return binaryTree(nums,0,nums.size()-1);
    }
    TreeNode* binaryTree(vector<int>& nums,int low,int high){
        if(low<=high){
            int mid = low+(high-low)/2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = binaryTree(nums, low, mid-1);
            root->right = binaryTree(nums, mid+1, high);
            return root;
        }
        return NULL;
        
    }
};