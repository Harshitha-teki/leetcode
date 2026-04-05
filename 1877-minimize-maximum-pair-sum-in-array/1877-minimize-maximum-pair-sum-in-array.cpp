class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = 0;
        int n =nums.size();
        for(int i=0; i<n/2; i++){
            min = max(min, nums[i]+nums[n-i-1]);
        }
        return min;
    }
};