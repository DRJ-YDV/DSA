class Solution {
public:
    int countPrimes(int n) {
        if (n == 0 || n == 1)
            return 0;
        vector<bool> check(n + 1, true);
        int cnt = 0;
        for (int i = 2; i <= n / 2; i++) {
            if (check[i] == true) {
                for (int j = 2 * i; j <= n; j += i) {
                    check[j] = false;
                }
            }
        }
        vector<int> res;
        for (int p = 2; p < n; p++) {
            if (check[p]) {
                res.push_back(p);
            }
        }
        return res.size();
    }
};