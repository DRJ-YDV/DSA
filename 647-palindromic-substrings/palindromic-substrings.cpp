class Solution {
public:
    int cnt(string &s,int left,int right){
        int cnt=0;
        while(left>=0 && right<s.length()&&s[left]==s[right]){
            cnt++;
            left--;
            right++;
        }
        return cnt;
    }
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            count += cnt(s,i,i);
            count += cnt(s,i,i+1);
        }
        return count;
    }
};