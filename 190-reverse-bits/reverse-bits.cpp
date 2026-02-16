class Solution {
public:
    int reverseBits(int n) {
        string ans = "";
        for(int i=0;i<32;i++){
            ans += n%2 + '0';
            n /=2;
        }
        int x = 0;
        for(char c : ans){
            x =x*2 + (c-'0');
        }
        return x;
    }
};