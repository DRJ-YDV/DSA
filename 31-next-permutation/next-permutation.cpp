class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        if(n<2){
            return;
        }
        if(nums[n-1] > nums[n-2]){
            swap(nums[n-1],nums[n-2]);
            return;
        }
        int pos = n-3;
        while(pos>=0){
            int min_next = INT_MAX;
            int swapidx;
            int val = nums[pos];
            for(int j=pos+1;j<n;j++){
                if(nums[j] >val && nums[j] < min_next){
                    min_next = nums[j];
                    swapidx = j;
                }
                
            }
            if(min_next == INT_MAX){
                    pos--;
                }
                else{
                    swap(nums[swapidx],nums[pos]);
                    sort(nums.begin() + pos + 1 , nums.end());
                    return;
                }
            
        }
        sort(nums.begin(),nums.end());
    }
};