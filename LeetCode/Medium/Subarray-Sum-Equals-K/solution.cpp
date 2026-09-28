class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefSum(nums.size());
        prefSum[0] = nums[0];

        for(int i = 1; i < nums.size(); i++){
            prefSum[i] = prefSum[i-1] + nums[i];
        }

        unordered_map<int, int> st;
        st[0] = 1;
        int cnt = 0;
        for(int i = 0; i < prefSum.size(); i++){
            int complement = prefSum[i] - k;

            if(st.find(complement) != st.end()){
                cnt += st[complement];
            }

            st[prefSum[i]]++;
        }

        return cnt;
    }
};