class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mpp;

        for(int x : nums) {
            mpp[x]++;
        }

        int n = nums.size();

        for(auto &p : mpp) {
            if(p.second > n/2) {
                return p.first;
            }
        }

        return -1;
    }
};