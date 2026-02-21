class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0;
        vector<int>v;
        for(int i : nums){
            sum+=i;
        }
        int left=0;
        for(int i : nums){
            left += i;
            v.push_back(abs(sum-left));
            sum -= i;
        }
        return v;
    }
};