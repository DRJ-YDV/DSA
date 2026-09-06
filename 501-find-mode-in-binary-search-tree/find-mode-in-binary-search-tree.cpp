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
    void solve(TreeNode* root,vector<int>&ans,int &prev,int &cnt,int &maxcnt){
        if(root==NULL) return;
        solve(root->left,ans,prev,cnt,maxcnt);
        if(cnt==0 || root->val==prev){
            cnt++;
        }
        else cnt=1;
        if(cnt > maxcnt){
            ans.clear();
            ans.push_back(root->val);
            maxcnt=cnt;
        }
        else if(cnt==maxcnt){
            ans.push_back(root->val);
        }
        prev = root->val;
        solve(root->right,ans,prev,cnt,maxcnt);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        int prev=0;
        int cnt=0,maxcnt=0;
        solve(root,ans,prev,cnt,maxcnt);
        return ans;
    }
};