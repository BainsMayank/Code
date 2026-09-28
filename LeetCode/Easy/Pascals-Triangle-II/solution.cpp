class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> nums;
        long long prev = 1;

        for(int i = 0; i <= rowIndex; i++) {
            nums.push_back(prev);

            prev = (prev * (rowIndex - i)) / (i + 1);
        }

        return nums;
    }
};