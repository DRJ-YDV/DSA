class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        // unordered_set<int>mp;
        // for(int i=0;i<digits.size();i++){
        //     if(digits[i]==0) continue;
        //     for(int j=0;j<digits.size();j++){
        //         if(i==j) continue;
        //         for(int k=0;k<digits.size();k++){
        //             if(k==i || k==j) continue;
        //             if(digits[k]%2!=0) continue;
        //             int num = digits[i]*100+digits[j]*10+digits[k];
        //             mp.insert(num);
        //         }
        //     }
        // }
        // return mp.size();

        int freq[10]={0};
        for(int d:digits) freq[d]++;
        int cnt=0;
        for(int h=1;h<=9;h++){
            if(freq[h]==0) continue;
            freq[h]--;
            for(int t=0;t<=9;t++){
                if(freq[t]==0) continue;
                freq[t]--;
                for(int u=0;u<=8;u+=2){
                    if(freq[u]>0) cnt++;
                }
                freq[t]++;
            }
            freq[h]++;
        }
        return cnt;
    }
};