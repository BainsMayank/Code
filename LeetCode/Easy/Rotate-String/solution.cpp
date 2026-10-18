class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();

        if(n != goal.size()) return false;

        for(int i = 0; i < n; i++) {
            if(s == goal) return true;

            char last = s[n-1];

            for(int j = n-1; j > 0; j--) {
                s[j] = s[j-1];
            }

            s[0] = last;
        }

        return false;
    }
};