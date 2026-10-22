class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1="",t1="";
        for(int i=0;i<s.size();i++){
            if(s1.empty() && s[i]=='#') continue;
           if(s[i]!='#') s1 += s[i];
           else{
                s1.pop_back();
           }
        }
        for(int i=0;i<t.size();i++){
            if(t1.empty() && t[i]=='#') continue;
            if(t[i]!='#') t1 += t[i];
           else{
                t1.pop_back();
           }
        }
        return s1==t1;
    }
};