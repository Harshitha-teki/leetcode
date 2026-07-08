class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int> mp;
        int c=0;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]] = i;
        }
        for(int i=0; i<nums.size(); i++){
            if(mp.count(nums[i] + diff) && mp.count(nums[i] + (2*diff)))
            {
                c++;
            }
        }
        return c;
    }
};