class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        if(colors[0] != colors[n-1]){
            return n-1;
        }
        int ans = 1;
        for(int i=0;i<n;i++){
           for(int j=i;j<n;j++){
            if(colors[i] != colors[j]){
                ans = max(ans, j-i);
            }
           } 
        }
        return ans;
    }
};