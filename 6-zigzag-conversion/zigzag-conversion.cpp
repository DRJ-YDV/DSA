class Solution {
public:
    string convert(string s, int nr) {
        int n = s.size();
        if(nr==1)return s;
        string ans="";
        int k=(nr-1)  + (nr-2) + 1;
        int l=0;
        bool x=0;
        for(int i=0;i<nr;i++){
            x=0;
            for(int j=i;j<s.length();){
                ans.push_back(s[j]);
                if(x==0){
                    if(k==0){
                        j+=l;
                        continue;
                    }
                    j+=k;
                    x=1;
                }
                else{
                    if(l==0){
                        j+=k;
                        continue;
                    }
                    j+=l;
                    x=0;
                }
            }
            k-=2;
            l+=2;
        }
        return ans;
    }
};