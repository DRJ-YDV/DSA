class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int ans=0,cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                cnt++;
            }
            if(!st.empty()&&s[i]==')'){
                st.pop();
                ans=max(ans,cnt);
                cnt--;
            }
        }
        return ans;
    }
};