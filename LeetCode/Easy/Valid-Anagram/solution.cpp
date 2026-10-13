class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mpp1;
        map<char,int> mpp2;

        if(s.length() != t.length()) return false;

        for(char c:s){
            mpp1[c]++;
        }
        for(char c:t){
            mpp2[c]++;
        }
        if(mpp1 == mpp2){
            return true;
        }
        return false;
    }
};