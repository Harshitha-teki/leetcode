class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        for(auto i: nums){
            if(i%2 == 0){
                ans.push_back(-1);
            }
            else{
                int t=0;
                while(i&(1<<t)){
                    t++;
                }
                ans.push_back(i^(1<<(t-1)));
            }
        }
        return ans;
    }
};