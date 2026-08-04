class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        // vector<int>ans;
        // int x=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //      int max=nums[i];
        //      if(max>x) x=max;
        // }
        // int y=INT_MAX;
        // for(int i=0;i<nums.size();i++){
        //      int max1=nums[i];
        //      if(max1<y) y=max1;
        // }
        // for(int i=y;i<=x;i++){
        //     ans.push_back(i);
        // }
        // vector<int>ans1;
        // for(int i=0;i<ans.size();i++){
        //     if(find(nums.begin(),nums.end(),ans[i])==nums.end()){
        //         ans1.push_back(ans[i]);
        //     }
        // }
        // return ans1 ;  

        int mx= *max_element(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());

        unordered_set<int>s(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=mn;i<=mx;i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
            }
        }     
        return ans;
    }
};