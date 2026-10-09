class Solution {
public:
    int minInsertions(string s) {
        stack<char>st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(st.empty() && i<s.size() && s[i]==')'){
                if(s[i+1]==')'){
                    ans++;
                    i++;
                }
                else ans+=2;
            }
            if(s[i]=='(') st.push('(');
            else if(!st.empty()&&s[i]==')'){
                if(i<s.size()&&s[i+1]==')' && st.top()=='('){
                    st.pop();
                    i++;
                }
                else{
                    ans++;
                    st.pop();
                }
            }
        }
        ans+= 2*st.size();
        return ans;
    }
};