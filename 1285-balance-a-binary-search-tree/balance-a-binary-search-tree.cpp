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
private :
        void inorder(TreeNode* node,vector<int>&res){
            if(node == NULL) return;

            inorder(node->left,res);

            res.push_back(node->val);

            inorder(node->right , res);
        }

        TreeNode* build(vector<int>&res , int s, int e){
            if(s>e) return NULL;

            int mid = (s+e)/2;
            TreeNode* node = new TreeNode(res[mid]);
            node->left = build(res , s,mid-1);
            node->right = build(res , mid+1 ,e);

            return node;
        }

        TreeNode* balance(TreeNode* node){
            vector<int>store;
            inorder(node,store);

            return build(store, 0 , store.size()-1);
        }
        
public:
    TreeNode* balanceBST(TreeNode* root) {
         return balance(root);
    }
};