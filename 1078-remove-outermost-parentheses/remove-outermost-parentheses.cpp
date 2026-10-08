class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans="";
        int curr=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push('(');
            else{
                st.pop();
            }
            if(st.empty()){
                ans+=s.substr(curr+1,i-curr-1);
                curr=i+1;
            }
        }
        return ans;
    }
};