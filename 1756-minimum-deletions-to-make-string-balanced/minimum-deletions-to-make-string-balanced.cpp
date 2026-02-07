class Solution {
public:
    int minimumDeletions(string s) {
        vector<string>del;
        int n = s.size();
        int cnt=0, res=0;
        for(char c : s){
            if(c=='b') cnt++;
            else{
                if(cnt > 0){
                    res++;
                    cnt--;
                }
            }
        }
        return res;
    }
};