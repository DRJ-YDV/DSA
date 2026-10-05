class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans=0,cnt=0;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
            }
            else {
                cnt--;
                if(s[i-1]=='('){
                    ans +=1 << cnt;
                }
            }
        }
        return ans;
    }
};