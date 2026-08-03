class Solution {
public:
    set<char>vowels = {'A' ,'E' , 'I','O','U' ,'a','e','i','o','u'};
    bool present(char c){
        return vowels.find(c)!=vowels.end();
    }
    string reverseVowels(string s) {
        int k=s.size()-1;
        for(int i=0;i<s.size() && i<=k;){
            if(present(s[i])){
                if(present(s[k])){
                    swap(s[i],s[k]);
                    k--;
                    i++;
                }
                else {
                    k--;
                }
            }
            else {
                i++;
                if(!present(s[k])) k--;
            }
        }
        return s;

    }
};