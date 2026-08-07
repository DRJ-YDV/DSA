class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // unordered_map<int,bool>map;
        // for(int i=0;i<nums.size();i++){
        //     map[nums[i]]=true;
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(map.count(nums[i]-1)>0){
        //         map[nums[i]]=false;
        //     }
        // }
        // int max=0;
        // for(int i=0;i<nums.size();i++){
        //     if(map[nums[i]]==true){
        //         int j=0,count=0;
        //         while(map.count(nums[i]+j)>0){
        //             j++;
        //             count++;
        //         }
        //         if(count>max) max=count;
        //     }
        // }
        // return max;


        int n = nums.size();
        if(n == 0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int current = 1;
        int longest = 0;
        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1] + 1){
                    current++;
                }
                else{
                    longest = max(longest, current);
                    current = 1;
                }
            }
        }
        return max(longest, current);
   }
};