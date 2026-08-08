class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        int lmax=0, rmax=0,l=0,total=0,r=n-1;
        while(l<r){
            if(nums[l]<=nums[r]){
                if(lmax < nums[l])
                    lmax = nums[l];
                else
                    total += lmax-nums[l];
                l++;
            }else{
                if(rmax < nums[r])
                    rmax = nums[r];
                else
                    total += rmax-nums[r];
                r--;
            }
        }
        return total;
    }
};