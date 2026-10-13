class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mpp1;
        map<char,char> mpp2;
        int size = s.length();
        for(int i=0;i<size;i++){
            if(mpp1.count(s[i]) && mpp1[s[i]] != t[i]) return false;
            if(mpp2.count(t[i]) && mpp2[t[i]] != s[i]) return false;
            mpp1[s[i]] = t[i];
            mpp2[t[i]] = s[i];
        }
        return true;
    }
};