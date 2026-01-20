class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        for(int i:nums){
            if((i & 1) == 0){
                ans.push_back(-1);
            }
            else{
                int x = i+1 ;
                int lbit = x &-x;
                ans.push_back(i-(lbit >>1));
            }
        }
        return ans;
    }
};