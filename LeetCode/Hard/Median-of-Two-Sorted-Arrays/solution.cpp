class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;

        auto it1 = nums1.begin();
        auto it2 = nums2.begin();

        while(it1 != nums1.end() && it2 != nums2.end()){
            if(*it1 <= *it2){
                merged.push_back(*it1);
                it1++;
            }
            else{
                merged.push_back(*it2);
                it2++;
            }
        }

        while(it1 != nums1.end()){
            merged.push_back(*it1);
            it1++;
        }

        while(it2 != nums2.end()){
            merged.push_back(*it2);
            it2++;
        }

        double median = 0;
        int n = merged.size();

        if(n % 2 == 0){
            median = ((double)merged[n/2 - 1] + merged[n/2]) / 2;
        }
        else{
            median = merged[n/2];
        }

        return median;
    }
};