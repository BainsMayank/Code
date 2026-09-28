class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maxCount = 0;
        int count = 1;
        if(mpp.empty()) return 0;
        auto it = mpp.begin();
        while(it!=mpp.end()){
            auto nextIt = it;
            nextIt++;
            if (nextIt != mpp.end() && nextIt->first == it->first + 1) {
                count++;
            } else {
                maxCount = max(maxCount, count);
                count = 1;
            }
            it++;
        }
        return maxCount;
    }
};