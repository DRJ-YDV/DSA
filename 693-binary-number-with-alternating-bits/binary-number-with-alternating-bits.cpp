class Solution {
public:
    bool hasAlternatingBits(int n) {
        string bit = "";
        while(n!=0){
            bit += n%2 +'0';
            n/=2;
        }
        for(int i=0;i<bit.size()-1;i++){
            if(bit[i] == bit[i+1]) return false;
        }
        return true;
    }
};