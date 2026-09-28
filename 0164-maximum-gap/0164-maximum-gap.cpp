class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int maxDis = INT_MIN;
        for(int i=1; i<n; i++){
            if(nums[i]-nums[i-1] > maxDis){
                maxDis = nums[i]-nums[i-1];
            }
        }
        return maxDis;
    }
};