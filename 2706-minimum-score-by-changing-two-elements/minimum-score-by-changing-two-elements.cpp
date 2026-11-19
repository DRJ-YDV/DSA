class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=INT_MAX;
        if(n<4) return 0;

        ans=min(ans,nums[n-1]-nums[2]);
        ans=min(ans,nums[n-2]-nums[1]);
        ans=min(ans,nums[n-3]-nums[0]);
        
        return ans;
    }
};