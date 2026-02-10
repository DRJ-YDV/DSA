class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            unordered_set<int> vis;
            int cnt[2] = {0, 0}; // cnt[0] = distinct evens, cnt[1] = distinct odds
            for (int j = i; j < n; ++j) {
                if (vis.count(nums[j])==0) {
                    vis.insert(nums[j]);
                    cnt[nums[j] % 2]++; // increment odd/even count
                }
                if (cnt[0] == cnt[1]) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};
