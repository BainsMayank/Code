class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int revnum = 0;
        int a = x;

        while (a > 0) {
            int num = a % 10;
            a /= 10;
            if (revnum > INT_MAX / 10) return false;
            revnum = revnum * 10 + num;
        }

        return revnum == x;
    }
};