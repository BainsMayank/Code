class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int vecSize = nums.size();
       for (int i = 0; i < vecSize; i++) {
            while (i < vecSize - 1 && nums[i] == nums[i + 1]) {
            nums.erase(nums.begin() + i + 1);
            vecSize--;
            }
         }

        return vecSize;
    }
};