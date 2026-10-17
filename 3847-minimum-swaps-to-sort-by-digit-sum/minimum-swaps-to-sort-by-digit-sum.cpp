class Solution {
public:
    int getsum(int n) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<pair<int, int>, int>> v;

        for (int i = 0; i < n; i++) {
            v.push_back({{getsum(nums[i]), nums[i]}, i});
        }

        sort(v.begin(), v.end());

        vector<bool> visited(n, false);
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || v[i].second == i)
                continue;

            int j = i;
            int cycle = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = v[j].second;
                cycle++;
            }

            cnt += cycle - 1;
        }

        return cnt;
    }
};