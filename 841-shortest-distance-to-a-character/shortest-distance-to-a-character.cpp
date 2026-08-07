class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ans(s.size());
        int j=0;
        int prevj= -s.size();
        for(int i=0;i<s.size();i++){
            while(j<s.size() && s[j]!=c){
                j++;
            }   
            if(j==s.size()){
                ans[i]=i-prevj;
            } else {
                ans[i]=min(i-prevj,j-i);
            }
            if(i==j){
                prevj=j;
                j++;
            }
        }
        return ans;
    }
};