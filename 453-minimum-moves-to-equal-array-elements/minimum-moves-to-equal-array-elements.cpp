class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        int n=nums.size();
        return accumulate(nums.begin(),nums.end(),0) - n*mini;
    }
};