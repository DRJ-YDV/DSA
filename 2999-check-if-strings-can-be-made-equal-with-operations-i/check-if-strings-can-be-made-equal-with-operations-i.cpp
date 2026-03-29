class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                if(s1==s2) return true;
                swap(s1[1],s1[3]);
            }
            swap(s1[0],s1[2]);
        }
        return s1==s2;
    }
};