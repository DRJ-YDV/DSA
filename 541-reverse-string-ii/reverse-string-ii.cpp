class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size()==1) return s;
        for(int i=0;i<s.size();i=i+2*k){
            reverse(s.begin()+i,s.begin()+min(i+k,(int)s.size()));
        }
        return s;
    }
};