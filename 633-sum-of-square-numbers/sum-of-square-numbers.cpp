class Solution {
public:
    bool judgeSquareSum(int c) {
        long long k=0;
        long long j = sqrt(c);
        while(k<=j){
            long long sq = k*k + j*j;
            if(sq == c) return true;
            else if(sq < c) k++;
            else j--;
        }
        return false;
    }
};