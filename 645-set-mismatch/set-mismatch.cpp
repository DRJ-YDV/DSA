class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int dup, miss;
        vector<int>x(n+1,0);
        for(int i=0;i<nums.size();i++){
            x[nums[i]]++;
        }
        for(int i=0;i<n+1;i++){
            if(x[i]==2) dup = i;
            if(x[i]==0) miss=i;
        }
        return {dup,miss};
    }
};