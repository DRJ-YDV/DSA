class Solution {
public:
int countPrimeSetBits(int left, int right) {
        int cnt = 0;
        for (int i = left; i <= right; i++) {
            string bit = "";
            int num = i;
            while(num!=0){
                bit += num%2 + '0';
                num /= 2;
            }
            int set = 0;
            for(int j=0;j<bit.size();j++){
                if(bit[j]=='1') set++;
            }
            if(set==2||set==3||set==5||set==7||set ==11||set==13||set==17||set==19) cnt++;
        }
        return cnt;
    }
};