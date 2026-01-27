class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)
            return 0;
        int l =0, r=0;
        int n = nums.size();
        long long pro = 1;
        int c=0;
        while(r<n){
            pro *= nums[r];
            while(pro >= k){
                pro /= nums[l];
                l++;
            }
            c += r-l+1;
            r++;
        }
        return c;
    }
};