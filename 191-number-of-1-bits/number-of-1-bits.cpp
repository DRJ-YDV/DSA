class Solution {
public:
    int hammingWeight(int n) {
        string bit = "";
        while(n!=0){
            bit += n%2 + '0';
            n /= 2;
        }
        int cnt = 0;
        for(long long i =0;i<bit.size();i++){
            if(bit[i]=='1')cnt++;
        }

        return cnt;
    }
};