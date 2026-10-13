class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> pal;

        int n = s.size();

        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                if(isupper(s[i])){
                    s[i] = tolower(s[i]);
                }
                pal.push_back(s[i]);
            }
        }

        bool isPal = true;

        int left = 0;
        int right = pal.size()-1;

        while(left < right){
            if(pal[left] != pal[right]){
                isPal = false;
                break;
            }
            left++;
            right--;
        }

        return isPal;
    }
};