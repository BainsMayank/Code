class Solution {
public:
    int longestWPI(vector<int>& hours) {
        vector<int> tired;
        for(int i=0;i<hours.size();i++){
            (hours[i] > 8) ? tired.push_back(1) : tired.push_back(-1);
        }
        int best = 0;
        for(int i=0;i<hours.size();i++){
            int sum = 0;
            for(int j=i;j<hours.size();j++){
                sum += tired[j];
                if(sum > 0) best = max(best,j-i+1);
            }
            best = max(best,sum);
        }
        return best;
    }
};