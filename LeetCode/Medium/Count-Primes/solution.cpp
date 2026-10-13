class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrim(n+1,true);
        isPrim[0] = isPrim[1]= false;
        for(int i = 2; i* i <=n;i++){
            if(isPrim[i]){
                for(int multiple= i*i;multiple<=n;multiple+=i){
                    isPrim[multiple] = false;
                }
            }
        }
        int cnt = 0;
        for(int i=0; i<n;i++){
            if(isPrim[i]){
                cnt++;
            }
        }
        return cnt;
    }
};