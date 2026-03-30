class Solution {
public:
    bool checkStrings(string s1, string s2) {
        // int n = s1.size();
        // if(s1[0]==s2[0]) return true;
        // for(int i=0;i<n;i++){
        //     for(int j=i+2;j<n;j+=2){
        //             if(s1==s2) return true;
        //             swap(s1[i],s1[j]);
        //             if(s1==s2) return true;
        //             if(s1[i]!=s2[i]){
        //                 swap(s1[i],s1[j]);
        //             } else {
        //                 break;
        //             }
        //     }
        // }
        // return false;

        int arr[52] = {};
        for(int i=0;i<s1.length();i++){
            int idx = (i&1)*26;
            arr[s1[i] - 'a' + idx]++;
            arr[s2[i] - 'a' + idx]--;
        }

        for(int i=0;i<52;i++){
            if(arr[i] != 0) return false;
        }

        return true;
    }
};