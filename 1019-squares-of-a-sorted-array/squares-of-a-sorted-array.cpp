class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0, j=nums.size()-1;
        vector<int>ans(nums.size());
        int k=ans.size()-1;
        while(i<=j){
             if(abs(nums[i])>abs(nums[j])) {
                ans[k] = nums[i]*nums[i];
                k--;
                i++;
             }
             else {
                ans[k]=nums[j]*nums[j];
                j--;
                k--;
             }
        }
        return ans;
    }
};