class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, n=nums.size(), r=n-1;
        int mi=INT_MAX;
        while(l<r){
            int m = l+(r-l)/2;
            if(nums[m] > nums[r]){
                l = m+1;
            }
            else{
                r = m;
            }
        }
        return nums[l];
    }
};