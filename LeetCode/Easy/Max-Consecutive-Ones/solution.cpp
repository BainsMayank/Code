class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxFreq = 0;
        int count = 0;
        int vecSize = nums.size();
        for(int i=0; i< vecSize; i++){
            if(nums[i] != 0){
                count++;
                maxFreq = max(maxFreq,count);
            }
            else{
                maxFreq = max(maxFreq,count);
                count = 0;
            }
        }
        return maxFreq;
    }
};