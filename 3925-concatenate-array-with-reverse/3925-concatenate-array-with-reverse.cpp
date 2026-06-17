class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>v(nums.size()*2);
        for(int i=0; i<nums.size(); i++){
            v[i] = nums[i];
            v[v.size()-i-1] = nums[i];
        }
        return v;
    }
};