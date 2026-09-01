class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>cur;
        subSet(0,nums, cur);
        return res;
    }
    void subSet(int i, vector<int>&nums, vector<int>&cur){
        if(i==nums.size()){
            res.push_back(cur);
            return;
        }
        cur.push_back(nums[i]);
        subSet(i+1, nums, cur);
        cur.pop_back();
        subSet(i+1, nums, cur);

    }
};