class Solution {
public:
    int binaryGap(int n) {
        int maxD=0;
        int curr = 0;
        bool firstOne = false;
        while(n!=0){
            int bit = n%2;
            if(bit==1){
                if(firstOne){
                    maxD = max(maxD,curr);
                }
                curr = 1;
                firstOne = true;
            }
            else{
                if(firstOne) curr++;
            }
            n /= 2;
        }
        return maxD;
    }
};