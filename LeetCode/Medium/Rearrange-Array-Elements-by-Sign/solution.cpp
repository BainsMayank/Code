class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> newnums;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) pos.push_back(nums[i]);
            if(nums[i]<0) neg.push_back(nums[i]);
        }
        for(int i=0;i<pos.size();i++){
            newnums.push_back(pos[i]);
            newnums.push_back(neg[i]);
        }
        return newnums;
    }
};