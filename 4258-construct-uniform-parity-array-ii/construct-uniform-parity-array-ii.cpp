class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        
        int min_val = 1e9 +1;
        int cntodd = 0;
        int cnteven = 0;
        for(int x:nums1){
            if(x%2==0) cnteven++;
            else cntodd++;
        }
        if(cntodd==n || cnteven==n) return true;

        for (int x : nums1) {
            if (x < min_val) min_val = x;
        }

        for(int x:nums1){
            if(x%2==0 && (x-min_val)<1) return false;
        }

        return true;
    }
};