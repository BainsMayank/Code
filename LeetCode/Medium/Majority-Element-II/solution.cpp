class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int> ans;
        auto it = mpp.begin();
        while(it != mpp.end()){
            if(it->second > nums.size()/3){
                ans.push_back(it->first);
            }
            it++;
        }
        return ans;
    }
};