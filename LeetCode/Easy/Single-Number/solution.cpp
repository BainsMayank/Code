class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        map<int,int> mpp;
        for(int i = 0;i<size;i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<size;i++){
            if(mpp[nums[i]] != 2){
                return nums[i];
            }
        }
        return 0;
    }
};