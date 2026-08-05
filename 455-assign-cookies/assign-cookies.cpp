class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cnt = 0;
        int i = 0, j = 0;
        sort(g.begin(), g.end());
        sort(s.begin(),s.end());
        while (j < s.size() && i < g.size()) {
            if (g[i] == s[j]) {
                cnt++;
                i++;
                j++;
            } else if (g[i]<=s[j]) {
                cnt++;
                j++;
                i++;
            } else j++;
        }
        return cnt;
    }
}
;