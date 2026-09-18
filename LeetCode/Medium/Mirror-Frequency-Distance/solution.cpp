class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> letters(26, 0);
        vector<int> digits(10, 0);

        for (char x : s) {
            if (x >= '0' && x <= '9') {
                digits[x - '0']++;
            } else if (x >= 'a' && x <= 'z') {
                letters[x - 'a']++;
            }
        }

        int sum = 0;
        for (int i = 0; i < 13; i++) {
            sum += abs(letters[i] - letters[25 - i]);
        }
        for (int i = 0; i < 5; i++) {
            sum += abs(digits[i] - digits[9 - i]);
        }

        return sum;
    }
};