class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long cnt = 0;
        for (int i = nums.size() - 1; i >= 2; i--) {
            long long l = 0, r = i - 1;
            while (l < r) {
                if ((nums[l] + nums[r]) > nums[i]) {
                    cnt += r - l;
                    r--;
                } else
                    l++;
            }
        }
        return cnt;
    }
    
};