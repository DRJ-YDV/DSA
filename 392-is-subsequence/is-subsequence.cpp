class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="") return true;
        if(t=="") return false;
        int j=0,i=0;
        while(j<s.size() && i<t.size()){
            if(s[j]==t[i]) {
                j++;
                i++;
                if(j==s.size()) return true;
            }
            else i++;
            
        }
        return false;
    }
};